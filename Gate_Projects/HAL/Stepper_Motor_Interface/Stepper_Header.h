/*
 * Stepper_Header.h
 *
 *  Created on: Nov 26, 2023
 *      Author: youse
 */

#ifndef HAL_STEPPER_MOTOR_INTERFACE_STEPPER_HEADER_H_
#define HAL_STEPPER_MOTOR_INTERFACE_STEPPER_HEADER_H_

typedef enum{
	clockwise =0 ,
       anti_clockwise
}stepper_direction;

typedef struct{
	u8 port : 3 ;
	u8 num_pins : 3 ;
}STEPPER;
/**************************************************/
/**********************Public Functions************/
/**************************************************/
void Stepper_vidIntialize(const STEPPER * _STEPPER );
void Stepper_vidFullDrive (stepper_direction direction); // This function will drive the motor in full drive mode
void Stepper_vidHalfDrive (stepper_direction direction); // This function will drive the motor in full drive mode
void  Stepper_vidWaveDrive (stepper_direction direction); // This function will drive the motor in full drive mode



#endif /* HAL_STEPPER_MOTOR_INTERFACE_STEPPER_HEADER_H_ */
