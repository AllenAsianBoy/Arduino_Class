# 🧠 TIN FOIL MIND

一件以「錫箔紙帽」為嘗試融合科技與反諷的互動裝置藝術。

---

## 🎨 創作理念

《TIN FOIL MIND》靈感來自陰謀論文化中經典的「錫箔紙帽」意象——它既荒謬又充滿隱喻，被視為對國家監控與思想操控的防禦工具。本作品將這一象徵轉化為具批判性與幽默感的藝術語彙，邀請觀者「戴上帽子」，進入一場虛構的電磁防禦劇場。

當參與者戴上錫箔紙帽並改變頭部傾斜角度，感測器會即時觸發不同動畫畫面，顯示「受電磁波影響的大腦」與「錫箔紙屏蔽後的大腦」兩種狀態，嘗試呈現一場科技與心靈、虛構與現實交錯的視覺敘事。

---

## 🧪 使用技術

### 🎛️ 感測裝置
- **SW-520D 傾斜感測模組**
- **Arduino Uno / Nano**
- **LED（可安裝於帽上花朵，顯示狀態）**

### 🌐 軟體整合
- **HTML5 / CSS / JavaScript（Web Serial API）**
- **TouchDesigner（進階視覺效果）**

### 📡 通訊與控制
- Web Serial API 或 TouchDesigner 的 Serial DAT 模組連接 Arduino
- 控制畫面切換、大腦動畫變形與燈光變化

---

## 🕹️ 互動說明

1. 觀眾戴上錫箔紙帽，裝置內建感測器偵測頭部傾斜
2. 當傾斜超過閾值時，畫面切換成「大自然下的大腦」
3. LED 同步亮起，顯示防禦機制啟動
4. 移動回正常角度，畫面恢復為「思想監控」

---

## 🖼️ 展覽建議方式

- 搭配 **桌上展示**或**懸掛式錫箔紙帽**，觀眾可實際配戴
- 螢幕或投影機呈現網頁互動畫面（同步反映帽子的傾斜）
- 可加裝反光花瓣與LED，在光線照射下形成夢幻折射效果
- 建議搭配耳機播放低頻聲響，營造「思想監控」氛圍

---

## ⚙️ 開發環境

- Arduino IDE 1.8.x / 2.x
- Google Chrome（支援 Web Serial API）
- TouchDesigner 2023+
- Windows / macOS

---

## 📁 檔案結構

