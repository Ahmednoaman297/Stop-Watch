/*
 * mini_timer_DISPLAY_MY_SEGMENTS.c
 *
 *  Created on: Sep 18, 2023
 *      Author: Ahmedmohamed
 */
#include "MINI_TIMER.h"
void DISPLAY_MY_SEGMENTS(void)
{
	DDRA|=0x3F;//output
	DDRC|=0x0F;//output
	PORTC&=0xF0;//connected to PORTC and zero to be displayed at first
}

