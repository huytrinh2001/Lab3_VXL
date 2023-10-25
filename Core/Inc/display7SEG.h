/*
 * display7SEG.h
 *
 *  Created on: Dec 2, 2022
 *      Author: trinh huy
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_


extern const int MAX_LED ;
extern int index_led ;
extern int led_buffer[4] ;

void run_clock();
void update7SEG (int);
void updateClockBuffer();


#endif /* INC_DISPLAY7SEG_H_ */
