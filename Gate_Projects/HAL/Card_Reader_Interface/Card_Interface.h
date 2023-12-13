/*
 * Card_Interface.h
 *
 *  Created on: Dec 6, 2023
 *      Author: joe
 */

#ifndef HAL_CARD_READER_INTERFACE_CARD_INTERFACE_H_
#define HAL_CARD_READER_INTERFACE_CARD_INTERFACE_H_

typedef enum card_state
{
     CARD_PASS = 0 ,
	 CARD_NORMAL = 1 ,
}card_state;

void Card_VidInit();
card_state Card1_GetRead();
card_state Card2_GetRead();

#endif /* HAL_CARD_READER_INTERFACE_CARD_INTERFACE_H_ */
