using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Connection;
using System.Threading.Tasks;
using System.Threading;
using System.Linq;
using LitJson;
using UnityEngine.UI;
using UnityEngine.Android;
using UnityEngine.Events;
using Microsoft.CognitiveServices.Speech;
using Microsoft.CognitiveServices.Speech.Audio;
using SpeechRecognize;
using UnityEngine.SceneManagement;
using System.Text.RegularExpressions;
using Component;

public class Dialog : MonoBehaviour
{
    
    [SerializeField]
    Text qus;
    [SerializeField]
    Text ans1;
    [SerializeField]
    Text ans2;
    [SerializeField]
    Text ans3;
    private string LANG_CODE = "en-US";
    public GameObject uiMicrophone;
    public Image ansImage0;
    public Image ansImage1;
    public Image ansImage2;
    public GameObject sayItAgain; 
    private string sentence = ""; //目前使用者說話的內容
    private string place;
    private string type;
    private Component.Json dialog; //對話內容
    private Component.Json except; //例外對話
    private Component.Json context; //目前對話內容
    private Component.PronunciationSentence pronunciationSentence = new PronunciationSentence();
    SpeechRecognize.Microphone microphone;
    private string dialogPresent ; //目前的對話問題的題號
    Connect connect;
    private bool speechFinal = false;
    private bool isExceptFinish = false;
    Coroutine exceptionCoroutine;



    // Start is called before the first frame update
    void Start () { 
        showSpeechError(false);
        connect = Connect.Instance;
        microphone = SpeechRecognize.Microphone.Instance;
        microphone.Setup(LANG_CODE);
        
        place = PlayerPrefs.GetString("Content", place);
        type = PlayerPrefs.GetString("type", type);

        StartCoroutine("getPresentDialog");
        exceptionCoroutine = StartCoroutine("getExceptionDialog");
        uiMicrophone.SetActive(false);
    }

/// 執行對話練習
    IEnumerator getPresentDialog() {
        // string result1 = "{\"from\":\"unity\",\"to\":\"php\",\"msg\": \"question\",\"topic\":[{\"place\":\"" + place + "\"},{\"type\":[\"" + type + "\"]}]}";
        string result1 = "{\"from\":\"unity\",\"to\":\"php\",\"msg\": \"question\",\"topic\":[{\"place\":\"" + "教室" + "\"},{\"type\":[\"" + "b" + "\"]}]}";
        ConnectToPhp01(result1);
        bool tts = true;
        Pronunciation pronunciation = new Pronunciation();
        do {
            if(tts) {
                changeDialog();
                uiMicrophone.SetActive(false);
                showSpeechError(false);
                microphone.textToSpeech(qus.text);
                tts = false;
            }
            while ((sentence.Length == 0 || sentence.Equals("")) && microphone.IsCompleted) {

                if(speechFinal) turnMenuScene(); //完成全部對話

                Debug.Log("開始收音");
                Debug.Log(microphone.IsCompleted);
                uiMicrophone.SetActive(true);

                // Use Task returned by speechToText and await it to complete
                var speechToTextTask = microphone.PronunciationAssessmentWithMicrophoneAsync();
                yield return new WaitUntil(() => speechToTextTask.IsCompleted);
               
                sentence = speechToTextTask.Result.readOut;
                pronunciation = speechToTextTask.Result;
            }
            if(sentence.Length != 0 || !sentence.Equals("")) {
                chooseNextDialog(pronunciation); //傳入本次的說話內容
                tts = true;
            }
            yield return new WaitForSeconds(2);
        } while (true); 

        // microphone.PronunciationAssessmentWithMicrophoneAsync();
        yield return 0;
    }

    IEnumerator getExceptionDialog() {
        string result1 = "{\"from\":\"unity\",\"to\":\"php\",\"msg\": \"exception\"}";
        string txt = connect.submitMsgToServer(result1);
        except = JsonMapper.ToObject<Component.Json>(txt);
        isExceptFinish = true;
        yield return null;
    }
    public void ConnectToPhp01(string msg) {
        string test = connect.submitMsgToServer(msg);
        dialog = JsonMapper.ToObject<Component.Json>(test);//取得需要的對話內容
        context = dialog;
        dialogPresent = context.topic[0].qus_no;
    }
    public void showSpeechError(bool error) {

        foreach (Transform transform in sayItAgain.transform) {
            transform.gameObject.SetActive(error); 
        }
    }
    public void chooseNextDialog(Pronunciation pronunciation) {
        bool speechError = true;
        // Debug.Log("判斷內容:"+ sentence);
        if(!speechFinal) {
            foreach(var qa in context.topic) {
                // Debug.Log(qa.question + " "+ qus.text);
                if(qa.question.Equals(qus.text)) {
                    for(int i = 0;i < 3;i++){
                        string answer = qa.ans[i].answer;
                        if(answer.Equals(sentence)){ //使用者符合其中一個回覆
                            flashColor(i);
                            pronunciationResult(pronunciation, i);
                            dialogPresent = qa.ans[i].dir_qus;
                            if(dialogPresent.Equals("null")) turnMenuScene();
                            speechError = false;
                            break;
                        }
                    }
                    showSpeechError(speechError);
                    break;
                }
            }
            microphone.IsCompleted = true;
        }
        sentence = "";
    }

