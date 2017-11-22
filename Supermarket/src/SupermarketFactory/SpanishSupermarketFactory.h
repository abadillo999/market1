/*
 * SpanishSupermarketFactory.h
 *
 *  Created on: 20 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef SUPERMARKETFACTORY_SPANISHSUPERMARKETFACTORY_H_
#define SUPERMARKETFACTORY_SPANISHSUPERMARKETFACTORY_H_
#include "../CashRegister/CashRegister.h"
#include "../Ticket/Ticket.h"
#include "SupermarketFactory.h"
namespace SupermarketFactory{
class SpanishSupermarketFactory: public SupermarketFactory{
private:
 static CashRegister* cashRegister;
public:
	SpanishSupermarketFactory();
	virtual ~SpanishSupermarketFactory();
	CashRegister* cloneCashRegister() const;
	Ticket* cloneTicket();

};

} /* namespace SupermarketFactory */

#endif /* SUPERMARKETFACTORY_SPANISHSUPERMARKETFACTORY_H_ */
