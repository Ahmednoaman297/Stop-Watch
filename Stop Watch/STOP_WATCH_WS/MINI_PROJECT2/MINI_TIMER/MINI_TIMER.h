/*
 * MINI_TIMER.h
 *
 *  Created on: Sep 18, 2023
 *      Author: Ahmedmohamed
 */

#ifndef MINI_TIMER_H_
#define MINI_TIMER_H_
#include <avr/io.h>
#include <avr/interrupt.h>
#include "util/delay.h"
extern unsigned char SEC1,SEC2,MIN1,MIN2,HOUR1,HOUR2;
void DISPLAY_MY_SEGMENTS(void);
void DISPLAY_6_SEGMENTS(void);
void TIMER1_CTC(void);
void INT0_INIT(void);
void INT1_INIT(void);
void INT2_INIT(void);


#endif /* MINI_TIMER_H_ */
