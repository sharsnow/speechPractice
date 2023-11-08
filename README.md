![Language](https://img.shields.io/badge/Unity3D-2021.3.15f1-brightgreen)  
此為透過Unity3D與C#進行實做，此系統主要透過裸視3D進行呈現，使用者可以透過橫立式顯示器的方式來做互動。
而使用者則可根據要練習的內容選擇封閉式對話或是開放式對話。

#首頁
============
在首頁的部分，可以讓使用者做基本的設置。像是可以選擇使用者想要練習的對話模式亦或者選擇想要陪伴練習的虛擬人物的性別。  

#封閉式對話
============
<img src="https://github.com/sharsnow/laravel/blob/main/public/image/dialogPractice/closeDialog.png" width="400">
在封閉式對話中，有設置專門的網頁進行腳本的設置。詳請看https://github.com/sharsnow/laravel  
在設置對話腳本中，管理者可根據地點做不同主題或是情境不同設置對話腳本。而在此使用者則就可以根據管理者設置好的腳本進行地點的選擇，以讓使用者進行練習。若是有在同地點有多種不同的主題則會以隨機的方式進行練習。  
在開始練習腳本對話時，有設置隨機的對話內容，像是"What's time is it?"、"I am hungry. Do you want to eat something?"，讓使用者可以模擬真實對話時突然不同的對話內容。  

#開放式對話
============
<img src="https://github.com/sharsnow/laravel/blob/main/public/image/dialogPractice/openDialog.png" width="400">
在封閉式對話中，是透過結合ChatGPT的方式，讓使用者進行練習。透過與虛擬人物的自由對話，讓使用者可以沒有限制的進行對話互動以及交談。  

#語音辨識
============
<img src="https://github.com/sharsnow/laravel/blob/main/public/image/dialogPractice/pronunciation.png" width="400">
在大量的語音轉文字以及文字轉語音式透過微軟Azure的語音辨識來做轉換。除此之外，在封閉式對話中透過微軟Azure提供發音辨識的技術，提供給使用者在完成一次的問與答的對話時，立即反應使用者各個文字的發音準確度，若是極度不標準則會標示成紅色；若是稍微不標準則會標示成橙色。而在完成一次地點的對話練習則會顯示本次的評分，並依據使用者的發音狀況、語速及對話的完成度進行評分。

#虛擬人物動作
===============
在虛擬人物的部分，是透過maya建立模型與動作。為了使對話練習中有多種不同的動作，這邊以設立多達25種不同的動作並且有男、女兩種不同性別的模型讓使用者可以選擇。
