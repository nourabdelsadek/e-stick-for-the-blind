E-stick for the blind
This Arduino project uses three ultrasonic sensors (HC-SR04) to detect the proximity of objects. When any sensor detects an object within 50 cm, a buzzer rings with increasing frequency as the object gets closer, providing an auditory alert.

Table of Contents
Project Overview
Hardware Required
Wiring Setup
Code
How it Works
Installation
Usage
License
Project Overview
The system is built with three ultrasonic sensors that constantly measure the distance to nearby objects. If any sensor detects an object within a 50 cm range, a buzzer emits a sound. The buzzer's frequency increases as the object gets closer, warning users of approaching obstacles. This project can be useful for applications like obstacle detection, parking sensors, or distance-based alert systems.

Hardware Required
Arduino Uno (or compatible board)
3 x Ultrasonic sensors (HC-SR04)
1 x Buzzer
Jumper wires
Breadboard
Wiring Setup
Component	Arduino Pin
Ultrasonic Sensor 1 Trig	Pin 9
Ultrasonic Sensor 1 Echo	Pin 10
Ultrasonic Sensor 2 Trig	Pin 11
Ultrasonic Sensor 2 Echo	Pin 12
Ultrasonic Sensor 3 Trig	Pin 13
Ultrasonic Sensor 3 Echo	Pin 14
Buzzer	Pin 3
Ultrasonic Sensor Pinout:

VCC: Connect to 5V
GND: Connect to GND
Trig: Connect to the assigned Trig pin on the Arduino
Echo: Connect to the assigned Echo pin on the Arduino
Buzzer Pinout:

Positive: Connect to Pin 3 on Arduino
Negative: Connect to GND
Code
The full code for this project can be found in the buzzer_alert_system.ino file in this repository.

Key Features:
Reads distance from three ultrasonic sensors.
Maps the detected distance to buzzer frequency (closer objects produce higher-pitched sounds).
The system is active when an object is within 50 cm of any sensor.
How it Works
Each ultrasonic sensor emits a sound wave and calculates the distance to an object by measuring the time it takes for the wave to return.
The shortest distance among the three sensors is used to control the buzzer.
If an object is detected within 50 cm, the buzzer will ring. As the distance decreases, the buzzer frequency increases, giving a real-time indication of how close the object is.
Distance (cm)	Buzzer Frequency (Hz)
50 cm	~500 Hz
25 cm	~1250 Hz
0 cm	~2000 Hz

Usage
Once the code is uploaded and the hardware is set up:

Place objects in front of any of the three ultrasonic sensors.
As the object approaches the sensor, the buzzer will sound with increasing frequency.
The system provides real-time feedback for proximity detection.
