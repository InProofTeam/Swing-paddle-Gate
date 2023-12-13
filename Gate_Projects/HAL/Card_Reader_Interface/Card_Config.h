/*
 * Card_Config.h
 *
 *  Created on: Dec 6, 2023
 *      Author: joe
 */

#ifndef HAL_CARD_READER_INTERFACE_CARD_CONFIG_H_
#define HAL_CARD_READER_INTERFACE_CARD_CONFIG_H_

#define  N_CARD    1
/* Description : Card reader configuration  : */
/* range       :  Card  --> PORTA , from pin0  ,INPUT or INPUT_PULLUP
  */

/************CARD1 CONFIG *********************/
#define  CARD1_CONFIG_PORT            DIO_PORTA
#define  CARD1_CONFIG_PIN             DIO_PIN6
#define  CARD1_CONFIG_DIRECTION       INPUT_PULLUP

/************CARD2 CONFIG *********************/
#define  CARD2_CONFIG_PORT            DIO_PORTA
#define  CARD2_CONFIG_PIN             DIO_PIN7
#define  CARD2_CONFIG_DIRECTION       INPUT_PULLUP

#endif /* HAL_CARD_READER_INTERFACE_CARD_CONFIG_H_ */
