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

public class Dialog : MonoBehaviour {
    [Header("背景")]
    public GameObject leftSight;
    public GameObject rightSight;

    [Header("文字宣告(左)")]
    [SerializeField]Text qusLeft;
    [SerializeField]Text ans1Left;
    [SerializeField]Text ans2Left;
    [SerializeField]Text ans3Left;
    [SerializeField]Text userSpeechLeft;

    [Header("文字宣告(右)")]
    [SerializeField]Text qusRight;
    [SerializeField]Text ans1Right;
    [SerializeField]Text ans2Right;
    [SerializeField]Text ans3Right;
    [SerializeField]Text userSpeechRight;

    [Header("麥克風(左)")]
    public GameObject uiMicrophoneLeft;

    [Header("麥克風(右)")]
    public GameObject uiMicrophoneRight;

    [Header("圖片(左)")]
    public GameObject layoutLeft;
    public GameObject qusImageLeft;
    public GameObject ansImage0Left;
    public GameObject ansImage1Left;
    public GameObject ansImage2Left;
    public GameObject ImageSpeechLeft;
    public GameObject sayItAgainLeft;
    public GameObject sentenceErrorLeft;
    public Image waiteForDialogLeft;

    [Header("圖片(右)")]
     public GameObject layoutRight;
    public GameObject qusImageRight;
    public GameObject ansImage0Right;
    public GameObject ansImage1Right;
    public GameObject ansImage2Right;
    public GameObject ImageSpeechRight;
    public GameObject sayItAgainRight;
    public GameObject sentenceErrorRight;
    public Image waiteForDialogRight;

    [Header("QR 顯示內容")]
    
    [SerializeField] Text showARRight;
    [SerializeField] Text showARLeft;
    [SerializeField]public GameObject showImageRight;
    [SerializeField]public GameObject showImageLeft;


    private string LANG_CODEEns = "en-US";
    private string LANG_CODEChs = "zh-TW";
    private string sentence = ""; //目前使用者說話的內容
    
    private string place;
    private string type;
    private Component.Json dialog; //對話內容
    private Component.Json except; //例外對話
    private Component.Json context; //目前對話內容
    private Component.PronunciationSentence pronunciationSentence = new PronunciationSentence();
    SpeechRecognize.Microphone microphoneEns;
    SpeechRecognize.Microphone microphoneChs;
    private string currentQuestion = "";
    
    private int sentenceErrorTimes = 0; //句子錯誤次數
    private string dialogPresent ; //目前的對話題號
    private string dialogPrevious = "";//先前的對話題號
    public string action = ""; //要顯示的動作
    Connect connect;
    private bool speechFinal = false;
    private bool isExceptFinish = false;
    private string localIP = "";
    public string sex ; //設置人物性別
    bool finishRound = false; //開啟新的一輪
    bool isGetExcept = false;
    bool startDialog = false;
    

