using UnityEngine;
using Connection;
using SpeechRecognize;
using System.Text.RegularExpressions;
using System.Text;
using UnityEngine.UI;
using System.Threading.Tasks;
using System.Collections.Generic;
using System.Collections;
using System;
using UnityEngine.SceneManagement;

public class HomePage : MonoBehaviour
{
    private string LANG_CODE = "zh-TW";
    private int count = 0;
    private string speechText = "";
    private bool isWaitingForSpeech = false;
    private bool check = true;
    public GameObject uiMicrophone1;
    public GameObject uiMicrophone2;
    public GameObject voiceBGL;
    public GameObject voiceBGR;
    public Text voiceTextL;
    public Text voiceTextR;
    public string sex ;
    private SpeechRecognize.Microphone microphone;
    [SerializeField]Text textChooseUpL;
    [SerializeField]Text textChooseUpR;
    [SerializeField]Text textChooseDownL;
    [SerializeField]Text textChooseDownR;
    [SerializeField] Text chooseQL;
    [SerializeField] Text chooseQR;

    void Start() {
        microphone = new SpeechRecognize.Microphone();
        microphone.Setup(LANG_CODE, sex);
        uiMicrophone1.SetActive(false);
        uiMicrophone2.SetActive(false);
        showVoiceBG(false);
        StartCoroutine(sexToChoose());//同時執行
    }

    void showVoiceBG(bool show, string txt = "") {
        if(show) {
            speechText = txt;
            voiceTextL.text = speechText;
            voiceTextR.text = speechText;
            voiceBGL.gameObject.SetActive(true);
            voiceBGR.gameObject.SetActive(true);
        }
        else {
            voiceTextL.text = " ";
            voiceTextR.text = " ";
            speechText = "";
            voiceBGL.gameObject.SetActive(false);
            voiceBGR.gameObject.SetActive(false); 
        }
    }
    void turnWhiteIsSex(bool b) {
        textChooseUpL.color = Color.white;
        textChooseDownL.color = Color.white;
        textChooseUpR.color = Color.white;
        textChooseDownR.color = Color.white;
        if(b) {
            chooseQL.text = "你想要選擇什麼性別?";
            textChooseUpL.text = "女人";
            textChooseDownL.text = "男人";
            chooseQR.text = "你想要選擇什麼性別?";
            textChooseUpR.text = "女人";
            textChooseDownR.text = "男人";
        }
        else {
            chooseQL.text = "你想要選擇什麼對話模式";
            textChooseUpL.text = "開放式對話";
            textChooseDownL.text = "封閉式對話";
            chooseQR.text = "你想要選擇什麼對話模式";
            textChooseUpR.text = "開放式對話";
            textChooseDownR.text = "封閉式對話";
        }
    }
    private async Task<string> SpeechToTextAsync()
    {
        var speechToText = microphone.speechToText();
        await speechToText;
        return speechToText.Result;
    }
    private async Task <bool> speech()
    {
       
        uiMicrophone1.SetActive(true);
        uiMicrophone2.SetActive(true);
        speechText = await SpeechToTextAsync();
        uiMicrophone1.SetActive(false);
        uiMicrophone2.SetActive(false);
        if(!string.IsNullOrEmpty(speechText)){
            showVoiceBG(true, speechText);
            await System.Threading.Tasks.Task.Delay(2000);
        }
        else {
            showVoiceBG(true, "偵測失敗");
            await System.Threading.Tasks.Task.Delay(2000);
            count++;
            if(count == 5){
                SceneManager.LoadScene("load");
            }
        }
        isWaitingForSpeech = false;
        return true;
    }

    IEnumerator Exit()
    {
        chooseQL.text = "確定退出遊戲?";
        chooseQR.text = "確定退出遊戲?";
        textChooseUpL.text = "是";
        textChooseDownL.text = "否";
        textChooseUpR.text = "是";
        textChooseDownR.text = "否";
        bool sex2Speech = true;
        bool isWaitingForExit = false;
        check = true;

        while (true)
        {
            if (!isWaitingForExit)
            {
                showVoiceBG(false);
                isWaitingForExit = true;
                sex2Speech = true;
                yield return microphone.textToSpeech("確定退出遊戲?");
            }
            else if (microphone.IsCompleted && isWaitingForExit && sex2Speech)
            {   
                sex2Speech = false;
                var speechTask = speech();
                yield return new WaitUntil(() => speechTask.IsCompleted);
                if (speechText.Contains("是")) {
                    //Debug.Log("123");
                    textChooseUpL.color = Color.black;
                    textChooseUpR.color = Color.black;
                    Application.Quit();
                }
                else if (speechText.Contains("否")) {
                    isWaitingForSpeech = false;
                    check = false ;
                    break;
                }
                isWaitingForExit = false;
            }
           yield return null;
        }
    }


    IEnumerator sexToChoose() {
        bool sex2Speech = true;
        while (true)
        { 
           if(!isWaitingForSpeech) {
                showVoiceBG(false);
                turnWhiteIsSex(true);
                yield return microphone.textToSpeech(chooseQL.text);
                isWaitingForSpeech = true;   
                sex2Speech = true;
            }
            else if(microphone.IsCompleted && isWaitingForSpeech && sex2Speech) {
                sex2Speech = false;
                var speechTask = speech();
                yield return new WaitUntil(() => speechTask.IsCompleted);
                if(speechText.Contains("女")) {
                    PlayerPrefs.SetString("Sex", "woman");
                    textChooseUpL.color = Color.black;
                    textChooseUpR.color = Color.black;
                    //yield return new WaitForSeconds(2);
                    StartCoroutine("SpeechToChoose");
                    break;
                }
                else if(speechText.Contains("男")) {
                    PlayerPrefs.SetString("Sex", "man");
                    textChooseDownR.color = Color.black;
                    textChooseDownL.color = Color.black;
                    //yield return new WaitForSeconds(2);
                    StartCoroutine("SpeechToChoose");
                    break;
                }
                else if(speechText.Contains("退出遊戲")) {
                    StartCoroutine(Exit());
                    yield return new WaitUntil(() => !check);
                }  
            }
            yield return null;
        }
    }

    IEnumerator SpeechToChoose() {
        isWaitingForSpeech = false;
        while (true)
        { 
            if(!isWaitingForSpeech) {
                showVoiceBG(false);
                turnWhiteIsSex(false);
                isWaitingForSpeech = true;  
                yield return microphone.textToSpeech(chooseQL.text);
            }
            else if(microphone.IsCompleted && isWaitingForSpeech) {
                var speechTask = speech();
                yield return new WaitUntil(() => speechTask.IsCompleted);
                if(speechText.Contains("開") ) {
                    textChooseUpL.color = Color.black;
                    textChooseUpR.color = Color.black;
                    //yield return new WaitForSeconds(2);
                    SceneManager.LoadScene("opendialog");
                    
                }
                else if(speechText.Contains("封") || speechText.Contains("封閉")) {
                    textChooseDownL.color = Color.black;
                    textChooseDownR.color = Color.black;
                    //yield return new WaitForSeconds(2);
                    SceneManager.LoadScene("Dialog");
                }
                else if(speechText.Contains("退出遊戲")) {
                    StartCoroutine(Exit());
                    yield return new WaitUntil(() => !check);
                } 
            }
            yield return null; 
        }  
    }

}