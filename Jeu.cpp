/*
 * Jeu.cpp
 *
 *  Created on: 09 janv. 2023
 *      Author: quent
 */


#include "Jeu.h"



Jeu::Jeu(int nbJoueurs) {
	Joueur joueur[nbJoueurs];
	tourdejeu = 0;
	this->nbJoueurs = nbJoueurs;
	plateau = Plateau();
	this-> joueur = joueur;
	de = De();
}

int Jeu::compteur() {
	return tourdejeu;
}

void Jeu::lancePartie() {

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
	plateau = Plateau();
	de = De();

	while(this->finPartie() == false){
		this->tourDeJeu();
		tourdejeu = tourdejeu + 1;
	}

	// Créer les paquets de cartes en les mélangeant.

}

void Jeu::tourDeJeu() {

	for(int i=0; i<nbJoueurs; i++) {
		if(joueur[i].perdu) continue;
		joueur[i].gestionPrison();

		de.lancerDe();
		joueur->pion.deplacer(de.valeur1 + de.valeur2);
		int position = joueur->pion.getPosition();
		Case* liste_cases = plateau.getListe_cases();
		Case emplacement = liste_cases[position];
		cout << "Vous êtes tombé sur la case "<< emplacement.getNom();
		emplacement.arretSur(joueur[i]);

		if(de.doublette()) i--;	// Si ça marche pas, mettre des accolades.
	}
}

bool Jeu::finPartie() {
	int joueursRestants = nbJoueurs;
	for(int i=0; nbJoueurs; i++) {
		if(joueur[i].perdu) joueursRestants = joueursRestants - 1;
	}
	return (joueur < 2);
}


