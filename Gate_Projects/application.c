/*
 * File:   application.c
 * Author: yousef
 *
 * Created on November 23, 2023, 12:22 PM
 */



#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "HAL/IR_Sensor_Interface/IR_Header.h"
#include "HAL/BUZZER_Interface/BUZZER_Header.h"
#include "HAL/RGB_LED_Interface/RGB_Header.h"
#include "application_interface.h"
#include "application_priv.h"



void APP_vidInit(void)
{
	/********RGB Init *******/
	RGB_VidIntialize();
	/********IR Init *******/
	IR_VidIntialize();
	/********BUZZER Init *******/
	BUZZER_VidIntialize();
	/********LED_Matrix Init *******/

	/********Stepper_Motor Init *******/
}

