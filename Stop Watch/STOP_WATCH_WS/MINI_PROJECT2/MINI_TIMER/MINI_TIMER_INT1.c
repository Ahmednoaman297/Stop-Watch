/*
 * MINI_TIMER_INT1.C
 *
 *  Created on: Sep 18, 2023
 *      Author: Ahmedmohamed
 */
#include "MINI_TIMER.h"
void INT1_INIT(void)
{
	DDRD&=~(1<<PD3);
	PORTD&=~(1<<PD3);//EXTERNAL PULL DOWN
	GICR|=(1<<INT1);//INTERRUPT 1
	MCUCR|=(1<<ISC10)|(1<<ISC11);//RISING EDGE
}
ISR(INT1_vect)
{
	//pause STOP WATCH
	TCCR1A=0;
	TCCR1B=0;
}

