#include <Adafruit_NeoPixel.h>  // 引入 NeoPixel 函式庫

// NeoPixel LED 燈條設定
#define LED_PIN    6   // LED 燈條接腳
#define LED_COUNT  8   // 只控制 8 顆 LED

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

// 搖桿模組接腳
const int VRX_PIN = A0;  // X 軸
const int VRY_PIN = A1;  // Y 軸
const int SW_PIN  = 2;   // 按鈕

// 當前 LED 位置
int ledIndex = 0;
int lastLedIndex = -1;

// 當前顏色（RGB）
int colorIndex = 0;
uint32_t colors[] = {strip.Color(255, 0, 0),  // 紅色
                     strip.Color(0, 255, 0),  // 綠色
                     strip.Color(0, 0, 255),  // 藍色
                     strip.Color(255, 255, 0)}; // 黃色

void setup() {
  strip.begin();  // 啟動 LED 燈條
  strip.show();   // 清空 LED 顯示
  pinMode(SW_PIN, INPUT_PULLUP);  // 設定搖桿按鈕為輸入模式（內建上拉）
}

void loop() {
  int xValue = analogRead(VRX_PIN);  // 讀取 X 軸
  int yValue = analogRead(VRY_PIN);  // 讀取 Y 軸
  int buttonState = digitalRead(SW_PIN);  // 讀取按鈕

  // X 軸控制 LED 位置（0 - 7）
  ledIndex = map(xValue, 0, 1023, 0, 7);

  // Y 軸決定開啟哪一組 LED
  if (yValue > 800) {   // 上拉（開啟 1-4 LED）
    strip.clear();
    for (int i = 0; i < 4; i++) {
      strip.setPixelColor(i, colors[colorIndex]);
    }
  } else if (yValue < 200) {  // 下拉（開啟 5-8 LED）
    strip.clear();
    for (int i = 4; i < 8; i++) {
      strip.setPixelColor(i, colors[colorIndex]);
    }
  } else {  // 不動 Y 軸時，只開啟當前 LED
    strip.clear();
    strip.setPixelColor(ledIndex, colors[colorIndex]);
  }

  strip.show();  // 更新 LED 顯示

  // 按鈕切換顏色
  if (buttonState == LOW) {
    colorIndex = (colorIndex + 1) % 4;
    delay(200);  // 防止按鍵彈跳
  }

  delay(50);  // 簡單的防抖處理
}
