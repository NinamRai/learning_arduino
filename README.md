# Arduino 4-Bit Binary Counter

LED-based binary counter that counts from 0 to 15, demonstrating digital logic fundamentals.

## Demo

![Circuit Photo](circuit.jpg)

## What It Does

Uses 4 LEDs to represent a 4-bit binary number, counting from 0000 (0) to 1111 (15) with 1-second intervals.

## How It Works

Each LED represents a bit position:
- LED 1 (Pin 2): Bit 0 (value: 1)
- LED 2 (Pin 3): Bit 1 (value: 2)  
- LED 3 (Pin 4): Bit 2 (value: 4)
- LED 4 (Pin 5): Bit 3 (value: 8)

The `setLEDs()` function controls all 4 LEDs simultaneously to display each binary number.

## Components

- Arduino Uno
- 4 LEDs (any color)
- 4× 220Ω resistors
- Breadboard
- Jumper wires

## Circuit Connections

- Pin 2 → LED 1 → 220Ω resistor → GND
- Pin 3 → LED 2 → 220Ω resistor → GND
- Pin 4 → LED 3 → 220Ω resistor → GND
- Pin 5 → LED 4 → 220Ω resistor → GND

## What I Learned

- Binary number system and bit representation
- Creating reusable functions in Arduino
- Controlling multiple digital outputs
- Code organization and documentation

## Code Structure

- `setup()`: Configures pins 2-5 as outputs
- `setLEDs()`: Reusable function to set all LED states
- `loop()`: Cycles through 16 binary combinations (0-15)

## Future Improvements

- Add button to pause/resume counting
- Variable speed control with potentiometer
- Count in reverse or different patterns
- Add 7-segment display showing decimal value

## Date
February 2026
