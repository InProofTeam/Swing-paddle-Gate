/*
 * DIO_Priv.h
 *
 *  Created on: Nov 26, 2023
 *      Author: youse
 */

#ifndef MCAL_DIO_DRIVE_DIO_PRIV_H_
#define MCAL_DIO_DRIVE_DIO_PRIV_H_

#define PORTA_REG  *((volatile u8 *) 0x3B)
#define PORTB_REG  *((volatile u8 *) 0x38)
#define PORTC_REG  *((volatile u8 *) 0x35)
#define PORTD_REG  *((volatile u8 *) 0x32)

#define DDRA_REG  *((volatile u8 *) 0x3A)
#define DDRB_REG  *((volatile u8 *) 0x37)
#define DDRC_REG  *((volatile u8 *) 0x34)
#define DDRD_REG  *((volatile u8 *) 0x31)

#define PINA_REG  *((volatile u8 *) 0x39)
#define PINB_REG  *((volatile u8 *) 0x36)
#define PINC_REG  *((volatile u8 *) 0x33)
#define PIND_REG  *((volatile u8 *) 0x30)

/******************************************************/
#define ENABLE     0
#define DISABLE     1

#define PORTA_NUM_PINS 5
#define PORTB_NUM_PINS 7
#define PORTC_NUM_PINS 7
#define PORTD_NUM_PINS 7
#define PORTE_NUM_PINS 2
/*******************Port Direction Mode ********************/
#define INPUT_MODE       0
#define OUTPUT_MODE      1
#define PULLUP_MODE      2
#define SELECT_MODE      3
/*******************Pins Mode ********************/
#define PINS_HIGH        1
#define PINS_LOW         0


#endif /* MCAL_DIO_DRIVE_DIO_PRIV_H_ */
