#include <LiquidCrystal_I2C.h> //Includes library for LCD and LCD backpack
LiquidCrystal_I2C lcd(0x27, 16, 2); //gives paramaters for LCD, 16 columns, 2 lines

void setup()
{
 lcd.init();  //initiates LCD
 lcd.backlight(); //turns on backlight
 lcd.print("hello, world!"); //prints words to LCD
}
void loop()
{
 lcd.setCursor(0, 1); //sets cursor on second line
 lcd.print(millis() / 1000); //prints seconds since program began
 delay(100);
}

