/*
 * PWM_Config.h
 *
 *  Created on: Dec 1, 2023
 *      Author: youse
 */

#ifndef MCAL_PWM_DRIVE_PWM_CONFIG_H_
#define MCAL_PWM_DRIVE_PWM_CONFIG_H_

/******************************************************************************/
/********************** configuration for Timer ************************/
/******************************************************************************/




/* Description : PWM Mode configuration */
/* range       : NORMAL : Normal port operation, OC0 disconnected
 * 				 NON_INVERTER : Clear OC0 on compare match, set OC0 at TOP
 * 				 INVERTER : Set OC0 on compare match, clear OC0 at TOP
 * 				 */

#define PWM_MODE  NON_INVERTER


/* Description : Timer  Prescaler configuration */
/* range       : (No_prescaling --> 0 ,
 *                 clk/8     --> 1 ,
 *                 clk/64    --> 2 ,
 *                 clk/256   --> 3
 *                 clk/1024  --> 4
 * External clock source on T0 pin. Clock on falling edge --> 5
 * External clock source on T0 pin. Clock on rising edge --> 6,*/
#define  TIMER_PRS_MODE  1

#endif /* MCAL_PWM_DRIVE_PWM_CONFIG_H_ */
