#include <Arduino.h>
#include <ESP32Servo.h>
Servo sr;
int servo_pin = 13;
int value;
void setup() {
  sr.attach(servo_pin);
  Serial.begin(115200);
}

void loop() {
  if(Serial.available()> 0 ){
  value = Serial.parseInt();
  sr.write(value);
  Serial.println("The servo is turned to the" + String (value) + " degree " );

  }
  
}
