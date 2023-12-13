/*
 * Motor_Config.h
 *
 *  Created on: Dec 6, 2023
 *      Author: joe
 */

#ifndef HAL_DC_MOTOR_INTERFACE_MOTOR_CONFIG_H_
#define HAL_DC_MOTOR_INTERFACE_MOTOR_CONFIG_H_




/***********note that the enable pin in oc0 (PWM) Mode --> PORTB PIN3d***************************/

/********MOTOR CONFIG *****************/

#define MOTOR_CONFIG_PORT          DIO_PORTB
#define MOTOR_CONFIG_PIN_L         DIO_PIN1
#define MOTOR_CONFIG_PIN_R    	   DIO_PIN0
#define MOTOR_CONFIG_PIN_ENABLE    DIO_PIN3
#endif /* HAL_DC_MOTOR_INTERFACE_MOTOR_CONFIG_H_ */
