#ifndef CHANCE_H_
#define CHANCE_H_
#include"Case.h"
#include <iostream>
#include <string>
using namespace std;

class Chance : public Case{
public:
	Chance();
	void arretSur(Joueur j);
};

#endif /* CHANCE_H_ */
