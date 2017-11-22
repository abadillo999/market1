
#ifndef SUPERMARKETFACTORY_SUPERMARKETFACTORY_H_
#define SUPERMARKETFACTORY_SUPERMARKETFACTORY_H_
#include "../CashRegister/CashRegister.h"
#include "../Ticket/Ticket.h"


class SupermarketFactory {
protected:
	SupermarketFactory();
    static SupermarketFactory* supermarketFactory;
	CashRegister* cashRegister;
    static int getCountryCode();

public:
	static SupermarketFactory* instance();
	CashRegister* cloneCashRegister();
	Ticket* cloneTicket();

};

 /* namespace SupermarketFactory */
#endif /* SUPERMARKETFACTORY_SUPERMARKETFACTORY_H_ */

