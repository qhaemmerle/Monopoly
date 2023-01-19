/*
 * Chance.h
 *
 *  Created on: 3 janv. 2023
 *      Author: ikebbab
 */

#ifndef CHANCE_H_
#define CHANCE_H_
#include"Case.h"

class Chance : public Case
{
private:
	string nom;

public:
	Chance();
	void arreterSur();
};

#endif /* CHANCE_H_ */
