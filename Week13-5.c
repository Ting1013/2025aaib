// week13_5 sound �n���񭵼�
//�n���w�� Sketch-Library-Manage Libraries...
//�� sound �U�� Sound ���禡�I Install �w�˧�
import processing.sound.*; //�ϥ��n�����~��
SoundFile mySound, monkey, sword; // �ŧi�ܼ� mySound ���O SoundFile
void setup(){
  size(400, 400); //�����j�p 400x400 �p��,�ɦW���ť�
  monkey = new SoundFile(this, "Monkey 1.mp3");
  sword = new SoundFile(this, "sword slash.mp3");
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play(); //�A������Ū�J���n����
}
void mousePressed(){
  if(mouseButton==LEFT)monkey.play();
  if(mouseButton==RIGHT)sword.play();
}
void draw(){
}//�̭��O�Ū��e��,�n�g��
