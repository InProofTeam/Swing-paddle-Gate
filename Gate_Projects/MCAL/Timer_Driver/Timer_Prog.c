/*
 * Timer_Prog.c
 *
 *  Created on: Oct 20, 2023
 *      Author: yousef
 */
#include "D:\AVR\Timer_Driv\LIB/BIT_MATH.h"
#include "D:\AVR\Timer_Driv/LIB/STD_TYPES.h"
#include "Timer_Interface.h"
#include "Timer_Priv.h"
#include "Timer_confg.h"


//Init global pointer to function

static void(*Gptrtofunc)(void);

void __vector_7(void)        __attribute__((signal));

void Timer_VidInt()
{

	//CTC MODE , Enable INT of compare match for channel A
		TCCR1A = 0x00;
	//Output Compare Register 1 A – OCR1AH and OCR1AL
		OCR1A = 1000;
	//Timer/Counter1 – TCNT1H and TCNT1L
		TCNT1 = 0;
	// Bit 4 – OCIE1A: Timer/Counter1, Output Compare A Match Interrupt Enable
		SET_BIT(TIMSK,OCIE1A) ;

		//TCCR1B = 0b00001010;
	// set the prescaler
	switch(TIMER_PRS_SELECT)
	{
	case NO_CLK : CLR_BIT(TCCR1B,CS10);
		          CLR_BIT(TCCR1B,CS11);
		          CLR_BIT(TCCR1B,CS12);
		          break;
	case NO_PRS : SET_BIT(TCCR1B,CS10);
	              CLR_BIT(TCCR1B,CS11);
	              CLR_BIT(TCCR1B,CS12);
	              break;

	case CLK_8  : CLR_BIT(TCCR1B,CS10);
		          SET_BIT(TCCR1B,CS11);
		          CLR_BIT(TCCR1B,CS12);
		          break;

	case CLK_64 : SET_BIT(TCCR1B,CS10);
	              SET_BIT(TCCR1B,CS11);
		          CLR_BIT(TCCR1B,CS12);
		          break;

	case CLK_256 : CLR_BIT(TCCR1B,CS10);
	               CLR_BIT(TCCR1B,CS11);
	               SET_BIT(TCCR1B,CS12);
	               break;

	case CLK_1024 : SET_BIT(TCCR1B,CS10);
		            CLR_BIT(TCCR1B,CS11);
		            SET_BIT(TCCR1B,CS12);
		            break;
	case CLK_EXT_FALLING : CLR_BIT(TCCR1B,CS10);
	                       SET_BIT(TCCR1B,CS11);
	                       SET_BIT(TCCR1B,CS12);
	                       break;
	case CLK_EXT_RISING : SET_BIT(TCCR1B,CS10);
	                      SET_BIT(TCCR1B,CS11);
		                  SET_BIT(TCCR1B,CS12);
		                  break;

	}
    // Waveform Generation Mode :these bits control the counting sequence of the counter, the source for maximum (TOP) counter value
	//CTC Mode Waveform Generation
	CLR_BIT(TCCR1B,WGM13);
	SET_BIT(TCCR1B,WGM12);

	// Enable global interrupt
	    SET_BIT(SREG, I) ;

}
void Timer_set_callback( void(*localPfunc)(void))
{
	//set global pointer to function
	Gptrtofunc = localPfunc;
}



void __vector_7(void)
{
	Gptrtofunc();
}
