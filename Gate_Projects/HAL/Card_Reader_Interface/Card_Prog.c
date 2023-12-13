/*
 * Card_Prog.c
 *
 *  Created on: Dec 6, 2023
 *      Author: joe
 */
#include "D:\AVR\Gate_Projects\LIB/STD_TYPES.h"
#include "D:\AVR\Gate_Projects\LIB/BIT_MATH.h"
#include "D:\AVR\Gate_Projects\MCAL/DIO_DRIVE/DIO_Interface.h"
#include "Card_Interface.h"
#include "Card_Priv.h"
#include "Card_Config.h"




void Card_VidInit()
{
	Pin_vidInitializeDIO(CARD1_CONFIG_PORT,CARD1_CONFIG_PIN,CARD1_CONFIG_DIRECTION,LOW);
	Pin_vidInitializeDIO(CARD2_CONFIG_PORT,CARD2_CONFIG_PIN,CARD2_CONFIG_DIRECTION,LOW);
}
card_state Card1_GetRead()
{
	if(Pin_u8GetValDIO(CARD1_CONFIG_PORT,CARD1_CONFIG_PIN) == CARD_PASS )
	{
		return CARD_PASS ;
	}
	else
	{
		return CARD_NORMAL ;
	}

}
card_state Card2_GetRead()
{
	if(Pin_u8GetValDIO(CARD2_CONFIG_PORT,CARD2_CONFIG_PIN) == CARD_PASS )
	{
		return CARD_PASS ;
	}
	else
	{
		return CARD_NORMAL ;
	}

}
