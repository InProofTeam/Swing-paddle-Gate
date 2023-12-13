/*
 * BUZZER_Header.h
 *
 *  Created on: Dec 1, 2023
 *      Author: youse
 */

#ifndef HAL_BUZZER_INTERFACE_BUZZER_HEADER_H_
#define HAL_BUZZER_INTERFACE_BUZZER_HEADER_H_


typedef enum BUZZER_state{
	BUZZER_ACTIVE = 1 ,
	BUZZER_NONACTIVE = 0,
}BUZZER_state;



/**************************************************/
/**********************Public Functions************/
/**************************************************/
void BUZZER_VidIntialize(void);
void BUZZER1_VidActivate(void);
void BUZZER1_VidDeactivate(void);
#endif /* HAL_BUZZER_INTERFACE_BUZZER_HEADER_H_ */