    // Start is called before the first frame update
    void Start () {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        StartCoroutine("getWaited");
        StartCoroutine("getInitial");
        
        setActive(false);
    }
    IEnumerator Exception() {
        float indicatorTimer = 0.0f;
        var connectPhp = ConnectToPhp("except");
        yield return new WaitUntil(() => connectPhp.IsCompleted); //取得例外路徑
        isGetExcept = true;
        except = connectPhp.Result;
        while (!startDialog) //尚未開始對話
        {
            
           yield return new WaitForSeconds(10.0f);
                var rand = new System.Random();
                Byte[] bytes = new byte[1];
                rand.NextBytes(bytes);
                if(bytes[0] % 5 == 0) { //改成例外路徑
                    context = except;
                    dialogPresent = context.topic[0].qus_no;
                    Debug.Log("執行例外路徑");
                    startDialog = true;
                    finishRound = true;
                    PlayerPrefs.SetString("QRcodeData", "start");
                    PlayerPrefs.SetString("ARRaycast.Raycast", "true");
                    PlayerPrefs.SetString("ARShowObject", "false");
                    break;
                }else{
                    indicatorTimer = 0.0f;
                }
        }
        
    }
    ///初始化內容
    IEnumerator getInitial() {
        
        yield return new WaitForEndOfFrame();
        Debug.Log("getInitial");
        
        connect = Connect.Instance;
        microphoneEns = new SpeechRecognize.Microphone();
        microphoneChs = new SpeechRecognize.Microphone();

        var connectFinish = connect.connectServer();
        yield return new WaitUntil(() =>connectFinish.IsCompleted);
        localIP = connect.acceptLocalIP();
        Debug.Log(localIP); //取得連接
       
       
        // place = "教室";
        sex = PlayerPrefs.GetString("Sex", "man");

        microphoneChs.Setup(LANG_CODEChs, sex);
        microphoneEns.Setup(LANG_CODEEns, sex);

        uiMicrophoneLeft.SetActive(false);
        uiMicrophoneRight.SetActive(false);
        showSpeechError(false);
        sentenceHint(false);
        StartCoroutine("Exception"); //取得例外路徑
        Debug.Log("進入while");
        while (!startDialog)
        {
            yield return new WaitUntil(() => PlayerPrefs.GetString("QRcodeData", "null") != "null");
            place = PlayerPrefs.GetString("QRcodeData", "null");
            yield return new WaitUntil(() => isGetExcept);
            var phpConnect = ConnectToPhp("question", place);
            yield return new WaitUntil(() => phpConnect.IsCompleted);
            Json tmp = phpConnect.Result;
            if ( tmp.topic.Length < 1)
            {
                Debug.Log("錯");
                PlayerPrefs.SetString("QRcodeData", "null");
                showAR(false);
                Debug.Log("錯誤!");
                StartCoroutine(ShowARWithDelay());
            }
            else
            {
                Debug.Log("3");
                showAR(true, place);
                Debug.Log("4");
                StartCoroutine(ShowARWithDelay()); //取得對話腳本
                yield return new WaitUntil(() => PlayerPrefs.GetString("ARRaycast.Raycast", "true") == "true"); //掃描至地板
                if(!startDialog) { //尚未開始對話
                    context = phpConnect.Result;
                    dialogPresent = context.topic[0].qus_no;
                    action = context.topic[0].action;
                    Debug.Log("執行原本路徑");
                    startDialog = true;
                    finishRound = true;
                }
                break;
            }
        }

        
       
    }

