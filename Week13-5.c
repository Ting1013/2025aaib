// week13_5 sound 要播放音樂
//要先安裝 Sketch-Library-Manage Libraries...
//找 sound 下載 Sound 的函式點 Install 安裝完
import processing.sound.*; //使用聲音的外掛
SoundFile mySound, monkey, sword; // 宣告變數 mySound 它是 SoundFile
void setup(){
  size(400, 400); //視窗大小 400x400 小心,檔名的空白
  monkey = new SoundFile(this, "Monkey 1.mp3");
  sword = new SoundFile(this, "sword slash.mp3");
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play(); //再播放剛剛讀入的聲音檔
}
void mousePressed(){
  if(mouseButton==LEFT)monkey.play();
  if(mouseButton==RIGHT)sword.play();
}
void draw(){
}//裡面是空的畫圖,要寫它
