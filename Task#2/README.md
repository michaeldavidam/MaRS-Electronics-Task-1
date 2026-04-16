# Task 2 – Motor Drive Control using Serial Communication

## Aim
To control a motor drive system using Arduino by giving commands through Serial Monitor.

## What I did
In this task, I created a simple motor control system where I can control the movement (forward, reverse, left, right) using keyboard inputs from Serial Monitor.

The Arduino reads the input character and based on that it controls the motor direction.

## Components Used
- Arduino UNO
- Motor Driver (L298 / similar)
- DC Motors
- Jumper wires
- Power supply

## Working Principle
- Serial communication is used to send commands.
- Arduino reads the command using `Serial.read()`.
- Based on the input:
  - 'W' → Forward
  - 'S' → Reverse
  - 'A' → Left
  - 'D' → Right
- If no valid input → motors stop.

## Code Logic (Simple Explanation)
- First, pins are set as OUTPUT.
- In loop, Arduino checks for incoming serial data.
- Based on command, corresponding pins are turned HIGH/LOW.
- This controls motor direction using driver.

## Approach
Initially I tried to understand how motor driver works.
Then I mapped each direction to pin logic.
After that I implemented serial input control.

I tested different inputs and verified movement.

## Challenges Faced
- Initially confusion in motor direction wiring
- Serial input was not working properly at first

## Improvements (Future)
- Can add speed control using PWM
- Can add obstacle detection

## Conclusion
This project helped me understand how to control motors using Arduino and how serial communication works in real-time control systems.
