Midterm Laboratory Exam: Smart Outdoor Lighting System Using Arduino

Description
* This project creates a smart outdoor lighting system using an Arduino and a photoresistor to detect light from the environment. The system can work in Manual mode or Automatic mode. It turns the LED lights on or off depending on how bright or dark the surroundings are and the settings chosen by the user. The system is controlled using the Arduino Serial Monitor.

Objectives
* Measure the brightness of the surroundings using a photoresistor
* Convert the sensor readings into percentage values
* Control multiple LEDs based on the light level
* Implement both manual and automatic modes of operation
* Allow users to control and configure the system using the Serial Monitor
* Simulate different lighting conditions such as cloudy, normal, and clear

Hardware Used
* Arduino Uno (or compatible MCU)
* Photoresistor (LDR)
* 3 LEDs (Green, Yellow, Red)
* Resistors
* Breadboard
* Jumper wires

Laptop with Arduino IDE
System Architecture:
* The system uses a single-controller architecture. Input Layer, the photoresistor measures the surrounding light level, while serial commands allow the user to interact with and control the system. Processing Layer, the Arduino converts the sensor readings into a percentage-based light intensity value. It uses mode-based logic to decide how the thresholds behave and includes a command parser to understand user input from the serial monitor and Output Layer, the LEDs visually show the current light intensity level, and the Serial Monitor displays system status messages and feedback about the environment.

Implementation Overview

Light Measurement
* The photoresistor reading, which ranges from 0 to 1023, is converted into a light intensity value from 0 to 100 percent. At any given time, only one LED is turned on to represent the current lighting condition.

LED Behavior
* When the light level is low, the green LED is activated. When the light level is medium, the yellow LED is activated. When the light level is high, the red LED is activated.

Operating Modes:

Manual Mode (Default)
* In manual mode, the system uses user-defined low and high threshold values. The light intensity can also be manually set to simulate different lighting conditions.

Automatic Mode
* In automatic mode, the system identifies the environment as Cloudy, Normal, or Clear. The LED behavior automatically adjusts based on the measured light intensity.

Serial Interaction
* The system supports serial commands that allow the user to switch between automatic and manual modes, set low and high threshold values, and manually simulate light intensity in manual mode. Any invalid command entered by the user results in an error message.

Key Concepts
* Reading analog values from a light sensor
* Converting sensor values into usable ranges
* Designing a system that changes behavior based on its current state
* Using manual and automatic control logic
* Processing user commands from the Serial Monitor
* Using LEDs to visually represent environmental conditions
* Communicating with the system through serial input and output

Technical Notes

* Light threshold values are shown as percentages to make them easier to understand and adjust
* Only one LED can turn on at a time to avoid conflicts
* Automatic mode simulates different lighting conditions instead of using real weather data
* Sensor readings and system status are updated every second
* The project focuses on demonstrating how the system works rather than optimizing hardware performance
