Final Laboratory Exam: Arduino-to-Python API Client System for Remote LED Control

Description
* This project shows how an Arduino and a Python program work together to control an LED remotely. When a push button connected to the Arduino is pressed, the Arduino sends a signal through the serial connection. A Python program receives this signal and sends an HTTP request to a specific API to control the LED. The Arduino does not connect to the API directly—it communicates through the Python program instead.

Objectives
* Implement button input on Arduino with software debouncing
* Send button press signals from Arduino to a Python program
* Trigger HTTP API requests when the button is pressed
* Ensure that each button press results in only one API call


Hardware Used
* Arduino Uno (or compatible MCU)
* Push Button
* Resistor
* Breadboard
* Jumper wires
* External API server (provided during exam)

System Architecture

The system uses a three-layer distributed architecture.

Edge Device (Arduino)
* The Arduino detects when a physical button is pressed, applies software debouncing to avoid false triggers, and sends a group identifier to the computer through serial communication.

Middleware (Python Client)
* The Python client continuously listens to the serial port, checks and cleans the incoming data, and then creates and sends HTTP requests to the API server. It also shows feedback messages and error information to the user.

Remote API Server
* The API server receives toggle requests from the Python client and controls the LED system remotely.

This architecture keeps each layer independent, allowing components to be modified or replaced without affecting the rest of the system.

How the System Works

Arduino Logic
* The Arduino continuously monitors the push button using digitalRead(). Software debouncing is handled using millis() to prevent multiple triggers from a single press. Each valid button press sends exactly one signal through serial communication, and this signal represents the assigned group number. The Arduino does not control any LEDs or perform any network-related tasks.

Python Client Logic
* The Python client uses the PySerial library to continuously read data from the Arduino’s serial output and runs without stopping. When valid serial data is received, the program cleans and standardizes the input, then builds the API endpoint in the format /led/group/<number>/toggle. It sends an HTTP GET request to the API using the requests library and displays runtime feedback, including the group number received, the API endpoint that was called, and the response status from the server.

Key Concepts
* Preventing false or repeated button presses using software debouncing
* Communicating between Arduino and a computer using serial connection
* Using Python as a middle layer between hardware and web services
* Controlling devices through HTTP requests
* Responding to events instead of running constant checks
* Separating responsibilities across different parts of the system

Technical Notes
* Debouncing avoids multiple API calls when the button is held down
* Serial data is checked and processed by the Python program
* The Arduino is purposely kept offline to follow proper system design
* Python translates hardware signals into web requests
* The system design reflects how real IoT gateways connect devices to cloud services
