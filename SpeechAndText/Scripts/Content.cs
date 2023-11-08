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
    Connect connect;

    [Header("文字選項")]
    [SerializeField] Text rightOption0;
    [SerializeField] Text rightOption1;
    [SerializeField] Text rightOption2;
    [SerializeField] Text rightSpeechRecord;
    [SerializeField] Text leftOption0;
    [SerializeField] Text leftOption1;
    [SerializeField] Text leftOption2;
    [SerializeField] Text leftSpeechRecord;

    [Header("格式")]
    public GameObject rightNext;
    public GameObject rightGetBack;
    public GameObject rightFirst;
    public GameObject rightSecond;
    public GameObject rightThird;
    public GameObject rightLoadingBG;
    public GameObject rightSpeechReC;
    
    public Image rightLoading = null;

    public GameObject leftNext;
    public GameObject leftGetBack;
    public GameObject leftFirst;
    public GameObject leftSecond;
    public GameObject leftThird;
    public GameObject leftLoadingBG;
    public GameObject leftSpeechReC;
    public Image leftLoading = null;
    private string place = "";
    private int dir = 0;
    private string localIP = "";
    private string sex = "man";
    private Json topic;
    const string LANG_CODE = "zh-TW";
    void Start()
    {
        microphone = new SpeechRecognize.Microphone();
        microphone.Setup(LANG_CODE, sex);
        connect = Connect.Instance;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        StartCoroutine("presentContent");
    }
    private void speechRC(bool active)
    {
        leftSpeechReC.gameObject.SetActive(active);
        rightSpeechReC.gameObject.SetActive(active);
    }
    IEnumerator presentContent()
    {
        speechRC(false);
        var connectFinish = connect.connectServer();
        StartCoroutine(LoadingFill());
        yield return new WaitUntil(() => connectFinish.IsCompleted);
        localIP = connect.acceptLocalIP();
        Debug.Log(localIP);
        string txt = "{\"from\":\"" + localIP + "\",\"to\":\"php\",\"msg\": \"topic\"}";
        Debug.Log(txt);

        var submit = connect.SubmitMsgToServerAsync(txt);
        yield return new WaitUntil(() => submit.IsCompleted);

        var acceptMsgs = connect.AcceptMsgsAsync();
        yield return new WaitUntil(() => acceptMsgs.IsCompleted);
        txt = acceptMsgs.Result;
        Debug.Log(txt);
        foreach (Transform transform in leftLoadingBG.transform) {
            leftLoadingBG.gameObject.SetActive(false);
        }
        foreach (Transform transform in rightLoadingBG.transform) {
            rightLoadingBG.gameObject.SetActive(false);
        }
        topic = JsonMapper.ToObject<Json>(changeUTF8(txt));
        do
        {
            speechRC(false);
            changeContent();
            topicImage(topic);
            do
            {
                var speechToTextTask = microphone.speechToText();
                yield return new WaitUntil(() => speechToTextTask.IsCompleted);
                place = speechToTextTask.Result;
            } while (place.Length == 0 || place.Equals(""));
            leftSpeechRecord.text = place;
            rightSpeechRecord.text = place;
            speechRC(true);
            Debug.Log("跳出!!");
            yield return new WaitForSeconds(1f);
            chooseWhichContent();
        } while (true);


    }
    private string changeUTF8(string txt)
    {
        // 將UTF-8編碼轉換為ASCII編碼
        string chineseString = Regex.Replace(txt, @"\\u(?<Value>[a-zA-Z0-9]{4})",
         m => ((char)int.Parse(m.Groups["Value"].Value, System.Globalization.NumberStyles.HexNumber)).ToString());
        return txt;
    }
    private void changeContent()
    {
        //  Debug.Log(dir);

        if (dir < 2)
        {
            leftGetBack.GetComponent<Image>().color = new Color32(113, 113, 113, 0);
            rightGetBack.GetComponent<Image>().color = new Color32(113, 113, 113, 0);
            
        }
        else 
        {
            leftGetBack.GetComponent<Image>().color = new Color32(0, 0, 0, 255);
            rightGetBack.GetComponent<Image>().color = new Color32(0, 0, 0, 255);
            
        }

        if (dir > topic.topic.Length - 3)
        {
            leftNext.GetComponent<Image>().color = new Color32(113, 113, 113, 0);
            rightNext.GetComponent<Image>().color = new Color32(113, 113, 113, 0);
            
        }
        else
        {
            leftNext.GetComponent<Image>().color = new Color32(0, 0, 0, 255);
            rightNext.GetComponent<Image>().color = new Color32(0, 0, 0, 255);
            
        } 

    }

    private void topicImage(Json tc)
    {
        int num = topic.topic.Length - dir;
        // Debug.Log("case 0");
        switch (num)
        {
            case 1:
                // Debug.Log("case 1");
                leftFirst.SetActive(true);
                rightFirst.SetActive(true);

                leftSecond.SetActive(false);
                rightSecond.SetActive(false);

                leftThird.SetActive(false);
                rightThird.SetActive(false);

                rightOption0.text = tc.topic[dir].place;
                leftOption0.text = tc.topic[dir].place;

                rightOption1.text = "";
                leftOption1.text = "";

                rightOption2.text = "";
                leftOption2.text = "";
                break;
            case 2:
                // Debug.Log("case 2");
                leftFirst.SetActive(true);
                rightFirst.SetActive(true);

                leftSecond.SetActive(true);
                rightSecond.SetActive(true);

                leftThird.SetActive(false);
                rightThird.SetActive(false);

                rightOption0.text = tc.topic[dir].place;
                leftOption0.text = tc.topic[dir].place;

                rightOption1.text = tc.topic[dir + 1].place;
                leftOption1.text = tc.topic[dir + 1].place;

                rightOption2.text = "";
                leftOption2.text = "";

                break;
            case 3:
                // Debug.Log("case 3");
                leftFirst.SetActive(true);
                rightFirst.SetActive(true);

                leftSecond.SetActive(true);
                rightSecond.SetActive(true);

                leftThird.SetActive(true);
                rightThird.SetActive(true);

                rightOption0.text = tc.topic[dir].place;
                leftOption0.text = tc.topic[dir].place;

                rightOption1.text = tc.topic[dir + 1].place;
                leftOption1.text = tc.topic[dir + 1].place;

                rightOption2.text = tc.topic[dir + 2].place;
                leftOption2.text = tc.topic[dir + 2].place;
                break;
            default:
                // Debug.Log("default");
                leftFirst.SetActive(true);
                rightFirst.SetActive(true);

                leftSecond.SetActive(true);
                rightSecond.SetActive(true);

                leftThird.SetActive(true);
                rightThird.SetActive(true);

                rightOption0.text = tc.topic[dir].place;
                leftOption0.text = tc.topic[dir].place;

                rightOption1.text = tc.topic[dir + 1].place;
                leftOption1.text = tc.topic[dir + 1].place;

                rightOption2.text = tc.topic[dir + 2].place;
                leftOption2.text = tc.topic[dir + 2].place;
                break;
        }
    }

    public void chooseWhichContent()
    {
        // if(place.Length!=0){
        place = place.Replace("。", "");
        if (place == "下一個" && !(dir > topic.topic.Length - 3))
        {
            dir += 3;
            topicImage(topic);
        }
        else if (place == "上一個" && !(dir < 3))
        {
            dir -= 3;
            topicImage(topic);
        }
        else
        {
            Json tc = topic;
            int num = topic.topic.Length - dir;
            for (int i = dir; i < dir + num; i++)
            {
                if (tc.topic[i].place.Equals(place))
                {

                    System.Random myObject = new System.Random();
                    int ranNum = myObject.Next(0, tc.topic[i].type.Length);
                    PlayerPrefs.SetString("Content", place);
                    PlayerPrefs.SetString("type", tc.topic[i].type[ranNum]);
                    Debug.Log("switch");
                    // connect.submitMsgToServer("{\"from\":\"unity\",\"msg\": \"disconnect\"}");
                    connect.endClient();
                    SceneManager.LoadScene("Dialog");
                }
            }
        }
        place = "";
        // }

    }
    IEnumerator LoadingFill()
    {
        float elapsedTime = 0.0f;
        float duration = 4.0f;
        float fillAmount = 0.0f;
        bool shouldFill = true;
        //loading.gameObject.SetActive(true); 
        while (shouldFill)
        {
            if (elapsedTime >= duration)
            {
                fillAmount = 0.0f;
                elapsedTime = 0.0f;

                if (leftLoading.gameObject.activeSelf == false)
                {
                    shouldFill = false;
                    break;
                }
            }

            elapsedTime += Time.deltaTime;
            fillAmount = Mathf.Lerp(0.0f, 1.0f, elapsedTime / duration);
            leftLoading.fillAmount = fillAmount;
            rightLoading.fillAmount = fillAmount;
            yield return null;
        }
    }
}
