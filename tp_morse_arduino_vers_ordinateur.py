import serial
import keyboard
import readchar
import time
from playsound import playsound


serial_port = serial.Serial(port = "/dev/ttyACM0")

while True :
    if serial_port.readline():
        print(serial_port.readline())
        playsound('./bip.mp3')
