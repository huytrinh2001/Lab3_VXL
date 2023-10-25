/*
 * button.h
 *
 *  Created on: Nov 23, 2022
 *      Author: trinh huy
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();


void getKeyInput1(void);
void getKeyInput2(void);
void getKeyInput3(void);
void subKeyProcess(void);

#endif /* INC_BUTTON_H_ */
