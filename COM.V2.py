import serial
import time

arduino = serial.Serial(port='COM6', baudrate=9600, timeout=0)
time.sleep(0)

for x in range(3):
    arduino.write(str.encode('1'))
    print("Mandas un 1")
    time.sleep(1)

    arduino.write(str.encode('2'))
    print("Mandas un 2")
    time.sleep(1)

    arduino.write(str.encode('3'))
    print("Mandas un 3")
    time.sleep(1)

    arduino.write(str.encode('4'))
    print("Mandas un 4")
    time.sleep(1)