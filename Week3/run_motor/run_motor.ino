int x=4;
int y=5;
int pwm=0;

void setup() 
{
  pinMode(x,1);
  pinMode(y,1);
}

void loop() 
{
  digitalWrite(x,0);
  digitalWrite(y,1);
  analogWrite(pwm,200);
}
