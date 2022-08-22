#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);
#define BUTTON 13

int status = 1;
void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.setBacklight(1);
  pinMode(BUTTON, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
 	int value = digitalRead(BUTTON);
  	Serial.println(value);
  if(status != value){
  	lcd.clear();
    status = value;
  }else{
    return; 
  }
  if(value){
   //버튼이 안눌렸을 때 
    lcd.print("Button UP");
  }else{
   //버튼이 눌렸을 때 
    lcd.print("Button DOWN");
  }
}