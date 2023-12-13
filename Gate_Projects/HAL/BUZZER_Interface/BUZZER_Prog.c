/*
 * BUZZER_Prog.c
 *
 *  Created on: Dec 1, 2023
 *      Author: youse
 */


#include "D:\AVR\Gate_Projects\LIB/STD_TYPES.h"
#include "D:\AVR\Gate_Projects\LIB/BIT_MATH.h"
#include "D:\AVR\Gate_Projects\MCAL/DIO_DRIVE/DIO_Interface.h"
#include "BUZZER_Header.h"
#include "BUZZER_Config.h"
#include "BUZZER_Priv.h"

BUZZER BUZZERs[N_BUZZER] = {{.port = BUZZER_PORT, .pin = DIO_PIN6, .state = BUZZER_NONACTIVE,},}; //buzzer1

void BUZZER_VidIntialize(void)
{
	for(u8 b_count = 0 ; b_count < N_BUZZER ; b_count++ )
	{
		Pin_vidInitializeDIO(BUZZERs[b_count].port,BUZZERs[b_count].pin,OUTPUT,BUZZERs[b_count].state);
	}

}
void BUZZER1_VidActivate(void)
{
	Pin_vidSetValDIO(BUZZERs[BUZZER1].port,BUZZERs[BUZZER1].pin,BUZZER_ACTIVE);
}
void BUZZER1_VidDeactivate(void)
{
	Pin_vidSetValDIO(BUZZERs[BUZZER1].port,BUZZERs[BUZZER1].pin,BUZZER_NONACTIVE);
}
