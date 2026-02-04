# 3-DOF-Robotic-Arm
# Arduino Potentiometer-Controlled Robotic Arm

## Project Overview
This project implements a manual control system for a robotic arm using an Arduino Uno. It allows for real-time control of 4 servo motors using 3 potentiometers. The system is designed to translate analog inputs into precise angular movements (0-180°) for the arm's joints.

## Features
* **3-Axis Control:** Maps 3 independent potentiometer inputs to servo movement.
* **Dual-Servo Joint Support:** The code is configured to control `servo2` and `servo3` simultaneously using a single potentiometer (`PotPin2`), which is useful for joints requiring double torque or synchronized movement.
* **Signal Mapping:** Converts standard 10-bit analog signals (0-1023) to 8-bit servo angles (0-180).

## Hardware Requirements
Based on the Bill of Materials:
* **Microcontroller:** 1x Arduino Uno R3
* **Actuators:** 4x Positional Micro Servos
* **Inputs:** 3x 10 kΩ Potentiometers
* **Power:** External 5V power supply (recommended for 4 servos)

## Circuit Diagram
The wiring schematic was designed using Tinkercad.
*(See `assets/Robotic Arm Circuit.pdf` for the full schematic)*

**Pin Configuration:**
| Component | Arduino Pin | Description |
|-----------|-------------|-------------|
| Servo 1   | D10         | Controlled by Pot 1 |
| Servo 2   | D9          | Controlled by Pot 2 (Sync) |
| Servo 3   | D7          | Controlled by Pot 2 (Sync) |
| Servo 4   | D6          | Controlled by Pot 3 |
| Pot 1     | A1          | Input for Servo 1 |
| Pot 2     | A2          | Input for Servos 2 & 3 |
| Pot 3     | A3          | Input for Servo 4 |

## Installation & Setup
1.  **Wiring:** Assemble the circuit according to the provided PDF in the `assets` folder.
2.  **Dependencies:** Ensure the standard `Servo.h` library is installed in your Arduino IDE.
3.  **Upload:**
    * Open `src/robotic_arm_circuit1/robotic_arm_circuit1.ino`.
    * Connect your Arduino Uno.
    * Select the correct COM port and Board type.
    * Upload the sketch.

## Usage
Once powered, rotating the potentiometers will immediately adjust the angle of the corresponding servos. 
* **Pot 1:** Controls the base/first joint.
* **Pot 2:** Controls the main lift (dual servos).
* **Pot 3:** Controls the claw or secondary joint.
