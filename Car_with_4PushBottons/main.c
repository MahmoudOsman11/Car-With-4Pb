/*
 * Car_with_4PushBottons.c
 *
 * Created: 5/6/2024 12:33:10 AM
 * Author : Mahmoud Osman
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include "DIO/DIO.h"
#include "avr/delay.h"
#define LED_Time 300
uint8 Forward_PB,Right_PB, Left_PB, Back_PB, Stop_PB;
uint16 Led1Counter=0,Led2Counter=0,Led3Counter=0;
int main(void)
{
	//Pb mode to be INPUT
	DIO_PinMode(PC_0,INPUT);
	DIO_PinMode(PC_1,INPUT);
	DIO_PinMode(PC_2,INPUT);
	DIO_PinMode(PC_3,INPUT);
	DIO_PinMode(PC_4,INPUT);
	
	//LED mode to be OUTPUT
	DIO_PinMode(PD_0,OUTPUT);  //LED1
	DIO_PinMode(PD_1,OUTPUT);  //LED2
	DIO_PinMode(PD_2,OUTPUT);  //LED3
    //Motors Initialization
	motors_int();
    while (1) 
    {
		Forward_PB=DIO_digitalRead(PC_0);
		Right_PB=DIO_digitalRead(PC_1);
		Left_PB=DIO_digitalRead(PC_2);
		Back_PB=DIO_digitalRead(PC_3);
		Stop_PB=DIO_digitalRead(PC_4);
		
		if(Forward_PB==HIGH){
			DIO_digitalWrite(PD_0,HIGH);
			DIO_digitalWrite(PD_1,LOW);
			DIO_digitalWrite(PD_2,LOW);
			Led1Counter=LED_Time;
			
			Move_Forward();
		}
		
		else if(Right_PB==HIGH){
			DIO_digitalWrite(PD_1,HIGH);
			DIO_digitalWrite(PD_0,LOW);
			DIO_digitalWrite(PD_2,LOW);
			Led2Counter=LED_Time;
			
			Move_Right();
			
		}
		else if(Left_PB==HIGH){
			DIO_digitalWrite(PD_2,HIGH);
			DIO_digitalWrite(PD_0,LOW);
			DIO_digitalWrite(PD_1,LOW);
			Led3Counter=LED_Time;
			
			Move_Left();
			
		}
		else if(Back_PB==HIGH){
			DIO_digitalWrite(PD_1,HIGH);
			DIO_digitalWrite(PD_2,HIGH);
			DIO_digitalWrite(PD_0,LOW);
			Led2Counter=LED_Time;
			Led3Counter=LED_Time;
			Move_Back();
			
		}
	else if(Stop_PB==HIGH){
		DIO_digitalWrite(PD_0,LOW);
		DIO_digitalWrite(PD_1,LOW);
		DIO_digitalWrite(PD_2,LOW);
		Stop();
		
	}
	
	if(Led1Counter>0) Led1Counter--;
	if(Led2Counter>0) Led2Counter--;
	if(Led3Counter>0) Led3Counter--;
	
	if(Led1Counter==0){
		DIO_digitalWrite(PD_0,LOW);
	}
	if(Led2Counter==0){
		DIO_digitalWrite(PD_1,LOW);
	}
	if(Led3Counter==0){
		DIO_digitalWrite(PD_2,LOW);
	}
    
	_delay_ms(1);
	}
}

