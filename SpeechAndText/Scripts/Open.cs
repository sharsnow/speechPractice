using System.ComponentModel;
using UnityEngine;
using Connection;
using System.Threading.Tasks;
using SpeechRecognize;
using System.Text.RegularExpressions;
using System.Text;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Collections;
using System;
using System.Linq;
using UnityEngine.SceneManagement;
using LitJson;
using Component;


public class Open : MonoBehaviour
{

    private string LANG_CODE = "en-US";
    private Connect connect;
    private string speechText = "";
    private string responseText = "";
    public string sex = "man";
    private string localIP = "";
    public string action;
    // public ActionSpeechSync actionSpeechSync;
    [Header("背景")]
    public GameObject leftSight;
    public GameObject rightSight;
    [Header("文字")]
    [SerializeField] Text textUserRight;
    [SerializeField] Text textUserLeft;
    [SerializeField] Text textBotRight;
    [SerializeField] Text textBotLeft;

    [Header("圖片")]
    public GameObject uiMicrophoneL;
    public GameObject uiMicrophoneR;
    public Image loadingL = null;
    public Image loadingR = null;
    public Image waiteForDialogLeft;
    public Image waiteForDialogRight;
    private SpeechRecognize.Microphone microphone;

    async void Start()
    {
        uiMicrophoneL.SetActive(false);
        uiMicrophoneR.SetActive(false);
        StartCoroutine(getWaited());//同時執行
        
        PlayerPrefs.SetString("Action", "");
        PlayerPrefs.SetInt("animation", 0);
    }
    IEnumerator getWaited()
    {
        Debug.Log("getWaited()");
        microphone = new SpeechRecognize.Microphone();
        sex = PlayerPrefs.GetString("Sex", sex);
        microphone.Setup(LANG_CODE, sex);

        connect = Connect.Instance;
        var connectFinish = connect.connectServer();
        yield return new WaitUntil(() => connectFinish.IsCompleted);

        localIP = connect.acceptLocalIP();
        Debug.Log($"localIP:{localIP}");
        initial(false);
        loadingL.gameObject.SetActive(false);
        loadingR.gameObject.SetActive(false);
        float indicatorTimer = 0.0f;
        bool isFinishARShow = false;
        while (true)
        {

            isFinishARShow = GameObject.Find("AR Session Origin").GetComponent<ARShowObject>().isFinishARShow;
            if (isFinishARShow) break;
            indicatorTimer += (Time.deltaTime) % 10;

            //執行等待動作
            if (indicatorTimer > 1)
            {
                indicatorTimer = 0;
            }

            waiteForDialogLeft.fillAmount = indicatorTimer;
            waiteForDialogRight.fillAmount = indicatorTimer;
            yield return new WaitForSeconds(0.1f);
        }
        initial(true);
        waiteForDialogLeft.fillAmount = 0.0f;
        waiteForDialogRight.fillAmount = 0.0f;

        StartCoroutine("SpeechToTextSend");

        yield return null;
    }
    IEnumerator LoadingFill()
    {
        float elapsedTime = 0.0f;
        float duration = 2.0f;
        float fillAmount = 0.0f;
        bool shouldFill = true;
        loadingL.gameObject.SetActive(true);
        loadingR.gameObject.SetActive(true);
        while (shouldFill)
        {
            if (elapsedTime >= duration)
            {
                fillAmount = 0.0f;
                elapsedTime = 0.0f;

                if (loadingL.gameObject.activeSelf == false)
                {
                    shouldFill = false;
                    break;
                }
            }

            elapsedTime += Time.deltaTime;
            fillAmount = Mathf.Lerp(0.0f, 1.0f, elapsedTime / duration);
            loadingL.fillAmount = fillAmount;
            loadingR.fillAmount = fillAmount;
            yield return null;
        }

    }

    public void initial(bool init)
    {
        foreach (Transform transform in leftSight.transform)
        {
            transform.gameObject.SetActive(init);
        }
        foreach (Transform transform in rightSight.transform)
        {
            transform.gameObject.SetActive(init);
        }
    }

    IEnumerator SpeechToTextSend()
    {
        // string cmd = "{\"from\":\"C#Client\"}";
        // connect.submitMsgToServer(cmd);
        bool tts = true;

        while (true)
        {
            if (tts)
            {
                loadingL.gameObject.SetActive(false);
                loadingR.gameObject.SetActive(false);
                tts = false;
                Debug.Log("請說話");
                //microphone.speechToText();
                uiMicrophoneL.SetActive(true);
                uiMicrophoneR.SetActive(true);

                textBotLeft.text = "";
                textBotRight.text = "";
                textUserLeft.text = "";
                textUserRight.text = "";

                var speechToText = microphone.speechToText();//等待函式結束後執行
                yield return new WaitUntil(()=> speechToText.IsCompleted );//-OnStateEnter------------
                //Debug.Log(speechToText.Result) ;
                speechText = speechToText.Result;
                textUserLeft.text = speechText;
                textUserRight.text = speechText;
                uiMicrophoneL.SetActive(false);
                uiMicrophoneR.SetActive(false);

                StartCoroutine(LoadingFill());
            }
            else if (!(speechText.Length == 0 && speechText.Equals("")))
            {
                if (speechText.Contains("homepage") || speechText.Contains("Home page") || speechText.Contains("Homepage") || speechText.Contains("home page"))
                {
                    SceneManager.LoadScene("HomePage");
                    break;
                }

                string cmd = "{ \"from\":\"" + localIP + "\",\"msg\":\" " + speechText + "\",\"to\":\"PyClient\"}";
                var submitMsg = connect.SubmitMsgToServerAsync(cmd); 
                yield return new WaitUntil(() => submitMsg.IsCompleted);

                var receiveMsg = connect.AcceptMsgsAsync(); //Exit ~ Enter
                yield return new WaitUntil(() => receiveMsg.IsCompleted);

                responseText = receiveMsg.Result;
                Component.Json json = JsonMapper.ToObject<Component.Json>(responseText);
                
                action = json.dict; // 設定動作
                action = action.Trim();
                Debug.Log($"動作{action}");
                PlayerPrefs.SetString("AnimationMoving", "true");
                PlayerPrefs.SetString("Action", action);
              
                loadingL.gameObject.SetActive(false);
                loadingR.gameObject.SetActive(false);
                textBotLeft.text = json.msg;
                textBotRight.text = json.msg;
                
                var ttsFinish = microphone.textToSpeech(json.msg);
                yield return new WaitUntil(() => ttsFinish.IsCompleted);
                tts = true;
                
            }
            else
            {
                tts = true;
            }
        }
    }
}