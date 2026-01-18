Laboratory Activity 6: Bidirectional Control Using Arduino and Python

Description
* This activity shows how Arduino and Python can communicate with each other in both directions. Buttons connected to the Arduino send signals to a Python program, and the Python program sends commands back to the Arduino to control LEDs.

Objectives: 
* Understand and implement Arduino Serial Connection 
* Utilize Python as a tool for implementing serial connection 
* Create a simple circuit what will implement bi-directional connection between Arduino and Python

Hardware Used
* Arduino MCU
* Red, Green, and Blue LEDs
* Three push buttons
* Resistors
* Breadboard and jumper wires
* PC/Laptop with Python and pyserial installed

Pin Configuration

LEDs:
* Red: Digital Pin 7
* Green: Digital Pin 6
* Blue: Digital Pin 5

Buttons:

* Button 1: Digital Pin 12
* Button 2: Digital Pin 11
* Button 3: Digital Pin 10

System Architecture

The system uses two-way communication:
* From Arduino to Python: When a button is pressed on the Arduino, it sends a simple letter (R, G, or B) to the Python program.
* From Python to Arduino: Python reads the letter and immediately sends a number (1, 2, or 3) back to the Arduino. The Arduino then turns the correct LED on or off.

How the System Works
* On the Arduino side, the program continuously checks the buttons. Pressing a button sends a signal to Python but does not directly control the LEDs. The Arduino only changes the LED state when it receives a command from Python. This keeps input and output functions separate and organized.
* On the Python side, the program listens for signals from the Arduino while also allowing user input at the same time. When Python receives a signal from a button press, it quickly sends the correct command back to the Arduino, allowing real-time control.

Technical Notes

* The system uses single-character messages to keep communication simple.
* Buttons use external pull-down resistors for proper operation.
* Simple debounce handling is used to prevent false button presses.
* The system responds in less than one second.
