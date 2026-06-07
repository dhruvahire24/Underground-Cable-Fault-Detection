# Underground Cable Fault Detection System

## Project Overview

The Underground Cable Fault Detection System is designed to identify faults in underground power cables and estimate the fault location using Ohm's Law. The system uses an Arduino microcontroller to monitor resistance variations, calculate fault distance, display the result on an LCD screen, and send notifications through a GSM module.

## Features

- Detects underground cable faults automatically
- Calculates fault distance using Ohm's Law
- Displays fault location on LCD
- Sends SMS alerts using GSM module
- Reduces fault detection time
- Improves maintenance efficiency

## Components Used

- Arduino Uno
- GSM Module
- LCD Display
- Resistors
- Power Supply Unit
- Connecting Wires
- Prototype Underground Cable Model

## Working Principle

The system applies Ohm's Law to determine the fault location. When a fault occurs, the resistance value changes according to the distance of the fault from the source. The Arduino reads the analog voltage, calculates the corresponding distance, displays it on the LCD, and sends an alert through the GSM module.

## Demo Output

Example:

- Red Cable Fault: 10 km
- Yellow Cable Fault: 20 km
- Blue Cable: No Fault

## Setup Instructions

1. Connect all components according to the circuit diagram.
2. Upload the Arduino code to the Arduino Uno.
3. Insert a valid SIM card into the GSM module.
4. Power ON the system.
5. Observe fault location on the LCD and receive SMS alerts.

## Future Scope

- IoT-based monitoring
- Cloud integration
- Mobile application support
- AI-based predictive maintenance
