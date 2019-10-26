int a=0;
int led=11;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  
}
void loop()
{
  if (a<10)
  {
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
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
