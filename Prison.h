#ifndef PRISON_H_
#define PRISON_H_
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;

class Prison: public Case
{
private:

public:
	Prison(string n);
	void arreteSur(Joueur j);
	void emprisonne();
};

#endif /* PRISON_H_ */
