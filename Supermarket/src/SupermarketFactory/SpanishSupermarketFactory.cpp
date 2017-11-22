/*
 * SpanishSupermarketFactory.cpp
 *
 *  Created on: 20 Nov 2017
 *      Author: alejandrobadillo
 */

#include "SpanishSupermarketFactory.h"

namespace SupermarketFactory{
SpanishSupermarketFactory::SpanishSupermarketFactory() {
	// TODO Auto-generated constructor stub

}

SpanishSupermarketFactory::~SpanishSupermarketFactory() {
	// TODO Auto-generated destructor stub
}


CashRegister* SpanishSupermarketFactory::cloneCashRegister() const {
	   //prototype pattern
	return 0; //new CashRegister(spanishBody);

}
Ticket* SpanishSupermarketFactory::cloneTicket(){
	return 0 ;//new Ticket(spanishHeader, spanishFooter);
};
}
 /* namespace SupermarketFactory */
