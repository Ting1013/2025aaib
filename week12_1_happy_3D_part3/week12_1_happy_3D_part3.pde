// week12_1_happy_bubble_3D_part3
// 使用滑鼠點擊切換球的狀態（按下的變小）

int[][] state = new int[6][6]; // 狀態陣列：0 表示未按，1 表示已按

void setup() {
  size(300, 300, P3D); // 設定畫布大小與 3D 模式
}

void draw() {
  background(255, 255, 0); // 黃色背景
  ortho();     // 垂直投影
  lights();    // 加光
  noStroke();  // 不要邊框
  fill(#FF8BEA); // 粉紅色

  // 產生 6x6 球體陣列
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      pushMatrix();
      translate(25 + j * 52, 25 + i * 50); // 計算每顆球的位置

      if (state[i][j] == 0) {
        sphere(23); // 沒有按過：大球
      } else {
        sphere(10); // 按過：小球
      }

      popMatrix();
    }
  }
}

// 滑鼠點擊事件
void mousePressed() {
  int j = (mouseX - 25) / 50;
  int i = (mouseY - 25) / 50;

  // 確保點擊範圍在陣列內
  if (i >= 0 && i < 6 && j >= 0 && j < 6) {
    state[i][j] = 1;
  }
}
