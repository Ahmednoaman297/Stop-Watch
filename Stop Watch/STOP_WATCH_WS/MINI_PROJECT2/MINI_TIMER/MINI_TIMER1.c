/*
 * mini_timer.c
 *
 *  Created on: Sep 18, 2023
 *      Author: Ahmedmohamed
 */
#include "MINI_TIMER.h"
unsigned char SEC1=0,SEC2=0,MIN1=0,MIN2=0,HOUR1=0,HOUR2=0;//because there is two 7 segments for seconds,minutes and hours  and be glopal 3shan a8yr kol shwya fel values bta3tha
void TIMER1_CTC(void)
{
	TCCR1A=(1<<FOC1A);//NORMAL MODE(NON PWM)
	TCCR1B=(1<<WGM12)|(1<<CS10)|(1<<CS11);//CTC mode& PRESCALE=64
	TIMSK|=(1<<OCIE1A);//output compare
	TCNT1=0;
	OCR1A = 15624;//from equation 1 second = (Value * Prescaler) / F_CPU   top equals 15624
	//1 seconds to be incremented every 1 second F=1/T   Foc1=1HZ
}
ISR(TIMER1_COMPA_vect)
{
	 if (SEC1 == 9)
	    {
		 SEC1 = 0;
	        SEC2++;
	    }
	    else
	    {
	    	SEC1++;
	    }
	 if(SEC2==6)
	 {
		 MIN1++;
		 SEC2=0;
	 }
	 if(MIN1==10)
	 {
		 MIN2++;
		 MIN1=0;
	 }
	 if(MIN2==6)
	 {

		 MIN2=0;
		 HOUR1++;
	 }
	 if(HOUR1==10)
	 {

		 HOUR1=0;
		 HOUR2++;
	 }
	 if(HOUR2==10)
	 {
		 HOUR2=0;//it wil be 7 digit
	 }
}


