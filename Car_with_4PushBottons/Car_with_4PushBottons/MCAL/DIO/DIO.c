/*
 * DIO.c
 *
 * Created: 20/02/2024 23:08:58
 *  Author: PC
 */ 
#include <avr/io.h>
#include "DIO/DIO.h"
#include "BIT_MATH.h"
void DIO_PinMode(uint8 Pin_No ,uint8 Mode ){
	uint8 port=Pin_No/10;
	uint8 Pin=Pin_No%10;
	switch(port){
		
		case 0:
		if(Mode==1)
		{
			SET_BIT(DDRB,Pin);
		}
		else if(Mode==0){
			CLR_BIT(DDRB,Pin);
		}
		
		break;
		case 1:
		if(Mode==1)
		{
			SET_BIT(DDRC,Pin);
		}
		else if(Mode==0){
			CLR_BIT(DDRC,Pin);
		}
		
		break;
		case 2:
		if(Mode==1)
		{
			SET_BIT(DDRD,Pin);
		}
		else if(Mode==0){
			CLR_BIT(DDRD,Pin);
		}
		break;
	
}
}

void DIO_digitalWrite(uint8 Pin_No ,uint8 State){
	
	uint8 port=Pin_No/10;
	uint8 Pin=Pin_No%10;
	switch(port){
		
		
		case 0:
		if(State==1)
		{
			SET_BIT(PORTB,Pin);
		}
		else if(State==0){
			CLR_BIT(PORTB,Pin);
		}
		
		break;
		case 1:
		if(State==1)
		{
			SET_BIT(PORTC,Pin);
		}
		else if(State==0){
			CLR_BIT(PORTC,Pin);
		}
		
		break;
		case 2:
		if(State==1)
		{
			SET_BIT(PORTD,Pin);
		}
		else if(State==0){
			CLR_BIT(PORTD,Pin);
			
		}
		break;
	}

}

uint8 DIO_digitalRead(uint8 Pin_No ){
	
	uint8 Pin=Pin_No/10;
	uint8 Pin_number=Pin_No%10;
	switch(Pin){
		
		case 0:
		
		return GET_BIT(PINB,Pin_number);
		
		break;
		case 1:
		return GET_BIT(PINC,Pin_number);
		break;
		case 2:
		return GET_BIT(PIND,Pin_number);
		break;
	}


}