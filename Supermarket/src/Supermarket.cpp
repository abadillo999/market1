
#include "CashRegister/CashRegister.h"
#include "Ticket/Ticket.h"
#include "SupermarketFactory/SupermarketFactory.h"

CashRegister* cashRegister;
SupermarketFactory::SupermarketFactory* superMarketFactory;

void Supermarket(){
	superMarketFactory->instance();
	cashRegister = superMarketFactory->cloneCashRegister();

}
void sell() {
			Ticket* ticket = superMarketFactory->cloneTicket();
			cashRegister->process(ticket);
			ticket->close();
	}


int main() {
   Supermarket();
   sell();
}

