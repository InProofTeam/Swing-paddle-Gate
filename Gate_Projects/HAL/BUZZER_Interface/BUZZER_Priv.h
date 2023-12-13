/*
 * BUZZER_Priv.h
 *
 *  Created on: Dec 2, 2023
 *      Author: youse
 */

#ifndef HAL_BUZZER_INTERFACE_BUZZER_PRIV_H_
#define HAL_BUZZER_INTERFACE_BUZZER_PRIV_H_

typedef enum BUZZER_name{
	BUZZER1 = 0,

}BUZZER_name;
typedef struct{

	u8 port : 3 ;
	u8 pin : 3 ;
	BUZZER_state state : 1 ;
}BUZZER;

#endif /* HAL_BUZZER_INTERFACE_BUZZER_PRIV_H_ */
