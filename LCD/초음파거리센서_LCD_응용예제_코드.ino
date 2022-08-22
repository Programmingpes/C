#include <Adafruit_LiquidCrystal.h>
#include <string.h>
Adafruit_LiquidCrystal lcd(0);

#define TRIG 13
#define ECHO 12

int before = 0;
void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.setBacklight(1);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}
void loop()
{
	digitalWrite(TRIG,LOW);
  	delayMicroseconds(2);
  	digitalWrite(TRIG,HIGH);
  	delayMicroseconds(10);
  	digitalWrite(TRIG,LOW);
  	long duration, distance;
  
  	duration = pulseIn(ECHO,HIGH);
  	distance = duration * 17 / 1000;
  	int t = before - distance;
  	t = t < 0 ? -t : t;
    if(t > 2){
      before = distance;
    }else{
      return; 
    }
    lcd.clear();
  	lcd.setCursor(0,0);
  	lcd.print("distance : ");
  	lcd.print(distance);
  	lcd.print("cm");
  	lcd.setCursor(0,1);
  	
  	if(distance < 5)
      lcd.print("crashed  ");
  	else
      lcd.print("not crash");
  	
}