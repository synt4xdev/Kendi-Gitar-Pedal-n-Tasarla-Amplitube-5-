import serial
import pyautogui
import time

arduino = serial.Serial('COM4', 9600, timeout=1)

time.sleep(2)

print("Joystick bekleniyor...")

while True:
    data = arduino.readline().decode('utf-8', errors='ignore').strip()

    if data:
        print("Arduino:", data)

    if data == "CLICK":
        pyautogui.click()