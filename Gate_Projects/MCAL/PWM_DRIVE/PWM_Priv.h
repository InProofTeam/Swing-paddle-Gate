/*
 * PWM_Priv.h
 *
 *  Created on: Dec 1, 2023
 *      Author: youse
 */

#ifndef MCAL_PWM_DRIVE_PWM_PRIV_H_
#define MCAL_PWM_DRIVE_PWM_PRIV_H_

#define  TCCR0     *((volatile  u8 *)0x53)
#define  TCNT1     *((volatile  u8 *)0x52)
#define  TIMSK     *((volatile  u8 *)0x59)
#define  TIFR      *((volatile  u8 *)0x58)
#define  OCR0      *((volatile  u8 *)0x5C)
#define  SREG      *((volatile  u8 *)0x5F)

// Timer/Counter Control Register – TCCR0 BINS
#define FOC0    7
#define WGM00   6
#define COM01   5
#define COM00   4
#define WGM01   3
#define CS02    2
#define CS01    1
#define CS00    0

// Timer/Counter Interrupt Mask Register – TIMSK  BINS
#define OCIE2    7
#define TOIE2   6
#define TICIE1   5
#define OCIE1A   4
#define OCIE1B   3
#define TOIE1    2
#define OCIE0    1
#define TOIE0    0
// Timer/Counter Interrupt Flag Register – TIFR  BINS
#define OCF2    7
#define TOV2   6
#define ICF1   5
#define OCF1A   4
#define OCF1B   3
#define TOV1    2
#define OCF0    1
#define TOV0    0
// SREG Bits
#define I    7

//Config Timer TYPE  Help :

#define ENABLE     0
#define DISABLE     1

#endif /* MCAL_PWM_DRIVE_PWM_PRIV_H_ */
