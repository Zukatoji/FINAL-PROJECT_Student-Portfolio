Laboratory Activity 7: Controlling Arduino Using FastAPI

Description:
* This laboratory activity shows how an Arduino-based hardware system can be controlled using an HTTP interface with FastAPI. Instead of controlling the Arduino only through serial commands, this activity adds a web API layer. This allows the LED to be controlled using a web browser or HTTP requests, while still keeping two-way serial communication between the Arduino and the Python program.
* The hardware setup is the same as in Laboratory Activity 6, but the control method is changed from a terminal-based Python script to a REST-style web API.
  
Objectives:
* Understand and implement Arduino Serial Connection 
* Utilize Python as a tool for implementing serial connection, and implement a HTTP based solution using FastAPI
* Create a simple circuit what will implement bi-directional connection between

Hardware Used:
* Arduino Uno (or compatible MCU)
* 3 LEDs (Red, Green, Blue)
* 3 Push Buttons
* Breadboard
* Resistors
* Jumper wires

Pin Configuration:
LEDs:
* Red: Digital Pin 7
* Green: Digital Pin 6
 *Blue: Digital Pin 5

Buttons:
* Button 1: Digital Pin 12
* Button 2: Digital Pin 11
* Button 3: Digital Pin 10

System Architecture:

The system follows a three-layer interaction model.
* Arduino:
* The Arduino handles the hardware operations by reading button inputs, turning LEDs on or off using toggle logic, and sending or receiving commands through serial communication.
* Python + PySerial:
* Python maintains a continuous serial connection with the Arduino and acts as a bridge between web requests and hardware commands. It translates HTTP requests into serial commands and listens for signals sent by the Arduino.
* FastAPI:
* FastAPI provides a web-based interface by exposing HTTP endpoints that allow users to control the LEDs. Based on incoming API requests, it sends the appropriate serial commands to the Arduino.

The Arduino’s hardware logic is separated from the web interface, which allows different control methods to interact with the same device without changing the hardware code.

How the System Works:

* Arduino
* The Arduino listens for serial commands such as '1', '2', and '3' to toggle the LEDs. It also detects button presses and sends corresponding signals ('R', 'G', 'B') back to Python. Each LED state is managed internally using toggle logic.
* Python (FastAPI)
* Python opens a serial connection to the Arduino and runs a background process to monitor button events from the hardware. When a button signal is received, it automatically sends a toggle command back to the Arduino. It also exposes REST API endpoints that allow individual LEDs or all LEDs to be toggled through HTTP requests.
  
Key Concepts

* Serial communication between microcontrollers and software applications
* Two-way communication between hardware and software
* Controlling physical devices using a RESTful API
* Separating hardware control logic from application logic
* Using web technologies for IoT-style device control

Technical Notes
* The hardware wiring is the same as Laboratory Activity 6; only the software control method was modified.
* LED control uses toggle logic instead of direct ON and OFF commands.
* The /led/on and /led/off endpoints depend on toggle behavior and do not always guarantee the exact LED state.
* Thread locking is used in Python to avoid conflicts when accessing the serial connection.
* This setup focuses on learning and clarity rather than real-world production reliability.
