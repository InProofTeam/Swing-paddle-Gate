/*
 * Timer_Priv.h
 *
 *  Created on: Oct 20, 2023
 *      Author: youse
 */

#ifndef MCAL_TIMER_DRIVER_TIMER_PRIV_H_
#define MCAL_TIMER_DRIVER_TIMER_PRIV_H_

/************Private Macros *********/
/*Timer Registers Definitions*/
#define SREG         (*((volatile u8 *)(0x5F)))
#define TCCR0        (*((volatile u8 *)(0x53)))
#define TCNT0        (*((volatile u8 *)(0x52)))
#define OCR0         (*((volatile u8 *)(0x5C)))
#define TIMSK        (*((volatile u8 *)(0x59)))
#define TIFR         (*((volatile u8 *)(0x58)))
//#define DDRB        *((volatile u8*)0x37)


#define TCCR1A        (*((volatile u8 *)(0x4F)))
#define TCCR1B        (*((volatile u8 *)(0x4E)))
#define TCNT1H        (*((volatile u8 *)(0x4D)))
#define TCNT1L        (*((volatile u8 *)(0x4C)))
#define TCNT1         (*((volatile u16 *)(0x4C)))
#define OCR1AH        (*((volatile u8 *)(0x4B)))
#define OCR1AL        (*((volatile u8 *)(0x4A)))
#define OCR1A         (*((volatile u16 *)(0x4A)))

#define OCR1BH        (*((volatile u8 *)(0x49)))
#define OCR1BL        (*((volatile u8 *)(0x48)))
#define OCR1B         (*((volatile u16 *)(0x48)))

#define ICR1H         (*((volatile u8 *)(0x47)))
#define ICR1L         (*((volatile u8 *)(0x46)))

#define ICR1          (*((volatile u16 *)(0x46)))

//Timer/Counter Interrupt Mask Register – TIMSK
#define TICIE1 5
#define OCIE1A 4
#define OCIE1B 3
#define TOIE1  2


// Timer/Counter1 Control Register A – TCCR1A BINS
#define COM1A1   7
#define COM1A0   6
#define COM1B1   5
#define COM1B0   4
#define FOC1A    3
#define FOC1B    2
#define WGM11    1
#define WGM10    0

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
#define TOV2    6
#define ICF1    5
#define OCF1A   4
#define OCF1B   3
#define TOV1    2
#define OCF0    1
#define TOV0    0
// SREG Bits
#define I    7
//Timer/Counter1 Control Register B – TCCR1B BINS
#define ICNC1   7
#define ICES1   6
#define WGM13   4
#define WGM12   3
#define CS12    2
#define CS11    1
#define CS10    0

#endif /* MCAL_TIMER_DRIVER_TIMER_PRIV_H_ */
