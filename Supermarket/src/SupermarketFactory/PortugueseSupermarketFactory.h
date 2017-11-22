/*
 * PortugueseSupermarketFactory.h
 *
 *  Created on: 20 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef SUPERMARKETFACTORY_PORTUGUESESUPERMARKETFACTORY_H_
#define SUPERMARKETFACTORY_PORTUGUESESUPERMARKETFACTORY_H_
#include "../CashRegister/CashRegister.h"
#include "../Ticket/Ticket.h"
#include "SupermarketFactory.h"
namespace SupermarketFactory{
class PortugueseSupermarketFactory: public SupermarketFactory {

public:
	PortugueseSupermarketFactory();
	virtual ~PortugueseSupermarketFactory();
	CashRegister* cloneCashRegister();
	Ticket* cloneTicket();

};
}

#endif /* SUPERMARKETFACTORY_PORTUGUESESUPERMARKETFACTORY_H_ */
