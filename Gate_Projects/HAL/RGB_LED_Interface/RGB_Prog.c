/*
 * RGP_Prog.c
 *
 *  Created on: Nov 26, 2023
 *      Author: youse
 */

#include "D:\AVR\Gate_Projects\LIB/STD_TYPES.h"
#include "D:\AVR\Gate_Projects\LIB/BIT_MATH.h"
#include "D:\AVR\Gate_Projects\MCAL/DIO_DRIVE/DIO_Interface.h"
#include "RGB_Header.h"
#include "RGB_Priv.h"
#include "RGB_Config.h"
RGB RGBs[N_RGB] = {
{.port = RGB1_CONFIG_PORT, .pin_Green = RGB1_CONFIG_GREEN, .pin_Red = RGB1_CONFIG_RED, .pin_Blue = RGB1_CONFIG_BLUE, .comman_Types = RGB_COMMAN_TYPE, .first_State = RGB1_INIT_STATE,},//rgb1
{.port = RGB2_CONFIG_PORT, .pin_Green = RGB2_CONFIG_GREEN, .pin_Red = RGB2_CONFIG_RED, .pin_Blue = RGB2_CONFIG_BLUE, .comman_Types = RGB_COMMAN_TYPE, .first_State = RGB2_INIT_STATE,} //rgb2
		        };

void RGB_VidIntialize(void)
{

	for(u8 r_count =0; r_count<N_RGB ; r_count++)
	{
		 if(RGBs[r_count].comman_Types == CATHODE)
		  {
			    switch(RGBs[r_count].first_State)
			    {
			    case RED   :Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Red,OUTPUT,HIGH);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Green,OUTPUT,LOW);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Blue,OUTPUT,LOW);
			                break ;
			    case GREEN :Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Red,OUTPUT,LOW);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Green,OUTPUT,HIGH);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Blue,OUTPUT,LOW);
			                break ;
			    case BLUE : Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Red,OUTPUT,LOW);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Green,OUTPUT,LOW);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Blue,OUTPUT,HIGH);
			                break ;
			    }
		  }else if (RGBs[r_count].comman_Types == ANODE)
		  {
			    switch(RGBs[r_count].first_State)
			    {
			    case RED   :Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Red,OUTPUT,LOW);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Green,OUTPUT,HIGH);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Blue,OUTPUT,HIGH);
			                break ;
			    case GREEN :Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Red,OUTPUT,HIGH);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Green,OUTPUT,LOW);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Blue,OUTPUT,HIGH);
			                break ;
			    case BLUE : Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Red,OUTPUT,HIGH);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Green,OUTPUT,HIGH);
			    			Pin_vidInitializeDIO(RGBs[r_count].port, RGBs[r_count].pin_Blue,OUTPUT,LOW);
			                break ;
			    }
		  }

	}

}


void RGB1_VidSetBLUE()
{
	if(RGBs[RGB1].comman_Types == CATHODE)
	{

	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Red, LOW);
	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Green,LOW);
	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Blue, HIGH);

    }
	else if (RGBs[RGB1].comman_Types == ANODE)
	{
		Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Red,HIGH);
		Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Green,HIGH);
	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Blue,LOW);

	}
}
void RGB1_VidSetRED()
{
	if(RGBs[RGB1].comman_Types == CATHODE)
	{

	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Red, HIGH);
	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Green,LOW);
	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Blue, LOW);

    }
	else if (RGBs[RGB1].comman_Types == ANODE)
	{
		Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Red,LOW);
		Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Green,HIGH);
	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Blue,HIGH);

	}
}
void RGB1_VidSetGREEN()
{
	if(RGBs[RGB1].comman_Types == CATHODE)
	{

	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Red, LOW);
	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Green,HIGH);
	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Blue, LOW);

    }
	else if (RGBs[RGB1].comman_Types == ANODE)
	{
		Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Red,HIGH);
		Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Green,LOW);
	    Pin_vidSetValDIO(RGBs[RGB1].port, RGBs[RGB1].pin_Blue,HIGH);

	}
}



void RGB2_VidSetBLUE()
{
	if(RGBs[RGB2].comman_Types == CATHODE)
	{

	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Red, LOW);
	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Green,LOW);
	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Blue, HIGH);

    }
	else if (RGBs[RGB2].comman_Types == ANODE)
	{
		Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Red,HIGH);
		Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Green,HIGH);
	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Blue,LOW);

	}
}
void RGB2_VidSetRED()
{
	if(RGBs[RGB2].comman_Types == CATHODE)
	{

	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Red, HIGH);
	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Green,LOW);
	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Blue, LOW);

    }
	else if (RGBs[RGB2].comman_Types == ANODE)
	{
		Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Red,LOW);
		Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Green,HIGH);
	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Blue,HIGH);

	}
}
void RGB2_VidSetGREEN()
{
	if(RGBs[RGB2].comman_Types == CATHODE)
	{

	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Red, LOW);
	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Green,HIGH);
	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Blue, LOW);

    }
	else if (RGBs[RGB2].comman_Types == ANODE)
	{
		Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Red,HIGH);
		Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Green,LOW);
	    Pin_vidSetValDIO(RGBs[RGB2].port, RGBs[RGB2].pin_Blue,HIGH);

	}
}

