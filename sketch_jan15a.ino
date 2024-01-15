#include <LiquidCrystal_I2C.h>

int gumb = 3;
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  Serial.begin(9600);
  lcd.setCursor(0, 0);
  lcd.backlight();
  pinMode(gumb, INPUT);
}

void loop() {
  int buttonState = digitalRead(gumb);

  if (buttonState == HIGH) {
    lcd.print(".");
  }
}
