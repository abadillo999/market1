/*
 * SupermarketFactory.cpp
 *
 *  Created on: 20 Nov 2017
 *      Author: alejandrobadillo
 */

#include "SupermarketFactory.h"
#include "SpanishSupermarketFactory.h"
#include "PortugueseSupermarketFactory.h"



SupermarketFactory::SupermarketFactory() {
	// TODO Auto-generated constructor stub

}


SupermarketFactory* SupermarketFactory::instance(){
	if (!supermarketFactory) {
	int code = getCountryCode();
	switch(code){
	case 0:
		supermarketFactory = new SpanishSupermarketFactory;
			break;
	case 1:
		supermarketFactory = new PortugueseSupermarketFactory;
			break;

	}
	}

return supermarketFactory;
}



int SupermarketFactory::getCountryCode() {
    //Este metodo lee del fichero de congi el codigo del país
	return 0;
}






 /* namespace SupermarketFactory */
