// week12_1_happy_3D_part1

void setup() {
  size(300, 300, P3D); // 啟用 3D 功能，建立 300x300 視窗
}

void draw() {
  background(255); // 白色背景

  pushMatrix(); // 儲存目前的座標矩陣狀態

  translate(mouseX, mouseY); // 根據滑鼠座標移動物件位置

  sphere(60); // 畫一個半徑為 60 的球體

  popMatrix(); // 恢復原來的座標矩陣狀態
}
