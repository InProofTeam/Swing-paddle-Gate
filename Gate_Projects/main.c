/*
/*
 * File:   application.c
 * Author: yousef
 *
 * Created on November 23, 2023, 12:22 PM
 */


/********LIB*********/
#include "LIB/STD_TYPES.h"
#include"LIB/BIT_MATH.h"
/********************/
/********MCAL********/
#include "MCAL/DIO_DRIVE/DIO_Interface.h"
#include "MCAL/Interrupt/INT_interface.h"
/********************/
/********HAL*********/
#include "HAL/IR_Sensor_Interface/IR_Header.h"
#include "HAL/RGB_LED_Interface/RGB_Header.h"
#include "HAL/BUZZER_Interface/BUZZER_Header.h"
#include "HAL/DC_Motor_Interface/Motor_Interface.h"
#include "application_interface.h"
#include "RTOS/RTO_Interface.h"
/********************/
#include<avr/interrupt.h>

#define  F_CPU 8000000
#include "avr/delay.h"

int main(void) {
	/*Pin_vidSetDirDIO(DIO_PORTC,DIO_PIN7,OUTPUT); // INT2
	Pin_vidSetDirDIO(DIO_PORTD,DIO_PIN2,INPUT_PULLUP); // INT0
	Pin_vidSetDirDIO(DIO_PORTD,DIO_PIN3,INPUT_PULLUP); // INT1
	Pin_vidSetDirDIO(DIO_PORTB,DIO_PIN2,INPUT_PULLUP); // INT2*/

	//EXINT_vidConfig();
	Motor_vidInit();
	Pin_vidSetValDIO(DIO_PORTC,DIO_PIN7,HIGH);
	while(1)
	{

			Motor_vidGoLeft();
			Motor_vidSetSpeed(150);

		_delay_ms(2000);

			Motor_vidGoRight();
			Motor_vidSetSpeed(150);

		_delay_ms(2000);

	}



	/* APP_vidInit();
	 RTO_voidInit();
	 RTO_voidCreateTask(0,50,0,&RGB1_VidSetBLUE);
	 RTO_voidCreateTask(1,200,0,&RGB1_VidSetGREEN);
	 RTO_voidCreateTask(2,50,0,&RGB2_VidSetRED);
	 RTO_voidCreateTask(3,200,0,&RGB2_VidSetGREEN);
	 RTO_voidCreateTask(4,300,0,&BUZZER1_VidActivate);
	 RTO_voidCreateTask(5,400,0,&BUZZER1_VidDeactivate);
	 // start scheduler
	 RTO_voidStartScheduler();
	 while(1);*/




	 	 /*Pin_vidSetDirDIO(PORTA,PIN0,OUTPUT);
	 	 Pin_vidSetDirDIO(PORTA,PIN1,OUTPUT);
	 	 Pin_vidSetDirDIO(PORTA,PIN2,OUTPUT);*/

	/*Pin_vidSetValDIO(PORTA,PIN1,LOW); //ENA
    while(1)
    {
    	for(u8 i= 0 ; i< 100 ; i ++)
    	{


    	Pin_vidSetValDIO(PORTA,PIN0,HIGH); //Dir
    	for(u16 c = 0 ;c <200 ;c++)
    	{
    		Pin_vidSetValDIO(PORTA,PIN2,HIGH); //plus
    		_delay_us(2.5);
    		Pin_vidSetValDIO(PORTA,PIN2,LOW); //plus
    		_delay_us(2.5);
    	}
    	_delay_ms(100);
    	Pin_vidSetValDIO(PORTA,PIN0,LOW); //Dir
    	for(u16 c = 0 ;c <200 ;c++)
    	{
    		Pin_vidSetValDIO(PORTA,PIN2,HIGH); //plus
    		_delay_us(2.5);
    		Pin_vidSetValDIO(PORTA,PIN2,LOW); //plus
    		_delay_us(2.5);
    	}
    	_delay_ms(100);
    	}
    	_delay_ms(5000);
    }
*/
    return 0;
}


