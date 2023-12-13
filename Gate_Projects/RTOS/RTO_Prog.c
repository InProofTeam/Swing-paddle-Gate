/*
 * RTO_Prog.c
 *
 *  Created on: Nov 28, 2023
 *      Author: youse
 */


/* Libraries */
#include "D:\AVR\Gate_Projects\LIB/STD_TYPES.h"
#include "D:\AVR\Gate_Projects\LIB/BIT_MATH.h"

/* MCAL */
#include "D:\AVR\Gate_Projects/MCAL/Timer_Driver/Timer_Interface.h"

/* HAL */

/* OS Layer */
#include "RTO_Interface.h"
#include "RTO_Priv.h"
#include "RTO_Config.h"

Task_TCB  TASKS[RTO_NUMBER_OF_TASKS];


void RTO_voidStartScheduler(void)
{
	Timer_VidInt();
}

void RTO_voidInit(void)
{
	Timer_set_callback(&RTO_voidScheduler);
}

void RTO_voidCreateTask(u8 Copy_u8Priority, u16 Copy_u16Periodicity , u16 Copy_u16Firstdelay , void(*Copy_ptrtofun)(void) )
{
	TASKS[Copy_u8Priority].u16Periodicity = Copy_u16Periodicity;
	TASKS[Copy_u8Priority].u16FirstDelay  = Copy_u16Firstdelay;
	TASKS[Copy_u8Priority].pfunTask           = Copy_ptrtofun;

}

static void RTO_voidScheduler(void)
{
	/* for loop to check on every TCB */
	u8 counter;
	for(counter = 0; counter < RTO_NUMBER_OF_TASKS ; counter++)
	{
		if(TASKS[counter].u16FirstDelay == 0)
		{
			//Call function
			TASKS[counter].pfunTask();
			//Periodicity => firstdelay
			TASKS[counter].u16FirstDelay = TASKS[counter].u16Periodicity - 1;
		}
		else
		{
			TASKS[counter].u16FirstDelay--;
		}
	}

}
