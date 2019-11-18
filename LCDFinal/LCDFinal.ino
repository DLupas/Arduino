
#include <LiquidCrystal.h>

//Hey, welcome to my Personal Interest Application!
//The format I will be doing is an Arduino breadboard/program.
//Arduino is a open source, C based program designed to get people into electronics.

const int rs = 12;
const int en = 11;
const int d4 = 5;
const int d5 = 4;
const int d6 = 3;
const int d7 = 2;
int button = 0;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  
lcd.begin(16,2);
pinMode(button,INPUT);
Serial.begin(9600);
}

void loop() {
//  int buttonstate = digitalRead(button);
//  Serial.println(buttonstate);
//  delay(500);
//lcd.print(buttonstate);
//delay(500);
  //if(digitalRead(button) == 0);
  lcd.print("Hey, welcome\n");
  delay(1000);

//  lcd.autoscroll();
  lcd.print("to my ");
  delay(1000);
  
  lcd.print("Personal ");
  delay(1000);

  lcd.print("Interest ");
  delay(1000);
  
 // lcd.clear();
  lcd.print("Application!\n");
  delay(1000);
  
  lcd.blink();
  delay(3000);
  lcd.noBlink();
  delay(1000);
  
//  delay(500);
  lcd.clear();
  delay(1000);

 
  
  }
