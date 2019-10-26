
// the led flickers with a greater frequency as the obstacle approaches the sensor

int led=22,trig=50,echo=52;
int max_val=50;
int val1,val2,val3,val4,value;
int time_del=10;
int start_time,stop_time,time_comp;
int distance;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  val4=max_val*4/5;
  val3=max_val*3/5;
  val2=max_val*2/5;
  val1=max_val*1/5;
}

void loop()
{

  digitalWrite(trig, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trig, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trig, LOW);

  time_comp = pulseIn(echo, HIGH); 
  distance = (time_comp*.0343)/2;

  value=distance;

  if (value<=max_val)
  {
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
}
