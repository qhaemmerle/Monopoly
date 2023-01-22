/*
 * Jeu.cpp
 *
 *  Created on: 19 janv. 2023
 *      Author: quent
 */


#include "Jeu.h"



Jeu::Jeu(int nbJoueurs) {
	this-> tourdejeu = 0;
	this-> nbJoueurs = nbJoueurs;
	this-> plateau = Plateau();
	this-> joueur = Joueur[nbJoueurs];
	this-> de = De();
}

int Jeu::compteur() {
	return tourdejeu;
}

void Jeu::lancePartie() {

	Jeu* pointeurJeu = this;
	int solde = 1500;

	Joueur joueur[nbJoueurs];
	for(int i=0; i<nbJoueurs; i++) {
		string nomJoueur;
		string nomPion;
		cout << "Nom du joueur = " << endl;
		cin >> nomJoueur;
		cout << "Nom de pion = " << endl;
		cin >> nomPion;
		Pion pion = Pion(nomPion);
		joueur[i].setNom(nomJoueur);
		joueur[i].setPion(pion);
	}
	this->joueur = joueur;
	this->plateau = Plateau();
	this->de = De();

	// Créer les paquets de cartes en les mélangeant.

}

void Jeu::tourDeJeu() {

	for(int i=0; i<nbJoueurs; i++) {
		if(this->joueur[i].testPerdu == true) continue;
		this->de.lancerDe();
		if(this->de.doublette()) i--;	// Si ça marche pas, mettre des accolades.
	}
}



