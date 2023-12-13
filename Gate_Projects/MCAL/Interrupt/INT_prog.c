/*
 * INT_prog.c
 *
 *  Created on: Nov 1, 2022
 *      Author: youse
 */
#include "D:\AVR\Timer_Drive\LIB/STD_TYPES.h"
#include "D:\AVR\Timer_Drive\LIB/BIT_MATH.h"
#include "INT_interface.h"
#include "INT_priv.h"
#include "INT_confg.h"



void EXINT_vidConfig(void)
{
/******** External Interrupt 0 *******/
#if EXINT0_STATE == ENABLE

	switch(EXINT0_MODE)
	{
	case LOW_LEVEL :CLR_BIT(MCUCR , ISC00);
					CLR_BIT(MCUCR , ISC01);
					break;
	case ANY_DIGIT :SET_BIT(MCUCR , ISC00);
					CLR_BIT(MCUCR , ISC01);
					break;
	case FALLING_EDGE :CLR_BIT(MCUCR , ISC00);
					   SET_BIT(MCUCR , ISC01);
					   break;
	case RISING_EDGE :SET_BIT(MCUCR , ISC01);
					  SET_BIT(MCUCR , ISC00);
					break;
	}
	SET_BIT(GICR,INT0);
#endif
/*************************************/
/******** External Interrupt 1 *******/
#if EXINT1_STATE == ENABLE

	switch(EXINT1_MODE)
	{
	case LOW_LEVEL :CLR_BIT(MCUCR , ISC10);
					CLR_BIT(MCUCR , ISC11);
					break;
	case ANY_DIGIT :SET_BIT(MCUCR , ISC10);
					CLR_BIT(MCUCR , ISC11);
					break;
	case FALLING_EDGE :CLR_BIT(MCUCR , ISC10);
					   SET_BIT(MCUCR , ISC11);
					   break;
	case RISING_EDGE :SET_BIT(MCUCR , ISC10);
					  SET_BIT(MCUCR , ISC11);
					break;
	}
   SET_BIT(GICR,INT1);
#endif
/*************************************/
/******** External Interrupt 2 *******/
#if EXINT2_STATE == ENABLE
	switch(EXINT1_MODE)
	{
	case FALLING_EDGE :CLR_BIT(MCUCSR , ISC2);
					   break;
	case RISING_EDGE :SET_BIT(MCUCSR , ISC2);
					break;
	}
    SET_BIT(GICR,INT2);
#endif
/*************************************/

	// Enable global interrupt
    SET_BIT(SREG, I) ;


}

