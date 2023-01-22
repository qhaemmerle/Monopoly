#ifndef PION_H_
#define PION_H_

#include "Case.h"


using namespace std;

class Joueur;
class Pion {
private:
	Joueur* joueur;
	int position;
	string nom;
public:
	Pion(string nom="");

	Joueur* getJoueur();
	void setJoueur(Joueur joueur);

	int getPosition();
	void setPosition(int position);

	const string getNom() const;
	void setNom(const string &nom);

	void deplacer(int nb_de_case);
	void deplacerA(int num_de_case);

	int goToPrison();

	void affiche(){
		cout << this->nom;
    }
};

#endif /* PION_H_ */
