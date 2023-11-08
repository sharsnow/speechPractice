using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class PronunciationScore : MonoBehaviour {
    [SerializeField] private float indicatorTimer = 0.0f;
    [Header("Image")]
    [SerializeField] private Image accuracyRight = null;
    [SerializeField] private Image completenessRight = null;
    [SerializeField] private Image fluencyRight = null;
    [SerializeField] private Image pronunciationRight = null;
    [SerializeField] private Image accuracyLeft = null;
    [SerializeField] private Image completenessLeft = null;
    [SerializeField] private Image fluencyLeft = null;
    [SerializeField] private Image pronunciationLeft = null;

    [Header("Text")]
    [SerializeField] private Text accuracyTextRight = null;
    [SerializeField] private Text completenessTextRight = null;
    [SerializeField] private Text fluencyTextRight = null;
    [SerializeField] private Text pronunciationTextRight = null;
    [SerializeField] private Text waitTextRight = null;
    [SerializeField] private Text accuracyTextLeft = null;
    [SerializeField] private Text completenessTextLeft = null;
    [SerializeField] private Text fluencyTextLeft = null;
    [SerializeField] private Text pronunciationTextLeft = null;
    [SerializeField] private Text waitTextLeft = null;


    float averageAccuracy = 0.0f;
    float averageCompleteness = 0.0f;
    float averageFluency = 0.0f;
    float averagePronunciation = 0.0f;
    float tmp = 0.0f;
    
    // Start is called before the first frame update
    void Start() {
        accuracyLeft.fillAmount = 0.0f;
        completenessLeft.fillAmount = 0.0f;
        fluencyLeft.fillAmount = 0.0f;
        pronunciationLeft.fillAmount = 0.0f;
        accuracyRight.fillAmount = 0.0f;
        completenessRight.fillAmount = 0.0f;
        fluencyRight.fillAmount = 0.0f;
        pronunciationRight.fillAmount = 0.0f;

        accuracyTextLeft.text = "0";
        completenessTextLeft.text = "0";
        fluencyTextLeft.text = "0";
        pronunciationTextLeft.text = "0";
        accuracyTextRight.text = "0";
        completenessTextRight.text = "0";
        fluencyTextRight.text = "0";
        pronunciationTextRight.text = "0";
        
        averageAccuracy = PlayerPrefs.GetFloat("averageAccuracy", 30);
        averageCompleteness = PlayerPrefs.GetFloat("averageCompleteness", 50);
        averageFluency = PlayerPrefs.GetFloat("averageFluency", 70);
        averagePronunciation = PlayerPrefs.GetFloat("averagePronunciation", 90);
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }
    void Update() {

        indicatorTimer += Time.deltaTime;

        float tmp = indicatorTimer/4;
        string sec = $"等待{5 - (int)indicatorTimer}秒後跳轉至選單.....";
        waitTextRight.text = sec;
        waitTextLeft.text = sec;

        if(indicatorTimer > 5){
            SceneManager.LoadScene("HomePage");
        }

        if(tmp <= averageAccuracy/100) {
            accuracyRight.fillAmount = tmp;
            accuracyLeft.fillAmount = tmp;
            accuracyTextRight.text = ((int)(tmp * 100)).ToString();
            accuracyTextLeft.text = ((int)(tmp * 100)).ToString();
            accuracyRight.enabled = true;
            accuracyLeft.enabled = true;
        }

        if(tmp <= averageCompleteness/100) {
            completenessRight.fillAmount = tmp;
            completenessLeft.fillAmount = tmp;
            completenessTextRight.text = ((int)(tmp * 100)).ToString();
            completenessTextLeft.text = ((int)(tmp * 100)).ToString();
            completenessRight.enabled = true;
            completenessLeft.enabled = true;
            
        }
        
        if(tmp <= averageFluency/100) {
            fluencyRight.fillAmount = tmp;
            fluencyLeft.fillAmount = tmp;
            fluencyTextRight.text = ((int)(tmp * 100)).ToString();
            fluencyTextLeft.text = ((int)(tmp * 100)).ToString();
            fluencyRight.enabled = true;
            fluencyLeft.enabled = true;
        }

        if(tmp <= averagePronunciation/100) {
            pronunciationLeft.fillAmount = tmp;
            pronunciationLeft.fillAmount = tmp;
            pronunciationTextRight.text = ((int)(tmp * 100)).ToString();
            pronunciationTextLeft.text = ((int)(tmp * 100)).ToString();
            pronunciationRight.enabled = true;
            pronunciationLeft.enabled = true;
        }
    }
}
