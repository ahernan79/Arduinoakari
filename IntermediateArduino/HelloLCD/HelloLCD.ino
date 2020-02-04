#include <LiquidCrystal.h> //Includes LCD code library
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Those are the pins for RS, EN, DB4, DB5, DB6, DB7, respectively
lcd.setCursor(0,0); //sets LCD to start printing at the first line(0) at the first column(0)

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello World!"); //prints words to LCD
}

void loop() {
  lcd.setCursor(0, 1); //sets cursor on second line, first column
    lcd.print(millis() / 1000); //prints number of seconds since program began 
}
