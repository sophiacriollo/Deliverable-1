# UNO R3 Smart Robot Car Kit V4 Project

## Goal
This project demonstrates how to set up, assemble, and program the UNO R3 Smart Robot Car Kit V4 with the following functionalities:
- **Line Tracking**: Detects and follows a black line on a surface.
- **Obstacle Avoidance**: Uses an ultrasonic sensor to avoid collisions.

## Features
- Interactive line-following mode.
- Smart ultrasonic-based obstacle avoidance.
- Modular and beginner-friendly.

## Requirements

### Software
| Software       | Version  | Notes                                 |
|----------------|----------|---------------------------------------|
| Arduino IDE    | 1.8.19   | Ensure correct library installations. |
| Libraries      | See below | Required for sensors and motors.     |

#### Required Libraries
- **NewPing.h** (for ultrasonic sensor)
- **AFMotor.h** (for motor control)
- **IRremote.h** (for optional IR remote control)

### Hardware
| Component              | Version/Model        | Notes                                     |
|------------------------|----------------------|-------------------------------------------|
| Arduino UNO R3         | Smart Robot Car Kit | Includes motor drivers and chassis.       |
| Line Tracking Module   | 3 Sensors           | Connects to digital pins (D4, D5, D6).    |
| Ultrasonic Sensor      | HC-SR04             | Connects to D7 (Trig) and D8 (Echo).      |
| Motor Driver Module    | L298N or built-in   | Pre-installed in the kit.                 |
| Batteries              | 18650 x 2           | Ensure adequate power for motors.         |

---

## Circuit Diagram
Below is a simplified wiring diagram for the robot:
- **Line Tracking Module**: Connect the three signal wires to D4, D5, D6.
- **Ultrasonic Sensor**: Trig to D7, Echo to D8.
- **Motors**: Connect to the built-in motor driver terminals.

Refer to the detailed diagram in the `/diagrams` folder.
