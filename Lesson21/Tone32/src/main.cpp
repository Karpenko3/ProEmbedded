#include <Arduino.h>
#include <Tone32.h>
int tone_pin = 13;
int tone_channel = 0;
int melodySize;
int notes[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};

int durations[] = {
  166, 166, 166, 166,
  166, 166, 166, 166,
  166, 166, 166, 166,
  166, 166, 166, 166,

  166, 166, 166, 166,
  166, 166, 166, 166,
  166, 166, 166, 166,
  166, 166, 166, 166,

  222, 222, 222,
  166, 166, 166, 166,
  166, 166, 166, 166,
  166, 166, 166, 166,

  166, 166, 166, 166,
  166, 166, 166, 166,
  166, 166, 166, 166,
  166, 166, 166, 166,

  222, 222, 222,
  166, 166, 166, 166,
  166, 166, 166, 166,
  166, 166, 166, 166,
};
void setup() {
melodySize = sizeof(notes) / sizeof(int);
}
void loop() {
for (int i = 0; i < melodySize; i++) {
tone (tone_pin, notes[i], durations [i], 0);
}
}

