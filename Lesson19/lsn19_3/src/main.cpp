#include <Arduino.h>
const int potPin = 25; // Потенціометр
const int ledPin = 26; // Світлодіод

// Налаштування ШІМ 
const int channel = 0;      // Канал ШІМ (0-15)
const int freq = 5000;      // Частота 5000 Гц
const int resolution = 12;  // Роздільна здатність 12 біт (0-4095)

void setup() {
  // Налаштовуємо ШІМ-канал
  ledcSetup(channel, freq, resolution);
  // Прив'язуємо пін світлодіода до каналу
  ledcAttachPin(ledPin, channel);
  // Налаштовуємо пін потенціометра як вхід
  pinMode(potPin, INPUT);
}

void loop() {
  // Зчитуємо значення з потенціометра (діапазон 0...4095)
  int potValue = analogRead(potPin);
  
  // Записуємо значення в ШІМ-канал без map()
  // Оскільки роздільна здатність ШІМ теж 12 біт, 
  // діапазон збігається ідеально!
  ledcWrite(channel, potValue);
  
  delay(10);
}