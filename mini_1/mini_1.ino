#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int buttonstate=1,buttonpress=0;

void setup() 
{
  pinMode(13,INPUT);
  lcd.begin(16, 2);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
}
//comment
void loop() 
{

  buttonpress=digitalRead(13);
  if(buttonstate==1 && buttonpress==1)
  { 
    lcd.clear();
    lcd.print("hi");
    digitalWrite(8,HIGH);
    delay(2000);
    digitalWrite(8,LOW);
    delay(200);
    buttonstate=2;
    buttonpress=0;
  }
  
  if(buttonstate==2 && buttonpress==1)
  { 
    lcd.clear();
    lcd.print("hello");
    digitalWrite(9,HIGH);
    delay(2000);
    digitalWrite(9,LOW);
    delay(200);
    buttonstate=3;
    buttonpress=0;
  }
  
  if(buttonstate==3 && buttonpress==1)
  { 
    lcd.clear();
    lcd.print("how r u");
    digitalWrite(10,HIGH);
    delay(2000);
    digitalWrite(10,LOW);
    delay(200);
    buttonpress=0;
    buttonstate=1;
  }
}
