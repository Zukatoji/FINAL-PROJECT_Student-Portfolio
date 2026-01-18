Laboratory Activity 4: Arduino Serial Connection and Sensor Control

Description
* This activity shows how to use Arduino Serial Communication to control a circuit while it is running. A photoresistor is used to detect light, and commands typed in the Serial Monitor are used to control the LED.

Objectives
* Learn how to use Serial communication in Arduino
* Use simple Serial commands for input and output
* Build a circuit that reacts to a sensor and user commands

Hardware Used
* Arduino Uno
* Photoresistor
* LED
* Resistors
* Breadboard and jumper wires

Pin Connections
* Photoresistor → Analog Pin A2
* LED → Digital Pin 8

How the System Works
* The Arduino constantly reads the light level using the photoresistor. When the light reaches a certain level, the LED starts blinking at a fixed speed. The LED will keep blinking even if the light level goes back down.
* The user can control the system using the Serial Monitor. If the word “stop” is typed (uppercase or lowercase), the LED immediately stops blinking and the system returns to its normal waiting state.
  
Key Concepts Demonstrated
* Serial communication using Serial.begin(), Serial.available(), and Serial.readStringUntil()
* Persistent state management using boolean flags
* Sensor-driven conditional logic
* User-controlled system override via Serial input

Technical Notes
* Sensor readings are adjusted to make the output easier to control and understand.
* Delay functions are used to keep the program simple, but they can make the system respond slower.
* The Serial Monitor must be set correctly so the Arduino can read the typed commands properly.
