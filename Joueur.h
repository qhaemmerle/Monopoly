/*
 * Joueur.h
 *
 *  Created on: 2 janv. 2023
 *      Author: theosaulais
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_

#include <iostream>
#include <string>
#include "Pion.h"
#include "Propriete.h"


using namespace std;

class Propriete;
class Jeu;

class Joueur {

private:
	string nom;
	Pion pion;
	Jeu* jeu;
	int prison;
	int nb_possessions

protected:
    int solde;

public:
	Joueur();
	Joueur(string nom ,Pion pion, Jeu* jeu = NULL, int solde = 1500);

	void operation();
	const string getNom() const;
	Pion getPion();
	int getSolde() const;
	int getPrison();
	const Jeu getJeu();
	int getNb_possessions();

	void setNom(const string nom);
	void setPion(Pion pion);
	void setSolde(int solde);
	void setJeu(Jeu jeu);
	void setPrison(int prison);
	void setNb_possessions(int nb);


	void gestionPrison();
	void jouer(int nbCases);
	void crediter(int montant);
	void debiter(int montant);
	bool perdu(){return (this->nbPossessions() == 0 && solde < 0);}

	void afficheSolde()


	void affichePion(){
		cout << &pion;
	}
};


#endif /* JOUEUR_H_ */