    public void turnMenuScene() {
        Debug.Log("已完成全部內容");
        connect.endClient();

        Debug.Log(pronunciationSentence.getAverageAccuracy());
        Debug.Log(pronunciationSentence.getAverageCompleteness());
        Debug.Log(pronunciationSentence.getAverageFluency());
        Debug.Log(pronunciationSentence.getAveragePronunciation());

        //設定要傳送的內容
        PlayerPrefs.SetFloat("averageAccuracy", pronunciationSentence.getAverageAccuracy());
        PlayerPrefs.SetFloat("averageCompleteness", pronunciationSentence.getAverageCompleteness());
        PlayerPrefs.SetFloat("averageFluency", pronunciationSentence.getAverageFluency());
        PlayerPrefs.SetFloat("averagePronunciation", pronunciationSentence.getAveragePronunciation());
        SceneManager.LoadScene(2);
    }
///改變練習腳本
    public void changeDialog() {
        // if(isExceptFinish && !isEntryExceprt) {
        //     isEntryExceprt = true;
        //     StopCoroutine(exceptionCoroutine);
        //     Debug.Log("進入例外路徑....");
        //     context = except;
        //     dialogPresent = context.topic[0].qus_no;
        // } 

        ansImage0.GetComponent<Image>().color = Color.white;
        ansImage1.GetComponent<Image>().color = Color.white;
        ansImage2.GetComponent<Image>().color = Color.white;

        try{
            foreach(var qa in context.topic) {
                if(qa.qus_no.Equals(dialogPresent)) {
                    qus.text = qa.question;
                    ans1.text = qa.ans[0].answer;
                    ans2.text = qa.ans[1].answer;
                    ans3.text = qa.ans[2].answer;
                    break;
                }
            }
            
        } catch{
            ans1.text = "";
            ans2.text = "";
            ans3.text = "";
            speechFinal = true;
        }
        
    }

    public void pronunciationResult(Pronunciation p, int ans) {

        //將此次內容保存
        pronunciationSentence.Add(p.accuracyScore, p.pronunciationScore, p.completenessScore, p.fluencyScore);
    
        //取出所有單詞
        string start = sentence;
        int i = 0;
        foreach(Detail d in p.detail) {
            string word = d.word;
            int accuracyScore = d.accuracyScore;
            int len = word.Length;
            switch (accuracyScore) {
                case < 60:
                    // Debug.Log($"修改{word}顏色red");
                    start = start.Insert(i+len, "</color>");
                    start = start.Insert(i , "<color=#FF1515>");
                    break;
                case < 80:
                    // Debug.Log($"修改{word}顏色yellow");
                    start = start.Insert(i+len, "</color>");
                    start = start.Insert(i , "<color=#FF8B15>");
                    break;
                default :
                    // Debug.Log($"修改{word}顏色black");
                    start = start.Insert(i+len, "</color>");
                    start = start.Insert(i , "<color=#000000>");
                    break;
            }
            i = i + len + 23;
            if(start[i].Equals(@"\s") || start[i].Equals(' ')){
                i++;
            } 
        }

        //修改內容
        switch(ans) {
            case 0:
                ans1.text = start;
                break;
            case 1:
                ans2.text = start;
                break;
            case 2:
                ans3.text = start;
                break;
        }
         Debug.Log(start);
    }


    public void flashColor(int userSpeech) {
        switch (userSpeech)
        {
            case 0:
                ansImage0.GetComponent<Image>().color = new Color32(0xDF, 0xFF, 0xD8, 0xFF);
                break;
            case 1:
                ansImage1.GetComponent<Image>().color = new Color32(0xDF, 0xFF, 0xD8, 0xFF);
                break;
            case 2:
                ansImage2.GetComponent<Image>().color = new Color32(0xDF, 0xFF, 0xD8, 0xFF);
                break;   
        }
    }


}