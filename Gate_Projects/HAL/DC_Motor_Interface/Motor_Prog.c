/*
 * Motor_Prog.c
 *
 *  Created on: Dec 6, 2023
 *      Author: joe
 */
/********LIB*********/
#include "D:\AVR\Gate_Projects\LIB/STD_TYPES.h"
#include "D:\AVR\Gate_Projects\LIB/BIT_MATH.h"
/********************/
/********MCAL********/
#include "D:\AVR\Gate_Projects\MCAL/DIO_DRIVE/DIO_Interface.h"
#include "D:\AVR\Gate_Projects\MCAL/PWM_DRIVE/PWM_Interface.h"
/********************/
/********HAL*********/
#include "Motor_Interface.h"
#include "Motor_Config.h"
#include "Motor_Priv.h"
/********************/
void Motor_vidInit(void)
{
	/******Init PWM *****/
	PWM_VidInit();
	/******Init Motor *****/
	Pin_vidInitializeDIO(MOTOR_CONFIG_PORT,MOTOR_CONFIG_PIN_R,OUTPUT,LOW);
	Pin_vidInitializeDIO(MOTOR_CONFIG_PORT,MOTOR_CONFIG_PIN_L,OUTPUT,LOW);
	Pin_vidSetDirDIO(MOTOR_CONFIG_PORT,MOTOR_CONFIG_PIN_ENABLE,OUTPUT);

}
void Motor_vidGoRight()
{
  Pin_vidSetValDIO(MOTOR_CONFIG_PORT,MOTOR_CONFIG_PIN_R,HIGH);
  Pin_vidSetValDIO(MOTOR_CONFIG_PORT,MOTOR_CONFIG_PIN_L,LOW);
}
void Motor_vidGoLeft()
{
  Pin_vidSetValDIO(MOTOR_CONFIG_PORT,MOTOR_CONFIG_PIN_L,HIGH);
  Pin_vidSetValDIO(MOTOR_CONFIG_PORT,MOTOR_CONFIG_PIN_R,LOW);
}
void Motor_vidSetSpeed(u8 speed)
{
	if(speed != 0 )
	{
		  PWM_VidSetVal(speed) ;
	}
	else
	{
		PWM_VidSetVal(speed) ;
	}

}
