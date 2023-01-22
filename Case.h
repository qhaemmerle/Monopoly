#ifndef CASE_H_
#define CASE_H_

#include <iostream>
using namespace std;
#include <string>
#include "Joueur.h"

class Case {
protected:
	string nom;
public:
	Case();
	Case(string n);

	string getNom();

	void setNom(string n);

	void affiche();

	void arretSur(Joueur j)
	{
	    ;
	};
};

#endif /* CASE_H_ */
