/*
 * MINI_TIMER_INT2.c
 *
 *  Created on: Sep 18, 2023
 *      Author: Ahmedmohamed
 */
#include "MINI_TIMER.h"
void INT2_INIT(void)
{
	DDRD&=~(1<<PB4);//PB
	PORTB|=(1<<PB2);//INTERNAL PULL UP FOR INT2
	GICR|=(1<<INT2); //INTERRUPT 2
	MCUCR&=~(1<<ISC2);//FALLING
}
ISR(INT2_vect)
{
	//RESUME STOP WATCH
	TCCR1A=(1<<FOC1A);
	TCCR1B=(1<<WGM12)|(1<<CS10)|(1<<CS11);
}


