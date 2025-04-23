//week10-1_happy_bubble_part1
PImage toyl, toy2;
void setup(){
  size(400,495);
  toyl=loadImage("toy1.jpg");
  toy2=loadImage("toy2.jpg");
}
void draw() {
  background(toyl);
  if(mousePressed)
    image(toy2,0,0);
}
