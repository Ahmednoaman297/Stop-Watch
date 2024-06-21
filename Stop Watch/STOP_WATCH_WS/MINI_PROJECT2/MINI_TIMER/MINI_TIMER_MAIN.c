/*
 * minitimer.c
 *
 *  Created on: Sep 15, 2023
 *      Author: Ahmedmohamed
 */
#include "MINI_TIMER.h"
int main(void)
{
	SREG|=(1<<7);//enable I-BIT
	DISPLAY_MY_SEGMENTS();
	DISPLAY_6_SEGMENTS();
	INT0_INIT(); //with priority in table  0 >1>2>timer;
	INT1_INIT();
	INT2_INIT();
	TIMER1_CTC();
	while(1)
	{
		DISPLAY_6_SEGMENTS();//to make seven segment always display
	}
}

