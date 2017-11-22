
#include "PortugueseSupermarketFactory.h"


PortugueseSupermarketFactory::PortugueseSupermarketFactory() {


}

PortugueseSupermarketFactory::~PortugueseSupermarketFactory() {
	// TODO Auto-generated destructor stub
}

CashRegister* PortugueseSupermarketFactory::cloneCashRegister() {
   //prototype pattern
	return  0; //new CashRegister(portugueseBody);
}

Ticket* PortugueseSupermarketFactory::cloneTicket() {
	   //prototype pattern
	return 0 ; //new Ticket(portugueseHeader, portugueseFooter);
}


