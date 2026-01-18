Laboratory Activity 2: Working with Analog Signals (LED Brightness Control)

Description

* This activity builds on the previous running light circuit by adding analog control. Instead of turning LEDs fully ON or OFF, the Arduino controls how bright each LED is using Pulse Width Modulation (PWM). This allows the LEDs to fade in and fade out smoothly.

Objectives

* Understand what analog signals are and how Arduino uses them

* Learn how to control LED brightness using PWM and the analogWrite() function

Hardware Used

* Arduino Uno, 5 LEDs, Resistors, Breadboard, annd Jumper wires

How the System Works

* Five LEDs are connected to Arduino pins 8 to 12 and stored in an array for easier control. A loop is used to set the pin modes and control the LED sequence. Each LED slowly increases its brightness from 0 to 255 using analogWrite(), creating a fade-in effect. After reaching full brightness, the LED then fades out from 255 back to 0. A short delay is added between LED changes so the running light pattern is easy to see, similar to the first activity.

Key Concepts Demonstrated

* Analog signal simulation using PWM
* LED brightness control with analogWrite()
* Use of arrays for pin management
* Loop-based logic using while statements
* Sequential timing and signal modulation

Technical Note

* This activity follows the required pin setup using digital pins 8 to 12 as stated in the laboratory instructions. The main goal of the activity is to demonstrate analog signal concepts and how PWM is used to control LED brightness, rather than focusing on which pins support hardware PWM.
