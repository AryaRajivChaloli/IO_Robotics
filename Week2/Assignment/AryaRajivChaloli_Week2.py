
# The LEDs flicker as per the user's input : color and the speed

import serial
import time
ser = serial.Serial('COM5', 9600)
choice=0
print("\n\n")
while True:
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
	time.sleep(1)