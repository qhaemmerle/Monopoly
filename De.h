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
	de(int v1=0, int v2=0, bool p = false);
	int getValeur1();
	int getValeur2();
	int getValeurDe();
	void lancerDe();
	bool doublette();
};


#endif /* DE_H_ */
