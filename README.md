# Hand-Following Robot Car Project

## Goal
This project demonstrates how to set up, assemble, and program the Hand-Following Robot Car using the UNO R3 Smart Robot Car Kit V4 with the following functionalities:
- **Hand Following**: Detects and follows a user's hand movement.
- **Obstacle Avoidance**: Uses an ultrasonic sensor to avoid collisions.

## Features
- Interactive hand-following mode.
- Smart ultrasonic-based obstacle avoidance.
- Modular and beginner-friendly design.

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
| Hand Tracking Module    | N/A                  | Connects to digital pins for detection.   |
| Ultrasonic Sensor      | HC-SR04             | Connects to D7 (Trig) and D8 (Echo).      |
| Motor Driver Module    | L298N or built-in   | Pre-installed in the kit.                 |
| Batteries              | 18650 x 2           | Ensure adequate power for motors.         |

## Circuit Diagram
Below is a simplified wiring diagram for the robot:
- **Hand Tracking Module**: Connect the signal wires to appropriate digital pins (e.g., D2, D3 for tracking).
- **Ultrasonic Sensor**: Trig to D7, Echo to D8.
- **Motors**: Connect to the built-in motor driver terminals.

Refer to the detailed diagram in the `/diagrams` folder.
