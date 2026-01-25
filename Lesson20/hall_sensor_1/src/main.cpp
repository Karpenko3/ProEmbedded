#include <Arduino.h>
#include <driver/adc.h>

int red_pin = 13;   
int blue_pin = 25;
int hallSensorValue = 0;
unsigned long timer; 

void setup() {
  pinMode(red_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
  Serial.begin(115200);
  timer = millis();
}

void loop() {

  if (millis() - timer >= 100) {
    hallSensorValue = hall_sensor_read(); 
    Serial.println(hallSensorValue);
    timer = millis();
  }

  if (hallSensorValue > 50) {
    digitalWrite(blue_pin, LOW);
    digitalWrite(red_pin, HIGH);
  } 
  else if (hallSensorValue < -50) { 
    digitalWrite(blue_pin, HIGH);
    digitalWrite(red_pin, LOW);
  } 
  else {
    digitalWrite(blue_pin, LOW);
    digitalWrite(red_pin, LOW);
  }
}