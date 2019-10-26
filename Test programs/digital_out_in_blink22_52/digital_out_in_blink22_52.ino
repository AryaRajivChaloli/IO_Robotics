int a=0;
void setup()
{
  pinMode(22,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(52,INPUT);
}
void loop()
{
  a=digitalRead(52);
  if (a)
  {
  
  digitalWrite(LED_BUILTIN,LOW);
  digitalWrite(22,HIGH);
  delay(1000);
  }
  else
  {
  digitalWrite(22,LOW);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  }
}
