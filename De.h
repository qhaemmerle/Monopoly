/*
 * De.h
 *
 *  Created on: 2 janv. 2023
 *      Author: theosaulais
 */

#ifndef DE_H_
#define DE_H_

#include <stdlib.h>
using namespace std;

class De {

protected:
	int valeur1;
	int valeur2;
	bool pair;

public:
	~De();
	int getValeur();
	int LancerDe();
	bool Double();
};


#endif /* DE_H_ */