    //等待初始化
    IEnumerator getWaited() {
        Debug.Log("getWaited()");
        initial(false);
        float indicatorTimer = 0.0f;
        while(!startDialog) {
           
            // if(finishRound) break;
            indicatorTimer += (Time.deltaTime) % 10;
            //執行等待動作
            if(indicatorTimer > 1){
                indicatorTimer = 0;
            }
            
            waiteForDialogLeft.fillAmount = indicatorTimer;
            waiteForDialogRight.fillAmount = indicatorTimer;
            yield return new WaitForSeconds(0.1f);
        }
        initial(true);
        
        PlayerPrefs.SetString("Action", action);
        waiteForDialogLeft.fillAmount = 0.0f;
        waiteForDialogRight.fillAmount = 0.0f;
        StartCoroutine("getPresentDialog");

        yield return null;
    }
    public async Task<Json> ConnectToPhp(string msg, string place = null) {
        Debug.Log("ConnectToPhp");
        Component.Json json = new Component.Json();
        string txt = "";

        if(msg == "except") {
            txt = "{\"from\":\""+ localIP +"\",\"to\":\"php\",\"msg\": \"exception\"}";
        }
        else {
            txt = "{\"from\":\"" + localIP + "\",\"to\":\"php\",\"msg\": \"question\",\"topic\":[{\"place\":\"" + place + "\"}]}";
            // txt = "{\"from\":\"" + localIP + "\",\"to\":\"php\",\"msg\": \"question\",\"topic\":[{\"place\":\"" +"教室" + "\"},{\"type\":[\""+ "b" +"\"]}]}";
        }
        
        var submitFinish = await connect.SubmitMsgToServerAsync(txt);
        var acceptMsgs = await connect.AcceptMsgsAsync();

        json = JsonMapper.ToObject<Component.Json>(acceptMsgs);//取得需要的對話內容
        
        return json;
    }
    IEnumerator ShowARWithDelay()
    {
        yield return new WaitForSeconds(3.0f); // 等待一段时间

        setActive(false); // 隐藏AR内容
    }
    public void showAR(bool success, string txt = null) {
        float time =0.0f;
        time +=Time.deltaTime;
        if(success) {
            showARRight.text = $"顯示成功: {txt}";
            showARLeft.text = $"顯示成功: {txt}";
        }
        else{
            showARRight.text = $"顯示失敗";
            showARLeft.text = $"顯示失敗";
        }
        setActive(true);
        
    }
    public void setActive(bool init) {
        Debug.Log($"顯示{init}");
        foreach (Transform transform in showImageRight.transform) {
            transform.gameObject.SetActive(init); 
        }
        foreach (Transform transform in showImageLeft.transform) {
            transform.gameObject.SetActive(init); 
        }
    }
/// 執行對話練習
    IEnumerator getPresentDialog() {
        bool tts = true;
        Pronunciation pronunciation = new Pronunciation();
        do {
            if(tts && finishRound) {
                Debug.Log("開始執行");
                yield return new WaitForSeconds(1f);
                userSpeechLeft.text = "";
                userSpeechRight.text = "";
                if(!dialogPresent.Equals(dialogPrevious)){
                    changeDialog();
                    sentenceHint(false);
                    sentenceErrorTimes = 0;
                } 
                PlayerPrefs.SetString("AnimationMoving", "true");
                dialogPrevious = dialogPresent;    
                
                uiMicrophoneRight.SetActive(false);
                uiMicrophoneLeft.SetActive(false);
                showSpeechError(false);
                
                qusLeft.text = currentQuestion;
                qusRight.text = currentQuestion;
                LayoutRebuilder.ForceRebuildLayoutImmediate(qusImageLeft.GetComponent<RectTransform>());
                LayoutRebuilder.ForceRebuildLayoutImmediate(qusImageRight.GetComponent<RectTransform>());
                yield return microphoneEns.textToSpeech(currentQuestion);
                // yield return qusLeft.DOText(currentQuestion , duration).SetEase(Ease.Linear);
                // yield return qusRight.DOText(currentQuestion , duration).SetEase(Ease.Linear);

                sentence = "";
                tts = false;

            }
            while (microphoneEns.IsCompleted && finishRound && !tts) {

                userSpeechLeft.text = "";
                userSpeechRight.text = "";
                if(speechFinal) turnMenuScene(); //完成全部對話
                Debug.Log("開始收音");
                uiMicrophoneRight.SetActive(true);
                uiMicrophoneLeft.SetActive(true);

                // Use Task returned by speechToText and await it to complete
               
                var speechToTextTask = microphoneEns.PronunciationAssessmentWithMicrophoneAsync();
                
                yield return new WaitUntil(() => speechToTextTask.IsCompleted);
                try
                {
                    sentence = speechToTextTask.Result.readOut;
                    pronunciation = speechToTextTask.Result;

                    userSpeechRight.text = sentence;
                    userSpeechLeft.text = sentence;
                }
                catch (System.Exception e)
                {
                    
                    Debug.Log(e.Message);
                    uiMicrophoneLeft.SetActive(false);
                    uiMicrophoneRight.SetActive(false);
                    tts = true;
                    break;
                }
                

                if(!(sentence.Length < 1)) {

                    LayoutRebuilder.ForceRebuildLayoutImmediate(ImageSpeechLeft.GetComponent<RectTransform>());
                    LayoutRebuilder.ForceRebuildLayoutImmediate(ImageSpeechRight.GetComponent<RectTransform>());
                    finishRound = false;
                    chooseNextDialog(pronunciation); //傳入本次的說話內容
                    tts = true;
                    
                    break;
                }
                
            }
          
            yield return new WaitForSeconds(1);
        } while (true); 

        yield return null;
    }

    public void initial(bool init) {
        foreach (Transform transform in leftSight.transform) {
            transform.gameObject.SetActive(init); 
        }
        foreach (Transform transform in rightSight.transform) {
            transform.gameObject.SetActive(init); 
        }
    }
    public void showSpeechError(bool error) {

        foreach (Transform transform in sayItAgainRight.transform) {
            transform.gameObject.SetActive(error); 
        }
        foreach (Transform transform in sayItAgainLeft.transform) {
            transform.gameObject.SetActive(error); 
        }
    }


