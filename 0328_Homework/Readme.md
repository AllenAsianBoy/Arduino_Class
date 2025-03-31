# 搖桿控制 NeoPixel LED 燈條

此專案展示如何使用搖桿模組控制 8 顆 NeoPixel LED 燈條。透過搖桿的 X 軸、Y 軸與按鈕，可以控制 LED 的位置、分組與顏色。

![image]( https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExaHk4NncxenBpdHZ2ZGM4aWM2NGF5eW96Zng2d2I1bDBvZTQ0czNsdiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/WVsStBPtDfpqbqP9sl/giphy.gif )

## 功能特色

- **搖桿 X 軸**：控制當前亮起的 LED 位置。
- **搖桿 Y 軸**：切換 LED 分組（1-4 或 5-8）。
- **搖桿按鈕**：切換 LED 顏色（紅、綠、藍、黃）。

## 使用元件

- Arduino 開發板
- NeoPixel LED 燈條（8 顆 LED）
- 搖桿模組
- 連接線

## 電路連接

1. **NeoPixel LED 燈條**：
   - 資料腳接至 Arduino 的 `6` 號腳位。
   - 電源與地接至 Arduino 的 `5V` 與 `GND`。

2. **搖桿模組**：
   - X 軸接至 `A0`。
   - Y 軸接至 `A1`。
   - 按鈕接至腳位 `2`，並啟用內建上拉電阻。

## 程式簡介

程式使用 [Adafruit NeoPixel 函式庫](https://github.com/adafruit/Adafruit_NeoPixel) 來控制 LED 燈條。透過讀取搖桿的類比與數位輸入，實現 LED 的動態控制。

### 主要變數

- `ledIndex`：追蹤當前亮起的 LED 位置。
- `colorIndex`：追蹤當前選擇的顏色。
- `colors[]`：預定義的顏色陣列（紅、綠、藍、黃）。

### 核心函式

- **`setup()`**：初始化 NeoPixel 燈條與搖桿按鈕。
- **`loop()`**：
  - 讀取搖桿輸入。
  - 將 X 軸值對應到 LED 位置（0-7）。
  - 根據 Y 軸值控制 LED 分組。
  - 按下按鈕時切換 LED 顏色。

## 使用方式

1. 按照電路連接說明完成硬體接線。
2. 將程式上傳至 Arduino 開發板。
3. 使用搖桿進行以下操作：
   - 移動 X 軸控制亮起的 LED 位置。
   - 移動 Y 軸切換 LED 分組。
   - 按下搖桿按鈕切換 LED 顏色。

## 相依函式庫

- [Adafruit NeoPixel 函式庫](https://github.com/adafruit/Adafruit_NeoPixel)

安裝方式：
1. 開啟 Arduino IDE，選擇 **工具 > 管理函式庫**。
2. 搜尋 "Adafruit NeoPixel"。
3. 點擊安裝。

## 授權

此專案採用 MIT 授權，歡迎自由使用與修改。
