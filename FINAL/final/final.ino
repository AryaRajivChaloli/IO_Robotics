int f1=6;
int b1=7;
int motor1=10;
int speed_m=100;
int f2=2;
int b2=3;
int motor2=4;
void setup() {
  pinMode(f1,OUTPUT);
  pinMode(b1,OUTPUT);
  pinMode(f2,OUTPUT);
  pinMode(b2,OUTPUT);
}

void forward(){
  digitalWrite(f1,HIGH);
  digitalWrite(b1,LOW);
  analogWrite(motor2,speed_m);
  digitalWrite(f2,HIGH);
  digitalWrite(b2,LOW);
  analogWrite(motor2,speed_m);
}
void loop() {
  forward();
  delay(1000);
}
