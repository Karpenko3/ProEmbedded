#include <Arduino.h>
int red_pin = 13;
int chanel = 0;
int frequency = 5000;
int resolution = 8;
void setup() {
 ledcSetup (chanel, frequency, resolution);
 ledcAttachPin(red_pin, chanel);
}

void loop() {
  for(int i = 0; i<256; i++ ){
   ledcWrite(chanel, i);
   delay(10);
  }
  for(int i = 255; i>=0; i-- ){
   ledcWrite(chanel, i);
   delay(10);
  }
}

