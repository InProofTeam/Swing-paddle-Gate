/*
 * RTO_Priv.h
 *
 *  Created on: Nov 28, 2023
 *      Author: youse
 */

#ifndef RTO_PRIV_H_
#define RTO_PRIV_H_


typedef struct
{
	/* periodicity*/
	u16 u16Periodicity;
	/* FirstDleay */
	u16 u16FirstDelay;
	/* pointer to function */
	void(*pfunTask)(void);
}Task_TCB;



static void RTO_voidScheduler(void);

#endif /* RTO_PRIV_H_ */
