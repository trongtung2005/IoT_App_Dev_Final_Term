#include <Arduino.h>

void setup() {
  // Cấu hình chân LED tích hợp làm OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Bật đèn LED
  delay(1000);                       // Chờ 1 giây (1000 ms)
  
  digitalWrite(LED_BUILTIN, LOW);    // Tắt đèn LED
  delay(1000);                       // Chờ 1 giây (1000 ms)
}