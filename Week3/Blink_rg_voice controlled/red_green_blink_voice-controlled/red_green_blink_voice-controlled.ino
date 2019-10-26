#include <SoftwareSerial.h>
SoftwareSerial BLU(0,1);
int led_green=11;
int led_red=8;
int time_del=500;
int led=led_red,prev=0;
String letter="";

void setup()
{
  Serial.begin(9600);
  BLU.begin(9600);
  pinMode(led_green,OUTPUT);
  pinMode(led_red,OUTPUT);
}

void loop()
{
  while(Serial.available())
  {
    char c=(char)Serial.read();
    letter+=c;
  }
  if (letter.length()>0)
  {
    if (letter=="green")
    {
      prev=led;
      led=led_green;
      digitalWrite(prev,LOW);
    }
    else if (letter=="red")
    {
      prev=led;
      led=led_red;
      digitalWrite(prev,LOW);
    }
    else if (letter=="faster")
      time_del/=2;
    else if (letter=="slower")
      time_del*=2;
  }
  if (prev)
  {
    digitalWrite(led,HIGH);
    delay(time_del);
    digitalWrite(led,LOW);
    delay(time_del);
  }
  letter="";
  delay(10);
}