    public void chooseNextDialog(Pronunciation pronunciation) {
        // microphoneEns.IsCompleted = true;
        string sentenceTmp = sentence;
        foreach(var qa in context.topic) {
            
            if(qa.question.Equals(currentQuestion)) {
                Debug.Log("chooseNextDialog");
                //比較選擇的答案
                if(!compareSentence(qa, sentenceTmp, pronunciation)){
                    //判斷錯誤次數
                    sentenceErrorTimes ++;
                    
                    // Debug.Log("sentenceHint" + sentenceErrorTimes);
                    if(sentenceErrorTimes > 2) {
                        sentenceHint(true); 
                        return ;
                    } else {
                        showSpeechError(true);
                    } 
                    finishRound = true;
                    return;
                }
                else{
                    finishRound = true;
                    return ; 
                }
            }
        }
           
        return ;
    }
    //比較使用者選擇的解答
    public bool compareSentence(Root qa, string userSpeech, Pronunciation pronunciation) {
        string pattern = @"[.!'?,]"; //標點符號
        string continuePattern = @"[-]"; //連綿
        string digital =  @"\d+"; //數字
        string result ="";
        string userTmp = "";

        for(int i = 0;i < qa.ans.Length;i++){
            string answer = qa.ans[i].answer;
           
            userTmp = userSpeech;
            result = answer;

            bool isUserSpeechDigital = Regex.IsMatch(userTmp, digital);
            bool isAnswerDigital = Regex.IsMatch(result, digital);

            result = Regex.Replace(answer.ToLower(), pattern, "");
            userTmp = Regex.Replace(userTmp, continuePattern, " ");
            result = Regex.Replace(result, continuePattern, " ");

            if( isUserSpeechDigital && isAnswerDigital )  //說話者語文本皆有數字
            {
                // Debug.Log($"說話者與文本皆有數字");
                userTmp = Regex.Replace(pronunciation.ITN.ToLower(), pattern, ""); //數字
            } 
            else if(isUserSpeechDigital) //說話者有數字
            {
                // Debug.Log($"說話者有數字");
                userTmp = Regex.Replace(pronunciation.Lexical.ToLower(), pattern, "");   //說話轉文字
            }
            else if(isAnswerDigital) //文本有數字
            {
            //    UnityEngine.Debug.Log($"文本有數字");
                userTmp = Regex.Replace(pronunciation.ITN.ToLower(), pattern, ""); //數字
            }
            else //兩者皆無數字
            {
                // Debug.Log($"兩者皆無數字");
                userTmp = Regex.Replace(userSpeech.ToLower(), pattern, "");
            }
            // Debug.Log($"處理後的結果userSpeech: {userTmp}");
            // Debug.Log($"處理後的結果result: {result}");

            if(result.Contains(userTmp)){ //使用者符合其中一個回覆
                Debug.Log("compareSentence");
                flashColor(i);
                pronunciationResult(pronunciation, i);
                changeAnotherQuestion(qa.ans[i].dir_qus);
                
                return true;
            }
        }
        return false;
    }

    public void changeAnotherQuestion(string dir) {
        dialogPresent = dir;
        if(dialogPresent.Length > 3)
        {
            string[] dirs = dialogPresent.Split('.');

            var rand = new System.Random();
            Byte[] bytes = new byte[1];
            rand.NextBytes(bytes);
            dialogPresent = dirs[bytes[0] % dirs.Length];
        }
        if(dialogPresent.Equals("null")) turnMenuScene(); //ans後沒有內容
        else if (dialogPresent.Length == 0) turnMenuScene();
    }
    public void turnMenuScene() {
        Debug.Log("已完成全部內容");
        connect.endClient();

        //設定要傳送的內容
        PlayerPrefs.SetFloat("averageAccuracy", pronunciationSentence.getAverageAccuracy());
        PlayerPrefs.SetFloat("averageCompleteness", pronunciationSentence.getAverageCompleteness());
        PlayerPrefs.SetFloat("averageFluency", pronunciationSentence.getAverageFluency());
        PlayerPrefs.SetFloat("averagePronunciation", pronunciationSentence.getAveragePronunciation());
        SceneManager.LoadScene("Pronunciation");
    }



