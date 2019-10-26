int a=0;
void setup()
{
  pinMode(22,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  
}
void loop()
{
  if (a<10)
  {
  digitalWrite(22,HIGH);
  delay(1000);
  digitalWrite(22,LOW);
  delay(1000);
  }
  else
  {
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
  }
  a++;
}
