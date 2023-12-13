/*
 * INT_interface.h
 *
 *  Created on: Nov 1, 2022
 *      Author: youse
 */

#ifndef MCAL_INT_INTERFACE_H_
#define MCAL_INT_INTERFACE_H_



void EXINT_vidConfig(void) ;
void EXINT_vidSetIntSense(u8 IntID , u8 type) ;
void EXINT_vidEnableInt(u8 IntID ) ;
void EXINT_vidDisableInt(u8 IntID ) ;





#endif /* MCAL_INT_INTERFACE_H_ */
