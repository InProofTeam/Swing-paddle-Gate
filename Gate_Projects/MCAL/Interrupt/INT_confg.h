/*
 * INT_confg.h
 *
 *  Created on: Nov 1, 2022
 *      Author: youse
 */

#ifndef MCAL_INT_CONFG_H_
#define MCAL_INT_CONFG_H_


/******************************************************************************/
/********************** configuration for INTERRUPT ************************/
/******************************************************************************/
/* Description : INT Pins configuration */
/* range       : ENABLE   DISABLE  */
#define  EXINT0_STATE    ENABLE
#define  EXINT1_STATE    ENABLE
#define  EXINT2_STATE    ENABLE





#if EXINT0_STATE  == ENABLE
/* Description : Interrupt  Sense Control configuration */
/* range       : LOW_LEVEL  , ANY_DIGIT  , FALLING_EDGE , RISING_EDGE */
#define  EXINT0_MODE   ANY_DIGIT
#endif
/****************************************/
#if EXINT1_STATE  == ENABLE
/* Description : Interrupt  Sense Control configuration */
/* range       : LOW_LEVEL  , ANY_DIGIT  , FALLING_EDGE  , RISING_EDGE */
#define  EXINT1_MODE  ANY_DIGIT
#endif
/****************************************/
#if EXINT2_STATE  == ENABLE
/* Description : Interrupt  Sense Control configuration */
/* range       :  FALLING_EDGE   , RISING_EDGE   */
#define  EXINT2_MODE  FALLING_EDGE
#endif
/****************************************/







#endif /* MCAL_INT_CONFG_H_ */
