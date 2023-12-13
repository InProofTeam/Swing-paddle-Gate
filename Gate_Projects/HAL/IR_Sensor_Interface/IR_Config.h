/*
 * IR_Config.h
 *
 *  Created on: Dec 1, 2023
 *      Author: youse
 */

#ifndef HAL_IR_SENSOR_INTERFACE_IR_CONFIG_H_
#define HAL_IR_SENSOR_INTERFACE_IR_CONFIG_H_

#define  N_SENSOR    6
/* Description : sensor load configuration  : */
/* range       :  sensor  --> PORTA , from pin0 to pin5 ,INPUT or INPUT_PULLUP
  */
/***********SENSOR1 CONFIG*********/
#define  SENSOR1_CONFIG_PORT         DIO_PORTA
#define  SENSOR1_CONFIG_PIN          DIO_PIN0
#define  SENSOR1_CONFIG_DIRECTION    INPUT_PULLUP

/***********SENSOR2 CONFIG*********/
#define  SENSOR2_CONFIG_PORT         DIO_PORTA
#define  SENSOR2_CONFIG_PIN          DIO_PIN1
#define  SENSOR2_CONFIG_DIRECTION    INPUT_PULLUP

/***********SENSOR3 CONFIG*********/
#define  SENSOR3_CONFIG_PORT         DIO_PORTA
#define  SENSOR3_CONFIG_PIN          DIO_PIN2
#define  SENSOR3_CONFIG_DIRECTION    INPUT_PULLUP

/***********SENSOR4 CONFIG*********/
#define  SENSOR4_CONFIG_PORT         DIO_PORTA
#define  SENSOR4_CONFIG_PIN          DIO_PIN3
#define  SENSOR4_CONFIG_DIRECTION    INPUT_PULLUP

/***********SENSOR5 CONFIG*********/
#define  SENSOR5_CONFIG_PORT         DIO_PORTA
#define  SENSOR5_CONFIG_PIN          DIO_PIN4
#define  SENSOR5_CONFIG_DIRECTION    INPUT_PULLUP

/***********SENSOR6 CONFIG*********/
#define  SENSOR6_CONFIG_PORT         DIO_PORTA
#define  SENSOR6_CONFIG_PIN          DIO_PIN5
#define  SENSOR6_CONFIG_DIRECTION    INPUT_PULLUP



#endif /* HAL_IR_SENSOR_INTERFACE_IR_CONFIG_H_ */
