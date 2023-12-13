/*
 * RGB_Priv.h
 *
 *  Created on: Dec 2, 2023
 *      Author: youse
 */

#ifndef HAL_RGB_LED_INTERFACE_RGB_PRIV_H_
#define HAL_RGB_LED_INTERFACE_RGB_PRIV_H_

/* Section : Data Type  Declarations */
typedef enum{
	RGB1 = 0 ,
	RGB2,
}RGB_name;
typedef enum{
	RED = 0 ,
	GREEN,
    BLUE
}RGB_color;
typedef enum{
	CATHODE= 0,
	ANODE
}comman_type;

typedef struct{
	u8 port : 3 ;
	u8 pin_Green : 3 ;
	u8 pin_Red : 3 ;
	u8 pin_Blue : 3 ;
	comman_type comman_Types : 1 ;
	RGB_color first_State : 2;
}RGB;

#endif /* HAL_RGB_LED_INTERFACE_RGB_PRIV_H_ */
