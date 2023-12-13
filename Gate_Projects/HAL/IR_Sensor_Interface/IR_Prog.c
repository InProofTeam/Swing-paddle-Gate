/*
 * IR_Prog.c
 *
 *  Created on: Nov 26, 2023
 *      Author: youse
 */

#include "D:\AVR\Gate_Projects\LIB/STD_TYPES.h"
#include "D:\AVR\Gate_Projects\LIB/BIT_MATH.h"
#include "D:\AVR\Gate_Projects\MCAL/DIO_DRIVE/DIO_Interface.h"
#include "IR_Header.h"
#include "IR_Config.h"
#include "IR_Priv.h"

IR IRs[N_SENSOR] = {
           { .port = SENSOR1_CONFIG_PORT,.pin = SENSOR1_CONFIG_PIN ,.state = IR_ACTIVE ,.direction = SENSOR1_CONFIG_DIRECTION,},   //sensor1
		   { .port = SENSOR2_CONFIG_PIN ,.pin = SENSOR2_CONFIG_PIN ,.state = IR_ACTIVE ,.direction = SENSOR2_CONFIG_DIRECTION,},   //sensor2
           { .port = SENSOR3_CONFIG_PIN ,.pin = SENSOR3_CONFIG_PIN ,.state = IR_ACTIVE ,.direction = SENSOR3_CONFIG_DIRECTION,},   //sensor3
		   { .port = SENSOR4_CONFIG_PIN ,.pin = SENSOR4_CONFIG_PIN ,.state = IR_ACTIVE ,.direction = SENSOR4_CONFIG_DIRECTION,},   //sensor4
		   { .port = SENSOR5_CONFIG_PIN ,.pin = SENSOR5_CONFIG_PIN ,.state = IR_ACTIVE ,.direction = SENSOR5_CONFIG_DIRECTION,},   //sensor5
		   { .port = SENSOR6_CONFIG_PIN ,.pin = SENSOR6_CONFIG_PIN ,.state = IR_ACTIVE ,.direction = SENSOR6_CONFIG_DIRECTION,},}; //sensor6


void IR_VidIntialize()
{
	for(u8 i_count = 0 ;i_count<N_SENSOR;i_count++ )
	{
		Pin_vidInitializeDIO(IRs[i_count].port,IRs[i_count].pin,IRs[i_count].direction,IRs[i_count].state);
	}

}

u8 * IRS_u8GetRead()
{
	static u8 result [N_SENSOR] = {0} ;
	for(u8 count = 0 ; count <N_SENSOR;count ++ )
	{
		result[count] = Pin_u8GetValDIO(IRs[count].port,IRs[count].pin) ;
	}
	return result ;
}

IR_state IR1_u8GetRead()
{
	return Pin_u8GetValDIO(IRs[IR1].port,IRs[IR1].pin) ;
}
IR_state IR2_u8GetRead()
{
	return Pin_u8GetValDIO(IRs[IR2].port,IRs[IR2].pin) ;
}
IR_state IR3_u8GetRead()
{
	return Pin_u8GetValDIO(IRs[IR3].port,IRs[IR3].pin) ;
}
IR_state IR4_u8GetRead()
{
	return Pin_u8GetValDIO(IRs[IR4].port,IRs[IR4].pin) ;
}
IR_state IR5_u8GetRead()
{
	return Pin_u8GetValDIO(IRs[IR5].port,IRs[IR5].pin) ;
}
IR_state IR6_u8GetRead()
{
	return Pin_u8GetValDIO(IRs[IR6].port,IRs[IR6].pin) ;
}
