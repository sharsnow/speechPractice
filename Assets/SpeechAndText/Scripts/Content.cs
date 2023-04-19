using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Connection;
using System;
using System.Text.RegularExpressions;
using System.Text;
using UnityEngine.UI;
using UnityEngine.Android;
using UnityEngine.Events;
using LitJson;
using Microsoft.CognitiveServices.Speech;
using Microsoft.CognitiveServices.Speech.Audio;
using System.Threading.Tasks;
using UnityEngine.SceneManagement;
using Component;
using SpeechRecognize;

public class Content : MonoBehaviour
{
   
    SpeechRecognize.Microphone microphone;
    Connect connect ;
    [SerializeField]
    Text text0;
    [SerializeField]
    Text text1;
    [SerializeField]
    Text text2;
    public GameObject next;
    public GameObject getBack;
    public GameObject first;
    public GameObject second;
    public GameObject third;
    private string place = "";
    private int dir = 0;
    const string LANG_CODE = "zh-TW";
    void Start() {
        microphone = SpeechRecognize.Microphone.Instance;
        microphone.Setup(LANG_CODE);
        Debug.Log("start");
        connect = Connect.Instance;
        StartCoroutine("presentContent");
    }
    private Json topic;
    IEnumerator presentContent() {
        string txt = connect.submitMsgToServer("{\"from\":\"unity\",\"msg\":\"topic\",\"to\":\"php\"}");
        topic = JsonMapper.ToObject<Json>(changeUTF8(txt));
        do {
            changeContent();
            topicImage(topic);
            do {
                microphone.speechToText();
                var speechToTextTask = microphone.speechToText();
                yield return new WaitUntil(() => speechToTextTask.IsCompleted);
                place = speechToTextTask.Result;
            } while(place.Length == 0 || place.Equals(""));
            Debug.Log("跳出!!");
            chooseWhichContent();
        } while (true); 
            
    
    }

    private string changeUTF8(string txt){
        // 將UTF-8編碼轉換為ASCII編碼
       string chineseString = Regex.Replace(txt, @"\\u(?<Value>[a-zA-Z0-9]{4})", 
        m => ((char) int.Parse(m.Groups["Value"].Value, System.Globalization.NumberStyles.HexNumber)).ToString());
        return txt;
    }
    private void changeContent() {
        Debug.Log(topic.topic.Length);

        if(dir < 2) getBack.SetActive(false);
        else getBack.SetActive(true);

        if(dir > topic.topic.Length-3) next.SetActive(false);
        else next.SetActive(true);
        
    }

    private void topicImage(Json tc){
        int num = topic.topic.Length - dir;
        // Debug.Log("case 0");
        switch (num) {
            case 1:
                // Debug.Log("case 1");
                first.SetActive(true);
                second.SetActive(false);
                third.SetActive(false);
                text0.text = tc.topic[dir].place;
                text1.text = "";
                text2.text = "";
                break;
            case 2:
            // Debug.Log("case 2");
                first.SetActive(true);
                second.SetActive(true);
                third.SetActive(false);
                text0.text = tc.topic[dir].place;
                text1.text = tc.topic[dir+1].place;
                text2.text = "";
                break;
            case 3 :
            // Debug.Log("case 3");
                first.SetActive(true);
                second.SetActive(true);
                third.SetActive(true);
                text0.text = tc.topic[dir].place;
                text1.text = tc.topic[dir+1].place;
                text2.text = tc.topic[dir+2].place;
                break;
            default :
            // Debug.Log("default");
                first.SetActive(true);
                second.SetActive(true);
                third.SetActive(true);
                text0.text = tc.topic[dir].place;
                text1.text = tc.topic[dir+1].place;
                text2.text = tc.topic[dir+2].place;
                break;
        }
    }

   public void chooseWhichContent() {
        // if(place.Length!=0){
            place = place.Replace("。", "");
            if(place == "下一個" && !(dir > topic.topic.Length-3)) {
                dir+=3;
                topicImage(topic);
            }
            else if(place =="上一個" && !(dir < 3)) {
                dir -=3;
                topicImage(topic);
            }
            else {
                Json tc = topic;
                int num = topic.topic.Length - dir;
                for(int i = dir;i < dir+num;i++){
                    Debug.Log(tc.topic[i].place);
                    if(tc.topic[i].place.Equals(place)){

                        System.Random myObject = new System.Random();
                        int ranNum= myObject.Next(0, tc.topic[i].type.Length);
                        PlayerPrefs.SetString("Content", place);
                        PlayerPrefs.SetString("type", tc.topic[i].type[ranNum]);
                        Debug.Log("switch");
                        connect.submitMsgToServer("{\"from\":\"unity\",\"msg\": \"disconnect\"}");
                        connect.endClient();
                        SceneManager.LoadScene(0);
                    }
                }
            }
             place = "";
        // }
        
    }
}