    //中文提示
    IEnumerator intoSentenceHint(bool hint) {
        string option;
        bool repeat = false;
        while(hint) {
            hint = false;
            do {
                uiMicrophoneRight.SetActive(true);
                uiMicrophoneLeft.SetActive(true);
                var speechToTextTask = microphoneChs.speechToText();
                yield return new WaitUntil(() => speechToTextTask.IsCompleted);
                option = speechToTextTask.Result;

            } while(string.IsNullOrEmpty(option) || option.Equals(""));

            uiMicrophoneRight.SetActive(false);
            uiMicrophoneLeft.SetActive(false);
            
        
            Root tmpQa = new Root();
            foreach(var qa in context.topic) {
                    
                if(qa.question.Equals(currentQuestion)) {
                    tmpQa = qa;
                    break;
                }
            }
            if(!repeat) {
                if (option.Contains("一") || option.Contains("1")) {
                    yield return microphoneEns.textToSpeech(tmpQa.ans[0].answer);
                    yield return new WaitUntil(() => microphoneEns.IsCompleted);
                    changeAnotherQuestion(tmpQa.ans[0].dir_qus);
                    repeat = true;
                } else if((option.Contains("二") || option.Contains("2")) && tmpQa.ans.Length > 1) {
                    yield return microphoneEns.textToSpeech(tmpQa.ans[1].answer);
                    yield return new WaitUntil(() => microphoneEns.IsCompleted);
                    changeAnotherQuestion(tmpQa.ans[1].dir_qus);
                    repeat = true;

                } else if((option.Contains("三") || option.Contains("3")) && tmpQa.ans.Length > 2) {
                    yield return microphoneEns.textToSpeech(tmpQa.ans[2].answer);
                    yield return new WaitUntil(() => microphoneEns.IsCompleted);
                    changeAnotherQuestion(tmpQa.ans[2].dir_qus);
                    repeat = true;

                }else {
                    var rand = new System.Random();
                    Byte[] bytes = new byte[1];
                    rand.NextBytes(bytes);
                    int c = bytes[0] % tmpQa.ans.Length;
                    yield return microphoneEns.textToSpeech(tmpQa.ans[c].answer);
                    yield return new WaitUntil(() => microphoneEns.IsCompleted);
                    changeAnotherQuestion(tmpQa.ans[c].dir_qus);
                    repeat = true;
                }
            }
            
        }
        finishRound = true;
        yield return new WaitForSeconds(1f);
    }


