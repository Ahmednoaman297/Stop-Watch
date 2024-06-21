# Stop Watch System Using ATmega32 Microcontroller

## Overview

This project implements a Stop Watch system using ATmega32 microcontroller. The Stop Watch counts time using Timer1 in CTC mode and displays the elapsed time on six Common Anode 7-segment displays. The displays are multiplexed using a 7447 decoder and NPN transistors controlled by MCU pins. External interrupts are used for resetting, pausing, and resuming the Stop Watch.

## Components Used

- ATmega32 Microcontroller running at 1 MHz
- Timer1 configured in CTC (Clear Timer on Compare Match) mode
- Six Common Anode 7-segment displays
- 7447 BCD to 7-segment decoder
- NPN BJT transistors for multiplexing 7-segment displays
- Push buttons for external interrupts INT0, INT1, and INT2
- Pull-up and pull-down resistors as necessary

## Project Details

### Timer1 Configuration

- Timer1 is configured in CTC mode to generate an interrupt at a fixed interval (e.g., 1 millisecond) for accurate time counting.

### Multiplexed 7-Segment Displays

- Six Common Anode 7-segment displays are multiplexed using a single 7447 decoder.
- Each display is enabled/disabled using NPN transistors controlled by individual MCU pins (connected to PORTA).

### External Interrupts

- **INT0 (Reset)**: Configured with falling edge trigger. Resets the Stop Watch time.
- **INT1 (Pause)**: Configured with rising edge trigger. Pauses the Stop Watch time.
- **INT2 (Resume)**: Configured with falling edge trigger. Resumes the Stop Watch time.

### Port Configuration

- **PORTC**: First 4 pins connected to the 7447 decoder for segment selection.
- **PORTA**: First 6 pins used for enabling/disabling each 7-segment display through NPN transistors.

