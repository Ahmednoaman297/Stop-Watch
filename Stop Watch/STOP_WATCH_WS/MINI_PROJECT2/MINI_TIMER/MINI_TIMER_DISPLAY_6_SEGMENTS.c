/*
 * mini_timer_DISPLAY_6_SEGMENTS.c
 *
 *  Created on: Sep 18, 2023
 *      Author: Ahmedmohamed
 */
#include "MINI_TIMER.h"
void DISPLAY_6_SEGMENTS(void)
{// Display '0' on the first seven-segment display
	PORTA = (1 << PA0) | (PORTA & 0xC0);
	// Reset PORTC for data output
	PORTC = (PORTC & 0xF0) | (SEC1 & 0x0F);
	// Delay to stabilize the display
	_delay_ms(2);
	// Display '1' on the second seven-segment display
	PORTA = (1 << PA1) | (PORTA & 0xC0);
	// Reset PORTC for data output
	PORTC = (PORTC & 0xF0) | (SEC2 & 0x0F);
	// Delay to stabilize the display
	_delay_ms(2);
	// Display '2' on the third seven-segment display
	PORTA = (1 << PA2) | (PORTA & 0xC0);
	// Reset PORTC for data output
	PORTC = (PORTC & 0xF0) | (MIN1 & 0x0F);
	// Delay to stabilize the display
	_delay_ms(2);
	// Display '3' on the fourth seven-segment display
	PORTA = (1 << PA3) | (PORTA & 0xC0);
	// Reset PORTC for data output
	PORTC = (PORTC & 0xF0) | (MIN2 & 0x0F);
	// Delay to stabilize the display
	_delay_ms(2);
	// Display '4' on the fifth seven-segment display
	PORTA = (1 << PA4) | (PORTA & 0xC0);
	// Reset PORTC for data output
	PORTC = (PORTC & 0xF0) | (HOUR1 & 0x0F);
	// Delay to stabilize the display
	_delay_ms(2);
	// Display '5' on the sixth seven-segment display
	PORTA = (1 << PA5) | (PORTA & 0xC0);
	// Reset PORTC for data output
	PORTC = (PORTC & 0xF0) | (HOUR2 & 0x0F);
	_delay_ms(2);

}


