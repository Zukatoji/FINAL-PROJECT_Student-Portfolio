Laboratory Activity 5: Serial Communication Between Arduino and Python

Description
* This activity shows how an Arduino and a Python program can communicate with each other using Serial communication. A Python program sends commands to the Arduino, and the Arduino follows those commands to control several LEDs.

Objectives
* Learn how to use Serial communication with Arduino
* Use Python and the pyserial library to control hardware
* Create a simple command-based control system

Hardware Used
* Arduino MCU
* Red, Green, and Blue LEDs
* Resistors
* Breadboard and jumper wires
* PC/Laptop with Python and pyserial installed

Pin Configuration
* Red LED: Digital Pin 8
* Green LED: Digital Pin 9
* Blue LED: Digital Pin 10

System Structure

  The system has two main parts:
  * Arduino program – receives commands from Python and controls the LEDs
  * Python program – runs on the computer and lets the user send commands through a menu

How the System Works
* On the Arduino side, the LED control code is organized using a header file to keep the program neat and easy to understand. The Arduino reads incoming serial commands and uses them to turn LEDs on or off. Users can control individual LEDs or all LEDs at once. The commands work regardless of letter case (uppercase or lowercase).
* On the Python side, a command-line program is created using the pyserial library. The program shows a menu of commands, sends the chosen command to the Arduino, and displays messages sent back by the Arduino. When the user chooses to exit, the program safely turns off all LEDs and closes the serial connection.

Supported Commands
* R – Toggle Red LED
* G – Toggle Green LED
* B – Toggle Blue LED
* A – Turn all LEDs ON
* O – Turn all LEDs OFF
* X – Exit Python application

Key Concepts Learned
* Serial communication between a computer and Arduino
* Organizing Arduino code using header files
* Using Python to communicate with hardware


Technical Notes 
* The system uses simple single-character commands to make learning easier.
* LED control code is placed in a header file to keep the project simple for lab use.
* The serial port can be changed in the Python program depending on the computer being used.
