/*
 * button.c
 *
 *  Created on: Nov 23, 2022
 *      Author: trinh huy
 */

#include "button.h"

int button1_flag = 0 ;
int button2_flag = 0 ;
int button3_flag = 0 ;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;

int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;


int TimeOutForKeyPress =  200;
void subKeyProcess1(){
	button1_flag = 1 ;
	button2_flag = 1 ;
	button3_flag = 1 ;
}
void subKeyProcess2(){
	button2_flag = 1 ;
}
void subKeyProcess3(){
	button3_flag = 1 ;
}

int isButton1Pressed (){
	if (button1_flag == 1){
		button1_flag = 0;
		return 1 ;
	}
	return 0 ;
}

int isButton2Pressed (){
	if (button2_flag == 1){
		button2_flag = 0;
		return 1 ;
	}
	return 0 ;
}

int isButton3Pressed (){
	if (button3_flag == 1){
		button3_flag = 0;
		return 1 ;
	}
	return 0 ;
}

void getKeyInput1(){
  KeyReg0 = KeyReg1;
  KeyReg1 = KeyReg2;
  KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
	  if (KeyReg3 != KeyReg2){
		  KeyReg3 = KeyReg2;
		  if (KeyReg2 == PRESSED_STATE){
			  subKeyProcess1();
			  TimeOutForKeyPress = 200;
		  }
	  }else{
		  TimeOutForKeyPress --;
		  if (TimeOutForKeyPress == 0){
			  KeyReg3 = NORMAL_STATE;
		  }
	  }
  }
}

//int KeyReg4 = NORMAL_STATE;
//int KeyReg5 = NORMAL_STATE;
//int KeyReg6 = NORMAL_STATE;
//int KeyReg7 = NORMAL_STATE;

void getKeyInput2(){
  KeyReg4 = KeyReg5;
  KeyReg5 = KeyReg6;
  KeyReg6 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
  if ((KeyReg5 == KeyReg4) && (KeyReg5 == KeyReg6)){
	  if (KeyReg7 != KeyReg6){
		  KeyReg7 = KeyReg6;
		  if (KeyReg6 == PRESSED_STATE){
			  subKeyProcess2();
			  TimeOutForKeyPress = 200;
		  }
	  }else{
		  TimeOutForKeyPress --;
		  if (TimeOutForKeyPress == 0){
			  KeyReg7 = NORMAL_STATE;
		  }
	  }
  }
}

//int KeyReg8 = NORMAL_STATE;
//int KeyReg9 = NORMAL_STATE;
//int KeyReg10 = NORMAL_STATE;
//int KeyReg11 = NORMAL_STATE;
void getKeyInput3(){
  KeyReg8 = KeyReg9;
  KeyReg9 = KeyReg10;
  KeyReg10 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
  if ((KeyReg9 == KeyReg8) && (KeyReg9 == KeyReg10)){
	  if (KeyReg11 != KeyReg10){
		  KeyReg11 = KeyReg10;
		  if (KeyReg10 == PRESSED_STATE){
			  subKeyProcess3();
			  TimeOutForKeyPress = 200;
		  }
	  }else{
		  TimeOutForKeyPress --;
		  if (TimeOutForKeyPress == 0){
			  KeyReg11 = NORMAL_STATE;
		  }
	  }
  }
}

