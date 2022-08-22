#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.setBacklight(1);
  lcd.print("LCD Print");    
  //lcd.clear();
}

void loop()
{
 
}