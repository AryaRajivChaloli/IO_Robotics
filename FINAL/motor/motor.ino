int x=6;
int y=7;
int motor=10;
int speed_m=200;
void setup() {
  pinMode(x,OUTPUT);
  pinMode(y,OUTPUT);
}

void loop() {
  digitalWrite(x,HIGH);
  digitalWrite(y,LOW);
  analogWrite(motor,speed_m);
  delay(1000);
}
