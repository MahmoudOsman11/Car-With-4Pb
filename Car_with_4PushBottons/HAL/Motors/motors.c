/*
 * motors.c
 *
 * Created: 5/6/2024 12:45:03 AM
 *  Author: Mahmoud Osman
 */ 

#include "motors.h"


void motors_int(void)
{
	DIO_PinMode(MotorA1,OUTPUT);
	DIO_PinMode(MotorA2,OUTPUT);
	DIO_PinMode(MotorB1,OUTPUT);
	DIO_PinMode(MotorB2,OUTPUT);
}


void Move_Forward(void){
	DIO_digitalWrite(MotorA1,HIGH);
	DIO_digitalWrite(MotorA2,LOW);
	DIO_digitalWrite(MotorB1,HIGH);
	DIO_digitalWrite(MotorB2,LOW);
}

void Move_Right(void){
	DIO_digitalWrite(MotorA1,HIGH);
	DIO_digitalWrite(MotorA2,LOW);
	DIO_digitalWrite(MotorB1,LOW);
	DIO_digitalWrite(MotorB2,LOW);
	
}
void Move_Left(void){
	DIO_digitalWrite(MotorA1,LOW);
	DIO_digitalWrite(MotorA2,LOW);
	DIO_digitalWrite(MotorB1,HIGH);
	DIO_digitalWrite(MotorB2,LOW);
	
	
}
void Move_Back(void)
{
	DIO_digitalWrite(MotorA1,LOW);
	DIO_digitalWrite(MotorA2,HIGH);
	DIO_digitalWrite(MotorB1,LOW);
	DIO_digitalWrite(MotorB2,HIGH);
	
}
void Stop(void)
{
	DIO_digitalWrite(MotorA1,LOW);
	DIO_digitalWrite(MotorA2,LOW);
	DIO_digitalWrite(MotorB1,LOW);
	DIO_digitalWrite(MotorB2,LOW);
	
}