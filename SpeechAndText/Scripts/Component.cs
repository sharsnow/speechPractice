using System;
using System.Collections.Generic;
using UnityEngine.Serialization;
using System.Linq;
namespace Component
{
    //匯出入json檔
    public class Json{
        public string from = "";
        public string to = "";
        public string msg="";
        public string dict = "";
        public Root[] topic;

    }
    public class Root{
        public string place;
        public string[] type;
         public string qus_no {get;set;}
        public string question {get;set;}
        public string action {get; set;}
        public Answer[] ans;
    }  
    public class Answer {
        public string answer {get;set;}
        public string dir_qus {get;set;}
    }


    //紀錄每次發音標準的內容
    [System.Serializable]
    public class PronunciationSentence {
        public PronunciationSentence() {
            pronunciation = new List<Pronunciation>();
        }
        private int sentenceNum = 0;
        [FormerlySerializedAs("pronunciation")]
        public List<Pronunciation> serializedPronunciation;
        
        public List<Pronunciation> pronunciation; 
        public void Add(int a, int p, int c, int f) {
            pronunciation.Add(new Pronunciation() {accuracyScore = a, pronunciationScore = p, completenessScore = c, fluencyScore = f});
            sentenceNum++;
        }
        public float getAverageAccuracy() {
            int i = 0;
            foreach(Pronunciation p in pronunciation) {
                i += p.accuracyScore;
            }
            if(sentenceNum == 0) return 0;
            return i/sentenceNum;
        }
        public float getAveragePronunciation() {
            int i = 0;
            foreach(Pronunciation p in pronunciation) {
                i += p.pronunciationScore;
            }
            if(sentenceNum == 0) return 0;
            return i/sentenceNum;
        }
        public float getAverageCompleteness() {
            int i = 0;
            foreach(Pronunciation p in pronunciation) {
                i += p.completenessScore;
            }
            if(sentenceNum == 0) return 0;
            return i/sentenceNum;
        }
        public float getAverageFluency() {
            int i = 0;
            foreach(Pronunciation p in pronunciation) {
                i += p.fluencyScore;
            }
            if(sentenceNum == 0) return 0;
            return i/sentenceNum;
        }
    }
    [System.Serializable]
    public class Pronunciation {
        public string readOut;
        public string Lexical ;
        public string ITN ;
        public int accuracyScore;
        public int pronunciationScore;
        public int completenessScore;
        public int fluencyScore;
        // [FormerlySerializedAs("detail")]
        // public List<Detail> serializedDetail;
        // [System.NonSerialized]
        public List<Detail> detail;
        public Pronunciation() {
            detail = new List<Detail>();
        }
        public void Add(string w, int a) {
            detail.Add(new Detail() { word = w, accuracyScore = a});
        }

        public string result() {
            return readOut;
        }
        // // Before serialization, convert the detail list to a serializable format
        // public void OnBeforeSerialize()
        // {
        //     serializedDetail = detail.ToList();
        // }

        // // After deserialization, convert the serialized detail list back to the original list
        // public void OnAfterDeserialize()
        // {
        //     detail = new List<Detail>(serializedDetail);
        // }
        
    }
    // [System.Serializable]
    public class Detail {
        public string word;
        public int accuracyScore;
        public override string ToString() {
            return "    Word: "+ word +", Accuracy score: "+ accuracyScore + "." ;
        }
    }

   
}

// [
//     {
//         "read out": "hello, this is test",
//         "Accuracy score": 64,
//         "Pronunciation score": 61.5,
//         "Completeness score ": 50,
//         "FluencyScore": 95,
//         "Word-level details": [
//             {
//                 "Word": "hello",
//                 "Accuracy score": 88
//             },
//             {
//                 "Word": "this",
//                 "Accuracy score": 22
//             },
//             {
//                 "Word": "is",
//                 "Accuracy score": 88
//             },
//             {
//                 "Word": "test",
//                 "Accuracy score": 55
//             }
//         ]
//     }
// ]