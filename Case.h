#ifndef CASE_H_
#define CASE_H_

#include <iostream>
using namespace std;
#include <string>
#include "Joueur.h" //je ne sais pas si il faut utiliser cela ou si "class Joueur;" uniquement suffit

class Case {
protected:
	string nom;
public:
	Case();
	Case(string n);

	string getNom();

	void setNom(string n);

	void affiche();

	virtual void arreterSur(Joueur j);
};

#endif /* CASE_H_ */
