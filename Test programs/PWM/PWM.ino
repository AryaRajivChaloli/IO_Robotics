int a=0;
int led=10;
void setup()
{
}

void loop()
{
 analogWrite(led,a);
 delay(10);
 a++;
 if (a==255)
 {
  a=0;
 } 
}