    ///判斷是否需要提示
    public void sentenceHint(bool error) {

        foreach (Transform transform in sentenceErrorRight.transform) {
            transform.gameObject.SetActive(error); 
        }
        foreach (Transform transform in sentenceErrorLeft.transform) {
            transform.gameObject.SetActive(error); 
        }
        
        if(error) { //錯誤次數超過三次
            Debug.Log("進入提示");
            
            StartCoroutine(intoSentenceHint(true));
        }
        
    }


///改變練習腳本
    public void changeDialog() {
        
        if(dialogPresent == null) {
            speechFinal = true;
            ansImage0Left.SetActive(false);
            ansImage1Left.SetActive(false);
            ansImage2Left.SetActive(false);
            ansImage0Right.SetActive(false);
            ansImage1Right.SetActive(false);
            ansImage2Right.SetActive(false);
            return;
        }

        ansImage0Left.GetComponent<Image>().color = Color.white;
        ansImage0Right.GetComponent<Image>().color = Color.white;
        ansImage1Left.GetComponent<Image>().color = Color.white;
        ansImage1Right.GetComponent<Image>().color = Color.white;
        ansImage2Left.GetComponent<Image>().color = Color.white;
        ansImage2Right.GetComponent<Image>().color = Color.white;

        
        ansImage0Left.SetActive(true);
        ansImage1Left.SetActive(true);
        ansImage2Left.SetActive(true);
        ansImage0Right.SetActive(true);
        ansImage1Right.SetActive(true);
        ansImage2Right.SetActive(true);
        
            foreach(var qa in context.topic) {
                if(qa.qus_no.Equals(dialogPresent)) {
                    currentQuestion = qa.question;
                    qusLeft.text = currentQuestion;
                    qusRight.text = currentQuestion;
                    action = qa.action;
                    PlayerPrefs.SetString("Action", action);
                    switch (qa.ans.Length)
                    {
                        case 0:
                            speechFinal = true;
                            ansImage0Left.SetActive(false);
                            ansImage1Left.SetActive(false);
                            ansImage2Left.SetActive(false);
                            ansImage0Right.SetActive(false);
                            ansImage1Right.SetActive(false);
                            ansImage2Right.SetActive(false);
                            break;
                        case 1:
                            ans1Left.text = qa.ans[0].answer;
                            ans1Right.text = qa.ans[0].answer;
                            ansImage1Left.SetActive(false);
                            ansImage2Left.SetActive(false);
                            ansImage1Right.SetActive(false);
                            ansImage2Right.SetActive(false);
                            break;
                        case 2:
                            ans1Left.text = qa.ans[0].answer;
                            ans2Left.text = qa.ans[1].answer;
                            ansImage2Left.SetActive(false);
                            ans1Right.text = qa.ans[0].answer;
                            ans2Right.text = qa.ans[1].answer;
                            ansImage2Right.SetActive(false);
                            break;
                        case 3:
                            ans1Left.text = qa.ans[0].answer;
                            ans2Left.text = qa.ans[1].answer;
                            ans3Left.text = qa.ans[2].answer;
                            ans1Right.text = qa.ans[0].answer;
                            ans2Right.text = qa.ans[1].answer;
                            ans3Right.text = qa.ans[2].answer;
                            break;
                    }
                    
                    break;
                }
            }

        LayoutRebuilder.ForceRebuildLayoutImmediate(layoutLeft.GetComponent<RectTransform>());
        LayoutRebuilder.ForceRebuildLayoutImmediate(ansImage0Left.GetComponent<RectTransform>());
        LayoutRebuilder.ForceRebuildLayoutImmediate(ansImage1Left.GetComponent<RectTransform>());
        LayoutRebuilder.ForceRebuildLayoutImmediate(ansImage2Left.GetComponent<RectTransform>());
        LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRight.GetComponent<RectTransform>());
        LayoutRebuilder.ForceRebuildLayoutImmediate(ansImage0Right.GetComponent<RectTransform>());
        LayoutRebuilder.ForceRebuildLayoutImmediate(ansImage1Right.GetComponent<RectTransform>());
        LayoutRebuilder.ForceRebuildLayoutImmediate(ansImage2Right.GetComponent<RectTransform>());
        
    }


    public void pronunciationResult(Pronunciation p, int ans) {

    //     //將此次內容保存
        pronunciationSentence.Add(p.accuracyScore, p.pronunciationScore, p.completenessScore, p.fluencyScore);
    
        //取出所有單詞
        string start = sentence;
        foreach(Detail d in p.detail) {
            string word = d.word;
            int accuracyScore = d.accuracyScore;
            int wh = start.ToLower().IndexOf(word);
            if(wh < 0) continue;
            int len = word.Length;
            switch (accuracyScore) {
                case < 60:
                    // Debug.Log($"修改{word}顏色red");
                    start = start.Insert(wh + len, "</color>");
                    start = start.Insert(wh , "<color=#FF1515>");
                    break;
                case < 80:
                    // Debug.Log($"修改{word}顏色yellow");
                    start = start.Insert(wh + len, "</color>");
                    start = start.Insert(wh , "<color=#FF8B15>");
                    break;
                default :
                    // Debug.Log($"修改{word}顏色black");
                    start = start.Insert(wh + len, "</color>");
                    start = start.Insert(wh , "<color=#000000>");
                    break;
            }
        }


        //修改內容
        switch(ans) {
            case 0:
                ans1Right.text = start;
                ans1Left.text = start;
                break;
            case 1:
                ans2Right.text = start;
                ans2Left.text = start;
                break;
            case 2:
                ans3Right.text = start;
                ans3Left.text = start;
                break;
        }
    }


    public void flashColor(int userSpeech) {
        switch (userSpeech)
        {
            case 0:
                ansImage0Right.GetComponent<Image>().color = new Color32(0xDF, 0xFF, 0xD8, 0xFF);
                ansImage0Left.GetComponent<Image>().color = new Color32(0xDF, 0xFF, 0xD8, 0xFF);
                break;
            case 1:
                ansImage1Right.GetComponent<Image>().color = new Color32(0xDF, 0xFF, 0xD8, 0xFF);
                ansImage1Left.GetComponent<Image>().color = new Color32(0xDF, 0xFF, 0xD8, 0xFF);
                break;
            case 2:
                ansImage2Right.GetComponent<Image>().color = new Color32(0xDF, 0xFF, 0xD8, 0xFF);
                ansImage2Left.GetComponent<Image>().color = new Color32(0xDF, 0xFF, 0xD8, 0xFF);
                break;   
        }
    }



}