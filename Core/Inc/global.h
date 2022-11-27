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

#define INIT        1
#define AUTO_RED    2
#define AUTO_GREEN  3
#define AUTO_YELLOW 4


extern int status_a;
extern int status_b;
extern int value_a;
extern int value_b;

#endif /* INC_GLOBAL_H_ */
