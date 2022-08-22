#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

#define SLIDE 13
#define TMP A0

int status = 0;
void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,3);
  lcd.setBacklight(0);
  pinMode(SLIDE, INPUT);
  pinMode(TMP, INPUT);
  Serial.begin(9600);
}
void lcd_on(){
 	float voltage = analogRead(TMP) * 5.0 / 1024.0;
  	float tmp = voltage * 100 - 50;
  	Serial.println(tmp);
  	lcd.setBacklight(1);
    lcd.print(tmp);    
}
void lcd_off(){
  lcd.setBacklight(0);
  lcd.clear();
}
void loop()
{
 	int value = digitalRead(SLIDE);
  if(status != value){
  	lcd.clear();
    status = value;
  }else{
    return; 
  }
  if(value){
   	lcd_on();
  }else{
  	lcd_off();
  }
}