#include <Arduino.h>
int potenciometr_pin = 25;
int led_pin = 26;
unsigned long previousMillis = 0; // Час останнього перемикання
bool ledState = LOW;             // Поточний стан світлодіода

void setup() {
  pinMode(potenciometr_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int potValue = analogRead(potenciometr_pin);
  // Перетворюємо 0-4095 у затримку  (від 1000мс до 50мс)
  // Чим більше значення potValue, тим менша затримка (частіше блимання)
  int interval = map(potValue, 0, 4095, 1000, 50);

  unsigned long currentMillis = millis(); //поточний час

  // Перевіряємо, чи пора перемикати світлодіод
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis; // Запам'ятовуємо час перемикання
    // Змінюємо стан світлодіода на протилежний
    ledState = !ledState;
    digitalWrite(led_pin, ledState);
  }
}

// next



