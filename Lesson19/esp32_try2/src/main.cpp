#include <Arduino.h>

int Potenciometr = 25;

void setup() {
  Serial.begin (115200);
  pinMode(Potenciometr, INPUT);
}

void loop() {
  Serial.println (analogRead(Potenciometr));
  delay(250);
 
}