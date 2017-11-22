/*
 * CashRegister.h
 *
 *  Created on: 20 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef CASHREGISTER_CASHREGISTER_H_
#define CASHREGISTER_CASHREGISTER_H_
#include "../Ticket/Ticket.h"

class CashRegister {
public:
	CashRegister();
	virtual ~CashRegister();
	void process(Ticket* ticket);
};

 /* namespace CashRegister */

#endif /* CASHREGISTER_CASHREGISTER_H_ */
