#include <Arduino.h>
// #include <Tone32.h>
// const int tone_pin = 21;
// int tone_channel = 0;
// int melodySize;
// int notes[] = {
//   NOTE_E7, NOTE_E7, 0, NOTE_E7,
//   0, NOTE_C7, NOTE_E7, 0,
//   NOTE_G7, 0, 0,  0,
//   NOTE_G6, 0, 0, 0,

//   NOTE_C7, 0, 0, NOTE_G6,
//   0, 0, NOTE_E6, 0,
//   0, NOTE_A6, 0, NOTE_B6,
//   0, NOTE_AS6, NOTE_A6, 0,

//   NOTE_G6, NOTE_E7, NOTE_G7,
//   NOTE_A7, 0, NOTE_F7, NOTE_G7,
//   0, NOTE_E7, 0, NOTE_C7,
//   NOTE_D7, NOTE_B6, 0, 0,

//   NOTE_C7, 0, 0, NOTE_G6,
//   0, 0, NOTE_E6, 0,
//   0, NOTE_A6, 0, NOTE_B6,
//   0, NOTE_AS6, NOTE_A6, 0,

//   NOTE_G6, NOTE_E7, NOTE_G7,
//   NOTE_A7, 0, NOTE_F7, NOTE_G7,
//   0, NOTE_E7, 0, NOTE_C7,
//   NOTE_D7, NOTE_B6, 0, 0
// };

// int durations[] = {
//   166, 166, 166, 166,
//   166, 166, 166, 166,
//   166, 166, 166, 166,
//   166, 166, 166, 166,

//   166, 166, 166, 166,
//   166, 166, 166, 166,
//   166, 166, 166, 166,
//   166, 166, 166, 166,

//   222, 222, 222,
//   166, 166, 166, 166,
//   166, 166, 166, 166,
//   166, 166, 166, 166,

//   166, 166, 166, 166,
//   166, 166, 166, 166,
//   166, 166, 166, 166,
//   166, 166, 166, 166,

//   222, 222, 222,
//   166, 166, 166, 166,
//   166, 166, 166, 166,
//   166, 166, 166, 166,
// };
// void setup() {
// melodySize = sizeof(notes) / sizeof(int);
// }
// void loop() {
// for (int i = 0; i < melodySize; i++) {
// tone (tone_pin, notes[i], durations [i], 0);
// }
// }


#include <Tone32.h>

#define BUZZER_PIN 16
#define BUZZER_CHANNEL 0

void setup() {}

void loop() {
  tone(BUZZER_PIN, NOTE_C4, 500, BUZZER_CHANNEL);
  noTone(BUZZER_PIN, BUZZER_CHANNEL);
  tone(BUZZER_PIN, NOTE_D4, 500, BUZZER_CHANNEL);
  noTone(BUZZER_PIN, BUZZER_CHANNEL);
  tone(BUZZER_PIN, NOTE_E4, 500, BUZZER_CHANNEL);
  noTone(BUZZER_PIN, BUZZER_CHANNEL);
  tone(BUZZER_PIN, NOTE_F4, 500, BUZZER_CHANNEL);
  noTone(BUZZER_PIN, BUZZER_CHANNEL);
  tone(BUZZER_PIN, NOTE_G4, 500, BUZZER_CHANNEL);
  noTone(BUZZER_PIN, BUZZER_CHANNEL);
  tone(BUZZER_PIN, NOTE_A4, 500, BUZZER_CHANNEL);
  noTone(BUZZER_PIN, BUZZER_CHANNEL);
  tone(BUZZER_PIN, NOTE_B4, 500, BUZZER_CHANNEL);
  noTone(BUZZER_PIN, BUZZER_CHANNEL);
}