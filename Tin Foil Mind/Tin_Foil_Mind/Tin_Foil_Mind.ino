const int sensorPin = 2;      // SW-520D 接腳
const int ledPin = 13;        // LED 接腳（可用內建LED）

void setup() {
  pinMode(sensorPin, INPUT_PULLUP);  // 使用內部上拉電阻
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);                // 與 TouchDesigner 串口通信
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  // 控制 LED：如果有傾斜，亮燈
  if (sensorValue == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  // 傳送資料給 TouchDesigner
  Serial.println(sensorValue);  // 傳送 0 或 1
  delay(50);                    // 每秒最多傳送 20 次資料
}
