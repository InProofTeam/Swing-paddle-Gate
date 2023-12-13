/*
 * IR_Header.h
 *
 *  Created on: Nov 26, 2023
 *      Author: youse
 */

#ifndef HAL_IR_SENSOR_INTERFACE_IR_HEADER_H_
#define HAL_IR_SENSOR_INTERFACE_IR_HEADER_H_



typedef enum IR_state{
	IR_NONACTIVE = 0,
	IR_ACTIVE = 1 ,
}IR_state;


/**************************************************/
/**********************Public Functions************/
/**************************************************/
void IR_VidIntialize(void);
u8 * IRS_u8GetRead(void);
IR_state IR1_u8GetRead(void);
IR_state IR2_u8GetRead(void);
IR_state IR3_u8GetRead(void);
IR_state IR4_u8GetRead(void);
IR_state IR5_u8GetRead(void);
IR_state IR6_u8GetRead(void);


#endif /* HAL_IR_SENSOR_INTERFACE_IR_HEADER_H_ */
