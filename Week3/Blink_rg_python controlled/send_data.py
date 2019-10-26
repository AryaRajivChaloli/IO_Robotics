import serial
import time
ser = serial.Serial('COM6', 9600)
choice=0
print("\n\n")
while True:
	time.sleep(1)
	if choice==1 or choice==0:
		s=input("Enter light colour (g/r) : ")
		if s=='g':
			ser.write(b'g')
		elif s=='r':
			ser.write(b'r')
	elif choice==2:
		s=input("Press 'f' to go faster 's' for slower : ")
		if s=='f':
			ser.write(b'f')
		elif s=='s':
			ser.write(b's')
	choice=int(input("\nWhat do you want to choose ?\n1. COLOR\n2. SPEED\n"))
	
	
	
	
'''
Serial.begin(9600)
Serial.println("...")

while (Serial.available)
{
char letter=Serial.read()
if letter==...
Serial.print(letter)
}
'''
'''
-----------------------

int led_green=11
int led_red=8
int time_del=500;
int led=led_red,prev=0;

void setup()
{
Serial.begin(9600);
pinMode(led_green,OUTPUT);
pinMode(led_red,OUTPUT);
}

void loop()
{
	if (Serial.available())
	{
		char letter=Serial.read()
		if (letter=='g')
		{
			prev=led;
			led=led_green;
			digitalWrite(prev,LOW);
		}
		elif (letter=='r')
		{
			prev=led;
			led=led_red;
			digitalWrite(prev,LOW);
		}
		elif (letter=='f')
			time_del-=50;
		elif (letter=='s')
			time_del+=50;
	}	
	if (prev)
	{
		digitalWrite(led,HIGH);
		delay(time_del);
		digitalWrite(led,LOW);
		delay(time_del);
	}
}

'''