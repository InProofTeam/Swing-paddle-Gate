/*
 * IR_Priv.h
 *
 *  Created on: Dec 2, 2023
 *      Author: youse
 */

#ifndef HAL_IR_SENSOR_INTERFACE_IR_PRIV_H_
#define HAL_IR_SENSOR_INTERFACE_IR_PRIV_H_
/* Section : Data Type  Declarations */
typedef struct{

	u8 port : 3 ;
	u8 pin : 3 ;
    u8 state : 1 ;
    u8 direction : 2 ;
}IR;
typedef enum IR_names{
	IR1 = 0 ,
	IR2 ,
	IR3 ,
	IR4 ,
	IR5 ,
	IR6 ,
}IR_names;

#endif /* HAL_IR_SENSOR_INTERFACE_IR_PRIV_H_ */
