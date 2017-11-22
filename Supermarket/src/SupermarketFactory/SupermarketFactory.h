
#ifndef SUPERMARKETFACTORY_SUPERMARKETFACTORY_H_
#define SUPERMARKETFACTORY_SUPERMARKETFACTORY_H_
#include "../CashRegister/CashRegister.h"
#include "../Ticket/Ticket.h"

namespace SupermarketFactory{

class SupermarketFactory {
protected:
	CashRegister* cashRegister;
    SupermarketFactory* supermarketFactory = 0;
    int getCountryCode();

public:
	SupermarketFactory();
	SupermarketFactory* instance();
	CashRegister* cloneCashRegister();
	Ticket* cloneTicket();

};
}
 /* namespace SupermarketFactory */
#endif /* SUPERMARKETFACTORY_SUPERMARKETFACTORY_H_ */

