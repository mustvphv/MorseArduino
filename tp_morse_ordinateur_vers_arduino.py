import serial
import keyboard
import readchar
import time
from playsound import playsound


serial_port = serial.Serial(port = "/dev/ttyACM0")

while True :
    
    if keyboard.is_pressed('a'):
        print('appui sur A')
        serial_port.write(str.encode('A'))
        time.sleep(0.5)
