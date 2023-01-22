/*
 * Pion.cpp
 *
 *  Created on: 2 janv. 2023
 *      Author: theosaulais
 */

#include "Pion.h"

#include "Joueur.h"

Pion::Pion(string nom){//Defintion du pion avec un nom, une position et un joueur associe
	this->nom = nom;
	this->position = NULL;
	this->joueur = NULL;
}

Joueur* Pion::getJoueur(){//Obtention du nom du joueur associe au pion
    return joueur;
}

Case* Pion::getPosition() {//Obtention de la position du pion
    return position;
}

const string Pion::getNom() const {//Obtention du nom du pion
    return nom;
}

void Pion::setJoueur(Joueur& joueur) {//Definition du joueur associe au pion
    Pion::joueur = &joueur;
}

void Pion::setPosition( Case* position) {//Definition de la position du pion
    Pion::position = position;
}

void Pion::setNom(const string &nom) {//Definition du nom du pion
    Pion::nom = nom;
}

Case* Pion::deplacer(int n) {//Deplacement du pion
	for (int i = 0 ; i < n ; i++){ //Boucle sur la valeur des dés
		this->position = position->getSuivante();//Avance de case en case
		if (position->getNom() == "Depart") joueur->crediter(200); //Verifie si le joueur est passe par la case depart et credite 200€ le cas echeant
			cout << "Vous etes passe par la case depart. Vous recevez 200€" << endl;
	}
	cout << "Vous etes tombe sur la case "<< position->getNom() << endl; //Affiche la nouvelle position du pion
	return position;
}

Case* Pion::goToPrison(){//Envoi du pion en prison
	joueur->setPrison(1); //Le nombre de tour en prison prend la valeur 1
	while (position->getNom() != "Prison"){ //Deplace le pion sur tout le plateau jusqu'a arriver a la case prison
		this->position = position->getSuivante();
        this->joueur->setPion(*this);
	}
	return position;
}
