/*
 * IncFile1.h
 *
 * Created: 20/02/2024 23:07:56
 *  Author: PC
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "STD_TYPES.h"
#define PB_0 00
#define PB_1 01
#define PB_2 02
#define PB_3 03
#define PB_4 04
#define PB_5 05
#define PB_6 06
#define PB_7 07

#define PC_0 10
#define PC_1 11
#define PC_2 12
#define PC_3 13
#define PC_4 14
#define PC_5 15
#define PC_6 16
#define PC_7 17

#define PD_0 20
#define PD_1 21
#define PD_2 22
#define PD_3 23
#define PD_4 24
#define PD_5 25
#define PD_6 26
#define PD_7 27



#define OUTPUT 1
#define INPUT 0
#define HIGH 1
#define LOW 0

void DIO_PinMode(uint8 Pin_No ,uint8 Mode );
void DIO_digitalWrite(uint8 Pin_No ,uint8 State);
uint8 DIO_digitalRead(uint8 Pin_No );

#endif /* DIO_ */