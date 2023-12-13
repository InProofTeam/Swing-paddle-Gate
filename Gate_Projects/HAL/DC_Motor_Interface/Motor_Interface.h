/*
 * Motor_Interface.h
 *
 *  Created on: Dec 6, 2023
 *      Author: joe
 */

#ifndef HAL_DC_MOTOR_INTERFACE_MOTOR_INTERFACE_H_
#define HAL_DC_MOTOR_INTERFACE_MOTOR_INTERFACE_H_


void Motor_vidInit(void);
void Motor_vidGoRight();
void Motor_vidGoLeft();
void Motor_vidSetSpeed(u8 speed);

#endif /* HAL_DC_MOTOR_INTERFACE_MOTOR_INTERFACE_H_ */
