from fastapi import FastAPI
import serial
import time
import threading

PORT = 'COM4'
BAUD = 9600

arduino = serial.Serial(PORT, BAUD, timeout=0.1)
time.sleep(2)

lock = threading.Lock()
app = FastAPI()

def listen_to_arduino():
    while arduino.is_open:
        if arduino.in_waiting:
            signal = arduino.readline().decode().strip().upper()
            with lock:
                if signal == 'R':
                    arduino.write(b'1')
                elif signal == 'G':
                    arduino.write(b'2')
                elif signal == 'B':
                    arduino.write(b'3')
        time.sleep(0.01)

threading.Thread(target=listen_to_arduino, daemon=True).start()

@app.get("/led/{color}")
def toggle_led(color: str):
    color = color.lower()
    with lock:
        if color == "red":
            arduino.write(b'1')
        elif color == "green":
            arduino.write(b'2')
        elif color == "blue":
            arduino.write(b'3')
        else:
            return {"error": "Invalid color"}
    return {"status": f"{color} toggled"}

@app.get("/led/on")
def toggle_all_on():
    with lock:
        arduino.write(b'1')
        arduino.write(b'2')
        arduino.write(b'3')
    return {"status": "All LEDs toggled ON"}

@app.get("/led/off")
def toggle_all_off():
    with lock:
        arduino.write(b'1')
        arduino.write(b'2')
        arduino.write(b'3')
    return {"status": "All LEDs toggled OFF"}
