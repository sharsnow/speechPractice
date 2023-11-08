using UnityEngine;
using Microsoft.CognitiveServices.Speech;
using Microsoft.CognitiveServices.Speech.Audio;
using Microsoft.CognitiveServices.Speech.PronunciationAssessment;
using System.Threading.Tasks;
using System.Threading;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using LitJson;
using Component;
# if PLATFORM_ANDROID
using UnityEngine.Android;
# endif
namespace SpeechRecognize
{
    public class PronunciationAssessment
    {
        public double AccuracyScore { get; set; }
        public double FluencyScore { get; set; }
        public double CompletenessScore { get; set; }
        public double PronScore { get; set; }
    }

    public class PhonemeAssessment
    {
        public string Phoneme { get; set; }
        public double AccuracyScore { get; set; }
        public List<NBestPhoneme> NBestPhonemes { get; set; }
        public long Offset { get; set; }
        public long Duration { get; set; }
    }

    public class NBestPhoneme
    {
        public string Phoneme { get; set; }
        public double Score { get; set; }
    }

    public class Syllable
    {
        public string syllable { get; set; }
        public double AccuracyScore { get; set; }
        public long Offset { get; set; }
        public long Duration { get; set; }
        public List<PhonemeAssessment> Phonemes { get; set; }
    }

    public class Words
    {
        public string Word { get; set; }
        public long Offset { get; set; }
        public long Duration { get; set; }
        public PronunciationAssessment PronunciationAssessment { get; set; }
        public List<Syllable> Syllables { get; set; }
    }

    public class NBest
    {
        public double Confidence { get; set; }
        public string Lexical { get; set; }
        public string ITN { get; set; }
        public string MaskedITN { get; set; }
        public string Display { get; set; }
        public PronunciationAssessment PronunciationAssessment { get; set; }
        public List<Words> Words { get; set; }
    }

    public class RootObject
    {
        public string Id { get; set; }
        public string RecognitionStatus { get; set; }
        public long Offset { get; set; }
        public long Duration { get; set; }
        public string DisplayText { get; set; }
        public List<NBest> NBest { get; set; }
    }
    public class Microphone : MonoBehaviour
    {
        static string speechKey = "6bec7e0cbf37482fbf714623185aeb5b";
        static string speechRegion = "eastus";
        public SpeechConfig speechConfig;
        private string sentence;
        public GameObject dialog;
        public bool IsCompleted = true;
        #region Init
        // private static Microphone _instance;
        // public static Microphone Instance
        // {
        //     get
        //     {
        //         if (_instance == null)
        //         {
        //             //Create if it doesn't exist
        //             GameObject go = new GameObject("Microphone");
        //             _instance = go.AddComponent<Microphone>();
        //         }
        //         return _instance;
        //     }
        // }

        // void Awake()
        // {
        //     _instance = this;
        // }
        #endregion

        void Start()
        {

#if PLATFORM_ANDROID
                if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
                {
                    Permission.RequestUserPermission(Permission.Microphone);
                    dialog = new GameObject();
                    }

#endif
        }

        void OnGUI()
        {
#if PLATFORM_ANDROID
                if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
                {
                    dialog.AddComponent<PermissionsRationaleDialog>();
                    return;
                }
                else if (dialog != null)
                {
                    Destroy(dialog);
                }
#endif
        }
        public void Setup(string code, string sex)
        {
            
            switch (code)
            {
                case "en-US":
                    speechConfig = SpeechConfig.FromSubscription(speechKey, speechRegion);
                    speechConfig.SpeechRecognitionLanguage = code;

                    if (sex.Equals("man"))
                    {
                        speechConfig.SpeechSynthesisVoiceName = "en-US-AIGenerate1Neural";
                    }
                    else
                    {   
                        Debug.Log("設定為女性");
                        speechConfig.SpeechSynthesisVoiceName = "en-US-JennyNeural";
                    }
                    break;
                case "zh-TW":
                    speechConfig = SpeechConfig.FromSubscription(speechKey, speechRegion);
                    speechConfig.SpeechRecognitionLanguage = code;
                    if (sex.Equals("man"))
                    {
                        speechConfig.SpeechSynthesisVoiceName = "zh-TW-YunJheNeural";
                    }
                    else
                    {
                        Debug.Log("設定為女性");
                        speechConfig.SpeechSynthesisVoiceName = "zh-TW-HsiaoYuNeural";
                    }
                    break;
                default:

                    break;
            }


        }

        public string speechText()
        {
            Debug.Log("sentence: " + sentence);
            return sentence;
        }
        public async Task<string> speechToText()
        {

            using var audioConfig = AudioConfig.FromDefaultMicrophoneInput();
            using var speechRecognizer = new SpeechRecognizer(speechConfig, audioConfig);

            var speechRecognitionResult = await speechRecognizer.RecognizeOnceAsync();
            OutputSpeechRecognitionResult(speechRecognitionResult);

            return speechRecognitionResult.Text;


        }

