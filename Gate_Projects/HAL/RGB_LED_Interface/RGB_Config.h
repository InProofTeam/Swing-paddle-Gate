/*
 * RGB_Config.h
 *
 *  Created on: Dec 2, 2023
 *      Author: youse
 */

#ifndef HAL_RGB_LED_INTERFACE_RGB_CONFIG_H_
#define HAL_RGB_LED_INTERFACE_RGB_CONFIG_H_

#define  N_RGB       2
/* Description : RGB load configuration  : */
/* range       :  RGB     --> PORTB , from pin0 to pin5 , OUTPUT , (ANODE or CATHODE ) , (BLUE or RED or GREEN )
  */

#define  RGB1_CONFIG_PORT   DIO_PORTC
#define  RGB1_CONFIG_GREEN  DIO_PIN0
#define  RGB1_CONFIG_RED    DIO_PIN1
#define  RGB1_CONFIG_BLUE   DIO_PIN2
#define  RGB1_INIT_STATE    RED

#define  RGB2_CONFIG_PORT   DIO_PORTC
#define  RGB2_CONFIG_GREEN  DIO_PIN3
#define  RGB2_CONFIG_RED    DIO_PIN4
#define  RGB2_CONFIG_BLUE   DIO_PIN5
#define  RGB2_INIT_STATE    RED

#define  RGB_COMMAN_TYPE        CATHODE



#endif /* HAL_RGB_LED_INTERFACE_RGB_CONFIG_H_ */
