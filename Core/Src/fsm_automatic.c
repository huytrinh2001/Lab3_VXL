/*
 * fsm_automatic.c
 *
 *  Created on: Nov 23, 2022
 *      Author: trinh huy
 */

#include "fsm_automatic.h"
#include "global.h"

void fsm_automatic_run_a(){
	switch (status_a) {
	case INIT:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
		status_a = AUTO_RED;
		counter_1st = red;
		setTimer1(red * 100);


		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);

		if (timer1_flag == 1){
			status_a =AUTO_GREEN;
			counter_1st = green;
			setTimer1(green * 100);

		}


		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);

		if (timer1_flag == 1){
			status_a =AUTO_YELLOW;
			counter_1st = yellow;
			setTimer1(yellow * 100);

		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_RESET);

		if (timer1_flag == 1){
			status_a =AUTO_RED;
			counter_1st = red ;
			setTimer1(red * 100);

		}
		break;
	default:
		break;
	}
}

void fsm_automatic_run_b(){
	switch (status_b) {
		case INIT:
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
			status_b = AUTO_GREEN;
			counter_2nd = green;
			setTimer2(green * 100);


			break;
		case AUTO_RED:
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);

			if (timer2_flag == 1){
				status_b =AUTO_GREEN;
				counter_2nd = green;
				setTimer2(green * 100);

			}


			break;
		case AUTO_GREEN:
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);

			if (timer2_flag == 1){
				status_b =AUTO_YELLOW;
				counter_2nd = yellow;
				setTimer2(yellow * 100);

			}
			break;
		case AUTO_YELLOW:
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);

			if (timer2_flag == 1){
				status_b =AUTO_RED;
				counter_2nd = red;
				setTimer2(red * 100);

			}
			break;
		default:
			break;
		}
}



