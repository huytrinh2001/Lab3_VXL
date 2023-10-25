/*
 * global.h
 *
 *  Created on: Nov 23, 2022
 *      Author: trinh huy
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "update7SEG.h"
#include "fsm_automatic.h"
#include "led_display.h"

#define INIT        1
#define AUTO_RED    2
#define AUTO_GREEN  3
#define AUTO_YELLOW 4

extern int red ;
extern int green ;
extern int yellow ;

extern int counter_1st;
extern int counter_2nd;

extern int status_a;
extern int status_b;
extern int value_1;
extern int value_2;
extern int value_mode;


#endif /* INC_GLOBAL_H_ */
