/*
 * software_timer.h
 *
 *  Created on: Nov 23, 2022
 *      Author: trinh huy
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
void setTimer1(int duration);
void setTimer2(int duration);
void cleanTimer1();
void cleanTimer2();
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
