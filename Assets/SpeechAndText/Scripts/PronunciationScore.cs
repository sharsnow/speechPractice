using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class PronunciationScore : MonoBehaviour {
    [SerializeField] private float indicatorTimer = 0.0f;
    [Header("Image")]
    [SerializeField] private Image accuracy = null;
    [SerializeField] private Image completeness = null;
    [SerializeField] private Image fluency = null;
    [SerializeField] private Image pronunciation = null;

    [Header("Text")]
    [SerializeField] private Text accuracyText = null;
    [SerializeField] private Text completenessText = null;
    [SerializeField] private Text fluencyText = null;
    [SerializeField] private Text pronunciationText = null;
    [SerializeField] private Text waitText = null;

    // Start is called before the first frame update
    void Start() {
        // StartCoroutine("getAllScore");
    }

    void Update() {

        float averageAccuracy = PlayerPrefs.GetFloat("averageAccuracy", 30);
        float averageCompleteness = PlayerPrefs.GetFloat("averageCompleteness", 50);
        float averageFluency = PlayerPrefs.GetFloat("averageFluency", 70);
        float averagePronunciation = PlayerPrefs.GetFloat("averagePronunciation", 90);

        indicatorTimer += Time.deltaTime;

        float tmp = indicatorTimer/5;

        string sec = $"等待{5 - (int)indicatorTimer}秒後跳轉至選單.....";
        waitText.text = sec;

        if(indicatorTimer > 5){
            SceneManager.LoadScene(1);
        }

        if(tmp <= averageAccuracy/100) {
            accuracy.fillAmount = tmp;
            accuracyText.text = ((int)(tmp * 100)).ToString();
            accuracy.enabled = true;
        }

        if(tmp <= averageCompleteness/100) {
            completeness.fillAmount = tmp;
            completenessText.text = ((int)(tmp * 100)).ToString();
            completeness.enabled = true;
        }
        
        if(tmp <= averageFluency/100) {
            fluency.fillAmount = tmp;
            fluencyText.text = ((int)(tmp * 100)).ToString();
            fluency.enabled = true;
        }

        if(tmp <= averagePronunciation/100) {
            pronunciation.fillAmount = tmp;
            pronunciationText.text = ((int)(tmp * 100)).ToString();
            pronunciation.enabled = true;
        }
        


    }
}
