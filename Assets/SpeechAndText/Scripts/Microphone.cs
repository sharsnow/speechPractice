using UnityEngine;
using Microsoft.CognitiveServices.Speech;
using Microsoft.CognitiveServices.Speech.Audio;
using Microsoft.CognitiveServices.Speech.PronunciationAssessment;
using System.Threading.Tasks;
using System.Threading;
using System;
using System.Collections;
using System.Collections.Generic;
using Component;
# if PLATFORM_ANDROID
using UnityEngine.Android;
# endif
namespace SpeechRecognize
{
    public class Microphone : MonoBehaviour 
    {
        static string speechKey = "2a06d66352e34a2485c3a04865379c18";
        static string speechRegion = "eastus";
        static private SpeechConfig speechConfig;
        private string sentence;
        public bool IsCompleted = true;
        private PronunciationSentence pronunciationSentence; //紀錄每次的發音
        #region Init
        private static Microphone _instance;
        public static Microphone Instance {
            get {
                if (_instance == null) {
                        //Create if it doesn't exist
                    GameObject go = new GameObject("Microphone");
                    _instance = go.AddComponent<Microphone>();
                }
                return _instance;
            }
        }

        void Awake(){    
            _instance = this;
        }
    #endregion

        void Start () {
            #if PLATFORM_ANDROID
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {
                Permission.RequestUserPermission(Permission.Microphone);
                dialog = new GameObject();
                }
            #endif
        }

        void OnGUI ()
        {
            #if PLATFORM_ANDROID
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {。
                dialog.AddComponent<PermissionsRationaleDialog>();
                return;
            }
            else if (dialog != null)
            {
                Destroy(dialog);
            }
            #endif
        }
            public void Setup(string code) {
            speechConfig = SpeechConfig.FromSubscription(speechKey, speechRegion);        
            speechConfig.SpeechRecognitionLanguage = code;

            // The language of the voice that speaks.
            speechConfig.SpeechSynthesisVoiceName = "en-US-AIGenerate1Neural"; 
        }

        public string speechText(){
            Debug.Log("sentence: " + sentence);
            return sentence;
        }
        public async Task<string> speechToText() {
           
            using var audioConfig = AudioConfig.FromDefaultMicrophoneInput();
            using var speechRecognizer = new SpeechRecognizer(speechConfig, audioConfig);

            var speechRecognitionResult = await speechRecognizer.RecognizeOnceAsync();
            OutputSpeechRecognitionResult(speechRecognitionResult);

            return speechRecognitionResult.Text;
        
             
        }

        public async Task textToSpeech(string text) {
            IsCompleted = false;
            using (var speechSynthesizer = new SpeechSynthesizer(speechConfig)) {

                var speechSynthesisResult = await speechSynthesizer.SpeakTextAsync(text); //Synthesize speech from plain text synchronously (returns when done synthesizing).
                OutputSpeechSynthesisResult(speechSynthesisResult, text);
            }
            // Debug.Log("完成");
            IsCompleted = true;
        }
        void OutputSpeechRecognitionResult(SpeechRecognitionResult speechRecognitionResult) {
            switch (speechRecognitionResult.Reason)
            {
                case ResultReason.RecognizedSpeech:
                    // IsCompleted = true;
                    Debug.Log($"RECOGNIZED: Text={speechRecognitionResult.Text}");
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

        void OutputSpeechSynthesisResult(SpeechSynthesisResult speechSynthesisResult, string text) {
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

      

        // Pronunciation assessment with microphone as audio input.
        // See more information at https://aka.ms/csspeech/pa
        public async Task<Pronunciation> PronunciationAssessmentWithMicrophoneAsync() {
            var language = "en-US";

            var config = SpeechConfig.FromSubscription(speechKey,speechRegion );
            config.SetProperty(PropertyId.SpeechServiceConnection_EndSilenceTimeoutMs, "3000");

            var referenceText = "";
            // create pronunciation assessment config, set grading system, granularity and if enable miscue based on your requirement.
            var pronunciationConfig = new PronunciationAssessmentConfig(referenceText,
                GradingSystem.HundredMark, Granularity.Phoneme, true);

            Pronunciation pronunciation = new Pronunciation();

            // Creates a speech recognizer for the specified language, using microphone as audio input.
            using (var recognizer = new SpeechRecognizer(config, language)) {

                while (true) {
                   
                    pronunciationConfig.ApplyTo(recognizer);
                    // Starts speech recognition, and returns after a single utterance is recognized.
                    // For long-running multi-utterance recognition, use StartContinuousRecognitionAsync() instead.
                    var result = await recognizer.RecognizeOnceAsync().ConfigureAwait(false);

                    // Checks result.
                    if (result.Reason == ResultReason.RecognizedSpeech) {
                        pronunciationConfig.ReferenceText = result.Text;
                        referenceText = result.Text;
                        // Starts recognizing.
                        Debug.Log($"RECOGNIZED: Text={result.Text}");

                        var pronunciationResult = PronunciationAssessmentResult.FromResult(result);
                        Debug.Log( $"Accuracy score: {pronunciationResult.AccuracyScore}, Pronunciation score: {pronunciationResult.PronunciationScore}, Completeness score : {pronunciationResult.CompletenessScore}, FluencyScore: {pronunciationResult.FluencyScore}");
                        
                        pronunciation.accuracyScore = (int)pronunciationResult.AccuracyScore;
                        pronunciation.pronunciationScore = (int)pronunciationResult.PronunciationScore;
                        pronunciation.completenessScore = (int)pronunciationResult.CompletenessScore;
                        pronunciation.fluencyScore = (int)pronunciationResult.FluencyScore;
                        pronunciation.readOut = referenceText;

                        foreach (var word in pronunciationResult.Words) {
                            pronunciation.Add(word.Word, (int)word.AccuracyScore, word.ErrorType);
                        }
                        foreach (Detail p in pronunciation.detail)
                        {
                            Debug.Log(p);
                        }
                        break;
                    }
                    else if (result.Reason == ResultReason.NoMatch) {
                        Debug.Log($"NOMATCH: Speech could not be recognized.");
                        break;
                    }
                    else if (result.Reason == ResultReason.Canceled) {
                        var cancellation = CancellationDetails.FromResult(result);
                        Debug.Log($"CANCELED: Reason={cancellation.Reason}");

                        if (cancellation.Reason == CancellationReason.Error) {
                            Debug.Log($"CANCELED: ErrorCode={cancellation.ErrorCode}");
                            Debug.Log($"CANCELED: ErrorDetails={cancellation.ErrorDetails}");
                            Debug.Log($"CANCELED: Did you update the subscription info?");
                        }
                        break;
                    }
                }
            }
            return pronunciation;
        }


    }

    
    
    
}