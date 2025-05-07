// week12_1_happy_bubble_3D_part2
// 調整顏色並將球放在正確位置

void setup() {
  size(300, 300, P3D); // 設定畫布大小，啟用 3D 模式
}

void draw() {
  background(255, 255, 0); // 黃色背景

  ortho();         // 垂直投影（物件不會有透視變形）
  lights();        // 加上燈光，讓 3D 模型更立體
  noStroke();      // 不顯示球體的邊框
  fill(#FF8BEA);   // 球體顏色：粉紅色

  // 產生 6x6 的球體陣列
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      pushMatrix(); // 儲存矩陣狀態

      translate(25 + j * 52, 25 + i * 50); // 依座標排列球體
      sphere(23); // 畫出半徑為 23 的球

      popMatrix(); // 恢復矩陣狀態
    }
  }
}
