int led=22;
int anal=0;
int max_val=1023;
int val1,val2,val3,val4,value;
int time_del=10;

void setup()
{
  pinMode(led,OUTPUT);
  val4=max_val*4/5;
  val3=max_val*3/5;
  val2=max_val*2/5;
  val1=max_val*1/5;
}
void loop()
{
  
  value=analogRead(anal);
  time_del=10;
  if (value>val1)
  {
    time_del=50;
  if (value>val2)
  {
    time_del=100;
  if (value>val3)
  {
    time_del=500;
  if (value>val4)
  {
    time_del=1000;
  }
  }
  }
  }
  digitalWrite(led,HIGH);
  delay(time_del);
  digitalWrite(led,LOW);
  delay(time_del);
}
