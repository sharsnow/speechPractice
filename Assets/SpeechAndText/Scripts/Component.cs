using System;
using System.Collections.Generic;
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
        public Answer[] ans;
    }  
    public class Answer {
        public string answer {get;set;}
        public string dir_qus {get;set;}
    }


    //紀錄每次發音標準的內容
    public class PronunciationSentence {
        public PronunciationSentence() {
            pronunciation = new List<Pronunciation>();
        }
        private int sentenceNum = 0;
        
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
            return i/sentenceNum;
        }
        public float getAveragePronunciation() {
            int i = 0;
            foreach(Pronunciation p in pronunciation) {
                i += p.pronunciationScore;
            }
            return i/sentenceNum;
        }
        public float getAverageCompleteness() {
            int i = 0;
            foreach(Pronunciation p in pronunciation) {
                i += p.completenessScore;
            }
            return i/sentenceNum;
        }
        public float getAverageFluency() {
            int i = 0;
            foreach(Pronunciation p in pronunciation) {
                i += p.fluencyScore;
            }
            return i/sentenceNum;
        }

        
    }
    public class Pronunciation {
        public string readOut;
        public int accuracyScore;
        public int pronunciationScore;
        public int completenessScore;
        public int fluencyScore;
        public List<Detail> detail;
        public Pronunciation() {
            detail = new List<Detail>();
        }
        public void Add(string w, int a, string e) {
            detail.Add(new Detail() { word = w, accuracyScore = a, errorType = e });
        }

        public string result() {
            return readOut;
        }
        
    }
    public class Detail {
        public string word;
        public int accuracyScore;
        public string errorType;
        public override string ToString() {
            return "    Word: "+ word +", Accuracy score: "+ accuracyScore +", Error type: "+ errorType +"." ;
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
//                 "Accuracy score": 88,
//                 "Error type": "None"
//             },
//             {
//                 "Word": "this",
//                 "Accuracy score": 22,
//                 "Error type": "Mispronunciation"
//             },
//             {
//                 "Word": "is",
//                 "Accuracy score": 88,
//                 "Error type": "None"
//             },
//             {
//                 "Word": "test",
//                 "Accuracy score": 55,
//                 "Error type": "None"
//             }
//         ]
//     }
// ]