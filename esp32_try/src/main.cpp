#include <Arduino.h>
int led_pin = 2;
unsigned long prevAction; 
int led_state = 0; // 

void setup() {
  pinMode(led_pin,OUTPUT);
  digitalWrite (led_pin, 1);
}


void loop() {
 if (millis() - prevAction >= 500){
  if (led_state == 0){
    led_state = 1;
  }else{
    led_state = 0;
  }

  digitalWrite(led_pin, led_state);
  prevAction = millis();

}

}



