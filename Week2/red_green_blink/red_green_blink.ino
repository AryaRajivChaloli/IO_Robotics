#include <SoftwareSerial.h>
SoftwareSerial BLU(0,1);
int led_green=11;
int led_red=8;
int time_del=500;
int led=led_red,prev=0;

void setup()
{
Serial.begin(9600);
BLU.begin(9600);
pinMode(led_green,OUTPUT);
pinMode(led_red,OUTPUT);
}

void loop()
{
  if (Serial.available())
  {
    char letter=Serial.read();
    if (letter=='g')
    {
      prev=led;
      led=led_green;
      digitalWrite(prev,LOW);
    }
    else if (letter=='r')
    {
      prev=led;
      led=led_red;
      digitalWrite(prev,LOW);
    }
    else if (letter=='f')
      time_del/=2;
    else if (letter=='s')
      time_del*=2;
  } 
  if (prev)
  {
    digitalWrite(led,HIGH);
    delay(time_del);
    digitalWrite(led,LOW);
    delay(time_del);
  }
}
