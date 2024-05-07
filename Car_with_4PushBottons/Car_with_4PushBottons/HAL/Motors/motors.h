/*
 * motors.h
 *
 * Created: 5/6/2024 12:45:23 AM
 *  Author: Mahmoud Osman
 */ 


#ifndef MOTORS_H_
#define MOTORS_H_
#include "DIO/DIO.h"
#include "STD_TYPES.h"
#include "Motors_Config.h"


void motors_int(void);

void Move_Forward(void);
void Move_Right(void);
void Move_Left(void);
void Move_Back(void);
void Stop(void);



#endif /* MOTORS_H_ */