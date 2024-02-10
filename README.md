# Clap-Activated LED

This project lets you control an LED on and off using claps or similar loud sounds.

## Components Required

* Arduino (Uno, Nano, etc.)
* Sound sensor module 
* LED
* 220-ohm resistor 
* Jumper wires
* Breadboard (optional)

## Connections

* **Sound Sensor**
    * AO (Analog Out) -> Arduino Analog Pin A0
    * + (or VCC)     -> Arduino 5V
    * G (or GND)     -> Arduino GND

* **LED**
    * Positive Leg (+)  -> Arduino Digital Pin 2 (through a 220-ohm resistor)
    * Negative Leg (-)  -> Arduino GND


