/*
 * MINI_TIMER_INT0.C
 *
 *  Created on: Sep 18, 2023
 *      Author: Ahmedmohamed
 */
#include "MINI_TIMER.h"
void INT0_INIT(void)
{
	DDRD&=~(1<<PD2);
	PORTD|=(1<<PD2);//INTERNAL PULL UP FOT INT0
	GICR|=(1<<INT0);//INTERRUPT 0
	MCUCR|=(1<<ISC01);//FALLING
}
ISR(INT0_vect)
{
	//RESET STOP WATCH
	SEC1=0;
	SEC2=0;
	MIN1=0;
	MIN2=0;
	HOUR1=0;
	HOUR2=0;
}