        public async Task textToSpeech(string text)
        {
            IsCompleted = false;
            using (var speechSynthesizer = new SpeechSynthesizer(speechConfig))
            {

                var speechSynthesisResult = await speechSynthesizer.SpeakTextAsync(text); //Synthesize speech from plain text synchronously (returns when done synthesizing).
                OutputSpeechSynthesisResult(speechSynthesisResult, text);
            }
            // Debug.Log("完成");
            IsCompleted = true;
        }
        void OutputSpeechRecognitionResult(SpeechRecognitionResult speechRecognitionResult)
        {
            switch (speechRecognitionResult.Reason)
            {
                case ResultReason.RecognizedSpeech:
                    // IsCompleted = true;
                    Debug.Log($"RECOGNIZED: Text={speechRecognitionResult.Text} setUP: {speechConfig.SpeechRecognitionLanguage}");
                    sentence = speechRecognitionResult.Text;
                    break;
                case ResultReason.NoMatch:
                    Debug.Log($"NOMATCH: Speech could not be recognized.");
                    break;
                case ResultReason.Canceled:
                    var cancellation = CancellationDetails.FromResult(speechRecognitionResult);
                    Debug.Log($"CANCELED: Reason={cancellation.Reason}");

                    if (cancellation.Reason == CancellationReason.Error)
                    {
                        Debug.Log($"CANCELED: ErrorCode={cancellation.ErrorCode}");
                        Debug.Log($"CANCELED: ErrorDetails={cancellation.ErrorDetails}");
                        Debug.Log($"CANCELED: Did you set the speech resource key and region values?");
                    }
                    break;
            }
        }

        void OutputSpeechSynthesisResult(SpeechSynthesisResult speechSynthesisResult, string text)
        {
            switch (speechSynthesisResult.Reason)
            {
                case ResultReason.SynthesizingAudioCompleted:
                    Debug.Log($"Speech synthesized for text: [{text}]");
                    break;
                case ResultReason.Canceled:
                    var cancellation = SpeechSynthesisCancellationDetails.FromResult(speechSynthesisResult);
                    Debug.Log($"CANCELED: Reason={cancellation.Reason}");

                    if (cancellation.Reason == CancellationReason.Error)
                    {
                        Debug.Log($"CANCELED: ErrorCode={cancellation.ErrorCode}");
                        Debug.Log($"CANCELED: ErrorDetails=[{cancellation.ErrorDetails}]");
                        Debug.Log($"CANCELED: Did you set the speech resource key and region values?");
                    }
                    break;
                default:
                    break;
            }
        }
        public async Task<Pronunciation> PronunciationAssessmentWithMicrophoneAsync()
        {
            var language = "en-US";

            var config = SpeechConfig.FromSubscription(speechKey, speechRegion);
            config.SetProperty(PropertyId.SpeechServiceConnection_EndSilenceTimeoutMs, "2000");

            var referenceText = "";
            // create pronunciation assessment config, set grading system, granularity and if enable miscue based on your requirement.
            var pronunciationConfig = new PronunciationAssessmentConfig(referenceText,
                GradingSystem.HundredMark, Granularity.Phoneme, true);

            Pronunciation pronunciation = new Pronunciation();


            // Creates a speech recognizer for the specified language, using microphone as audio input.
            using (var recognizer = new SpeechRecognizer(config, language))
            {

                while (true)
                {

                    pronunciationConfig.ApplyTo(recognizer);
                    // Starts speech recognition, and returns after a single utterance is recognized.
                    // For long-running multi-utterance recognition, use StartContinuousRecognitionAsync() instead.

                    var result = await recognizer.RecognizeOnceAsync().ConfigureAwait(false);

                    if (result.Reason == ResultReason.RecognizedSpeech)
                    {
                        referenceText = $"{result.Text}";
                        Debug.Log($"發音判斷結果: {referenceText}");
                        var pronunciationResultJson = result.Properties.GetProperty(PropertyId.SpeechServiceResponse_JsonResult);
                        var rootObject = JsonMapper.ToObject<RootObject>(pronunciationResultJson);

                        if (rootObject.NBest.Count > 0)
                        {
                            var nBest = rootObject.NBest[0];
                            var pronunciationAssessment = nBest.PronunciationAssessment;

                            if (pronunciationAssessment != null)
                            {
                                pronunciation.readOut = referenceText;
                                pronunciation.Lexical = nBest.Lexical;
                                pronunciation.ITN = nBest.ITN;
                                pronunciation.accuracyScore = (int)pronunciationAssessment.AccuracyScore;
                                pronunciation.pronunciationScore = (int)pronunciationAssessment.PronScore;
                                pronunciation.completenessScore = (int)pronunciationAssessment.CompletenessScore;
                                pronunciation.fluencyScore = (int)pronunciationAssessment.FluencyScore;

                                Debug.Log($"Accuracy score: {pronunciation.accuracyScore}, Pronunciation score: {pronunciation.pronunciationScore}, Completeness score: {pronunciation.completenessScore}, Fluency score: {pronunciation.fluencyScore}");


                                foreach (Words word in nBest.Words)
                                {
                                    string wordText = word.Word;
                                    int wordAccuracyScore = (int)word.PronunciationAssessment.AccuracyScore;

                                    pronunciation.Add(wordText, wordAccuracyScore);
                                    // Debug.Log($"Word: {wordText}, Accuracy score: {wordAccuracyScore}");
                                }
                            }
                        }
                        else
                        {
                            Debug.Log("NBest 为空");
                        }
                        break;

                    }
                    if (result.Reason == ResultReason.NoMatch)
                    {
                        Debug.Log($"NOMATCH: Speech could not be recognized.");
                        break;
                    }

                }



            }
            return pronunciation;

        }
    }
}
