Laboratory Activity 3: Fire Sensor Simulation Using Arduino

Description
* This activity shows a simple fire detection simulation using an Arduino. A thermistor is used to detect temperature, and a photoresistor is used to detect light intensity. The system checks the sensor values against set limits and turns on a visual alert when possible fire conditions are detected.

Objectives

* Familiarize with basic sensor components used in IoT systems
* Integrate multiple sensors in an Arduino circuit
* Implement threshold-based decision logic for fire detection
  
Hardware Used

* Arduino Uno
* Thermistor
* Photoresistor
* Red LED
* Resistors
* Breadboard and jumper wires
  
Pin Configuration
* Thermistor: Analog Pin A0
* Photoresistor: Analog Pin A2
* Alert LED: Digital Pin 12

Implementation Overview

* The system continuously reads temperature data from the thermistor and light intensity data from the photoresistor. The temperature is calculated in degrees Celsius based on the thermistor’s resistance, while the light intensity is evaluated by comparing the sensor value to a set threshold. If both the temperature is 50 °C or higher and the light intensity value is 220 or higher, the system turns on a fast-blinking red LED to indicate a possible fire condition. The temperature calculation is placed in a separate function to make the code easier to read and organize.

Key Concepts Demonstrated

* Multi-sensor integration
* Analog signal acquisition and interpretation
* Threshold-based conditional logic
* Functional decomposition in embedded systems
* Use of constants and macros for configuration management

Technical Notes

* The photoresistor reading is handled as a digital condition by comparing it to a threshold value instead of using a direct digital input.
* The thermistor calculations use standard beta parameter values that are appropriate for simulation and learning purposes.
* A buzzer is connected in parallel with the alert LED and uses the same digital output pin. Because of this setup, the buzzer turns on and off at the same time as the LED blinking pattern, without needing extra control logic in the code.
