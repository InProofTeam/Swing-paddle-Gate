/*
 * application_config.h
 *
 *  Created on: Nov 28, 2023
 *      Author: youse
 */

#ifndef APPLICATION_CONFIG_H_
#define APPLICATION_CONFIG_H_

/******************************************************************************/
/********************** configuration for gate Project ************************/
/******************************************************************************/

/* Description : load configuration */

/* Description : load type : */
/* range       :  sensor  --> PORTA , from pin0 to pin5 , INPUT
 *                RGP     --> PORTB , from pin0 to pin5 , OUTPUT
 *                Matrix  --> PORTD , from pin0 to pin5 , OUTPUT
 *                Buzzer  --> PORTB , pin6 , OUTPUT
 *                Motor   --> PORTC , from pin0 to pin7 , ----- */

/* Description : number of loads  : */
/* range       :  sensor  --> 6 sensor
 *                RGB     --> 2 RGP
 *                Matrix  --> 2 Matrix
 *                Buzzer  --> 1 Buzzer
 *                Motor   --> 2 Motor  */
#define  N_SENSOR    6
#define  N_RGB       2
#define  N_MATRIX    2
#define  N_BUZZER    1
#define  N_MOTOR     2


/* Description : sensor load configuration  : */
/* range       :  sensor  --> PORTA , from pin0 to pin5 ,INPUT or INPUT_PULLUP
  */
#define  SENSOR_PORT    PORTA
#define  SENSOR_PINS_RANGE_S       0
#define  SENSOR_PINS_RANGE_E       5

#define  SENSOR_DIRECTION       INPUT_PULLUP
/* Description : RGB load configuration  : */
/* range       :  RGB     --> PORTB , from pin0 to pin5 , OUTPUT , (ANODE or CATHODE ) , (BLUE or RED or GREEN )
  */
#define  RGB_PORT    PORTB
#define  RGB_PINS_RANGE_S       0
#define  RGB_PINS_RANGE_E       5
#define  RGB_COMMAN_TYPE        CATHODE
#define  RGB_INIT_STATE         BLUE
/* Description : Matrix load configuration  : */
/* range       :  Matrix  --> PORTD , from pin0 to pin5 , OUTPUT
  */
#define  MATRIX_PORT    PORTD
#define  MATRIX_PINS_RANGE_S       0
#define  MATRIX_PINS_RANGE_E       5

/* Description : Buzzer load configuration  : */
/* range       :  Buzzer  --> PORTB , pin6 , OUTPUT
  */
#define  BUZZER_PORT    PORTB
#define  BUZZER_PIN       6

/* Description : Motor load configuration  : */
/* range       :  Motor   --> PORTC , from pin0 to pin7 , -----
  */
#define  MOTOR_PORT    PORTC
#define  MOTOR_PINS_RANGE_S       0
#define  MOTOR_PINS_RANGE_E       7

#endif /* APPLICATION_CONFIG_H_ */
