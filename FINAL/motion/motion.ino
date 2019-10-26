#include <SoftwareSerial.h>
SoftwareSerial BLU(0,1);

String letter="";
int f1=6;
int b1=7;
int motor1=10;
int speed1=120;
int speed2=115;
int f2=2;
int b2=3;
int motor2=4;

void left(){
  digitalWrite(f1,HIGH);
  digitalWrite(b1,LOW);
  analogWrite(motor1,speed1);
  digitalWrite(f2,LOW);
  digitalWrite(b2,LOW);
  delay(2000);
  forward();
}
void right(){
  digitalWrite(f1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(f2,LOW);
  digitalWrite(b2,HIGH);
  analogWrite(motor2,speed2);
  delay(2000);
  forward();
}
void forward(){
  digitalWrite(f1,HIGH);
  digitalWrite(b1,LOW);
  analogWrite(motor1,speed1);
  digitalWrite(f2,LOW);
  digitalWrite(b2,HIGH);
  analogWrite(motor2,speed2);
  delay(1000);
}
void backward(){
  digitalWrite(f1,LOW);
  digitalWrite(b1,HIGH);
  analogWrite(motor1,110);
  digitalWrite(f2,HIGH);
  digitalWrite(b2,LOW);
  analogWrite(motor2,120);
}
void stop_wheels(){
  digitalWrite(f1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(f2,LOW);
  digitalWrite(b2,LOW);
}
void setup() {
  Serial.begin(9600);
  BLU.begin(9600);
  pinMode(f1,OUTPUT);
  pinMode(b1,OUTPUT);
  pinMode(f2,OUTPUT);
  pinMode(b2,OUTPUT);
}

void loop() {
  delay(100);
  while(Serial.available())
  {
    char c=(char)Serial.read();
    letter+=c;
  }
  if (letter.length()>0)
  {
    if (letter=="forward" || letter=="forwards")
      forward();
    else if (letter=="backward" || letter=="backwards")
      backward();
    else if (letter=="left")
      left();
    else if (letter=="stop")
      stop_wheels();
    else if (letter=="right")
      right();
  }
  letter="";
}
