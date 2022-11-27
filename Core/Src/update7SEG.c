/*
 * update7SEG.c
 *
 *  Created on: 26 thg 11, 2022
 *      Author: trinh huy
 */


#include "update7SEG.h"
#include "led_display.h"
#include "main.h"
#include "global.h"

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1 , 2 , 3 , 4};


//void run_clock (){
//	second++;
//	if (second >= 60) {
//		second = 0;
//		minute++;
//	}
//	if (minute >= 60) {
//		minute = 0;
//		hour++;
//	}
//	if (hour >= 24){
//		hour = 0;
//	}
//}

void updateClockBuffer(){
	led_buffer[1] = value_a % 10 ; // phep mod de lay hang don vi
	led_buffer[0] = value_b / 10 ; // phep chia de lay so hang chuc

//	led_buffer[3] = minute % 10;
//	led_buffer[2] = minute /10 ;
}


void update7SEG (int index){
	switch (index){
	case 0:{
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		display7SEG(led_buffer[index]);
		break;
		}
	case 1:{
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		display7SEG(led_buffer[index]);
		break;
		}
	case 2:{
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		display7SEG(led_buffer[index]);
		break;
		}
	case 3: {
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
		display7SEG(led_buffer[index]);
		break;
		}
	default :
		break;
	}
}
