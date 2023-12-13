/*
 * PWM_Interface.h
 *
 *  Created on: Dec 1, 2023
 *      Author: youse
 */

#ifndef MCAL_PWM_DRIVE_PWM_INTERFACE_H_
#define MCAL_PWM_DRIVE_PWM_INTERFACE_H_
void PWM_VidInit(void) ;
void  PWM_VidSetVal(u8 u8Duty) ;
void Timer_vidSelectPrescaler(void);

#define PWM    1


//PWM Mode
#define NORMAL        0
#define INVERTER      1
#define NON_INVERTER  2



#endif /* MCAL_PWM_DRIVE_PWM_INTERFACE_H_ */
