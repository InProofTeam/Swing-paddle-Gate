/*
 * PWM_Prog.c
 *
 *  Created on: Dec 1, 2023
 *      Author: youse
 */

#include "D:\AVR\Timer_Drive\LIB/STD_TYPES.h"
#include "D:\AVR\Timer_Drive\LIB/BIT_MATH.h"
#include "PWM_Interface.h"
#include "PWM_Priv.h"
#include "PWM_Config.h"




void PWM_vidSelectPrescaler(u8 prescaler)
{
	// Select the Prescaler
	switch(prescaler)
	{
	case 0 : SET_BIT(TCCR0,CS00);
	         CLR_BIT(TCCR0,CS01);
	         CLR_BIT(TCCR0,CS02);
	         break;
	case 1 : SET_BIT(TCCR0,CS01);
		     CLR_BIT(TCCR0,CS00);
		     CLR_BIT(TCCR0,CS02);
		     break;
	case 2 : SET_BIT(TCCR0,CS00);
	         SET_BIT(TCCR0,CS01);
		     CLR_BIT(TCCR0,CS02);
		     break;
	case 3 : CLR_BIT(TCCR0,CS00);
	         CLR_BIT(TCCR0,CS01);
	         SET_BIT(TCCR0,CS02);
		     break;
	case 4 : SET_BIT(TCCR0,CS00);
		     CLR_BIT(TCCR0,CS01);
		     SET_BIT(TCCR0,CS02);
			 break;
	case 5 : CLR_BIT(TCCR0,CS00);
	         SET_BIT(TCCR0,CS01);
	         SET_BIT(TCCR0,CS02);
		     break;
	case 6 : SET_BIT(TCCR0,CS00);
	         SET_BIT(TCCR0,CS01);
		     SET_BIT(TCCR0,CS02);
			 break;

	}
}
void PWM_VidInit()
{
	  //Select PWM Mode
      SET_BIT(TCCR0,WGM00);
	  SET_BIT(TCCR0,WGM01);
	  //define Mode of PWM
	  switch(PWM_MODE)
	   {
 	    case NORMAL :CLR_BIT(TCCR0,COM00);
 	                 CLR_BIT(TCCR0,COM01);
	                 break;
 	    case NON_INVERTER :CLR_BIT(TCCR0,COM00);
	                       SET_BIT(TCCR0,COM01);
	                       break;
 	    case INVERTER :SET_BIT(TCCR0,COM00);
 	           	       SET_BIT(TCCR0,COM01);
 	           	       break;
	   }
	  //to select the prescaler
	  PWM_vidSelectPrescaler(TIMER_PRS_MODE);

}
void PWM_VidStopPWM()
{
	CLR_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS02);
}
void  PWM_VidSetVal(u8 u8Duty)
{
	OCR0 = u8Duty ;
}

