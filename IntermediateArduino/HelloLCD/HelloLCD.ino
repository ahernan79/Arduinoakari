#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Those are the pins for RS, EN, DB4, DB5, DB6, DB7, respectively
lcd.setCursor(0,0);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello World!");
}

void loop() {
  lcd.setCursor(0, 1);
    lcd.print(millis() / 1000);
}