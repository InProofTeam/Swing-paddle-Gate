/*
 * INT_priv.h
 *
 *  Created on: Nov 1, 2022
 *      Author: youse
 */

#ifndef MCAL_INT_PRIV_H_
#define MCAL_INT_PRIV_H_



// Interrupt register
#define MCUCR   *((volatile u8 *) 0x55)
#define MCUCSR  *((volatile u8 *) 0x54)
#define GICR    *((volatile u8 *) 0x5B)
#define GIFR    *((volatile u8 *) 0x5A)
#define SREG    *((volatile u8 *) 0x5F)
// MCUCR Bits
#define ISC00   0
#define ISC01   1
#define ISC10   2
#define ISC11   3
// MCUCSR Bits
#define ISC2    6
// GICR Bits
#define INT1   7
#define INT0   6
#define INT2   5
// GIFR Bits
#define INTF1   7
#define INTF0   6
#define INTF2   5
// SREG Bits
#define I    7


//SENSE_CONTROL TYPE : LOW_LEVEL , ANY_DIGIT , FALLING_EDGE , RISING_EDGE

#define FALLING_EDGE  0
#define RISING_EDGE   1
#define ANY_DIGIT     2
#define LOW_LEVEL     3
//SENSE_CONTROL TYPE : LOW_LEVEL , ANY_DIGIT , FALLING_EDGE , RISING_EDGE

#define ENABLE      0
#define DISABLE     1



#endif /* MCAL_INT_PRIV_H_ */
