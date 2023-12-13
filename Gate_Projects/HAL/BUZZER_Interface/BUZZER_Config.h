/*
 * BUZZER_Config.h
 *
 *  Created on: Dec 1, 2023
 *      Author: youse
 */

#ifndef HAL_BUZZER_INTERFACE_BUZZER_CONFIG_H_
#define HAL_BUZZER_INTERFACE_BUZZER_CONFIG_H_


/* Description : Buzzer load configuration  : */
/* range       :  Buzzer  --> PORTB , pin6 , OUTPUT
  */

#define  N_BUZZER               1
#define  BUZZER_PORT            DIO_PORTC
#define  BUZZER_PIN             DIO_PIN6
#define  BUZZER_INIT_STATE      BUZZER_NONACTIVE
#endif /* HAL_BUZZER_INTERFACE_BUZZER_CONFIG_H_ */
