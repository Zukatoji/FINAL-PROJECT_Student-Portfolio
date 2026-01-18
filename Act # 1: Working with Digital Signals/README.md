Laboratory Activity 1: Working with Digital Signals (Running Light Circuit)

Description

* This activity shows how digital signals work using an Arduino. A running light effect is created by turning LEDs on and off one at a time. This helps in understanding how Arduino controls digital output pins and how timing   affects the behavior of electronic components.

Objective

* Understand the use of Arduino as a basic device for IoT projects
* Learn how to control digital output pins using Arduino

Hardware Used:

* Arduino Uno,
* 5 LEDs,
* Resistors,
* Breadboard
* and Jumper wires

Implementation Overview

* Five LEDs are connected to Arduino digital pins 8 to 12. The Arduino turns the LEDs ON one by one starting from pin 12 down to pin 8. After all LEDs are ON, they are turned OFF in the same order. A delay of 1 second is       used between each step so the running light effect can be seen clearly.
* The setup() function sets all LED pins as outputs using a loop. The loop() function has two loops: one to turn the LEDs ON and another to turn them OFF.

Key Concepts Demonstrated:

* Digital output control using digitalWrite()
* Loop-based pin configuration
* Sequential logic and timing
* Basic embedded system programming
