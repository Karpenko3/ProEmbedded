#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
byte LS[8] = {
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10000
};
byte Diamond[8] = {
  0b00000,
  0b00000,
  0b00100,
  0b01110,
  0b11111,
  0b01110,
  0b00100,
  0b00000
  };

  void setup() {
    lcd.init();
    lcd.backlight();
    lcd.createChar(0, LS);
    lcd.createChar(1, Diamond);
    lcd.setCursor(0, 0);
    lcd.write(0);
    lcd.setCursor(0, 1);
    lcd.write(1);
  }

  void loop() {
  
  }

