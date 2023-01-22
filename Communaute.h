#ifndef COMMUNAUTE_H_
#define COMMUNAUTE_H_
#include"Case.h"
#include <iostream>
#include <string>
using namespace std;

class Communaute : public Case{
public:
	Communaute():Case("Caisse de communauté"){};
	void arreterSur(Joueur j);
};
#endif /* COMMUNAUTE_H_ */
