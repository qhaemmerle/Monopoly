/*
 * Pion.cpp
 *
 *  Created on: 2 janv. 2023
 *      Author: theosaulais
 */

#include "Pion.h"

#include "Joueur.h"

Pion::Pion(string nom){
	this->nom = nom;
	this->position = NULL;
	this->joueur = NULL;
}

Joueur* Pion::getJoueur(){
    return joueur;
}

void Pion::setJoueur(Joueur& joueur) {
    Pion::joueur = &joueur;
}

//Case* Pion::getPosition() {
//    return position;
//}
//
//void Pion::setPosition( Case* position) {
//    Pion::position = position;
//}

const string &Pion::getNom() const {
    return nom;
}

void Pion::setNom(const string &nom) {
    Pion::nom = nom;
}

//Case* Pion::deplacer(int n) {
//	for (int i = 0 ; i < n; i++){
//		this->position = position->getSuivante();
//		if (position->getNom() == "Depart") joueur->crediter(200);
//	}
//	cout << "Vous etes tombe sur la case "<< position->getNom() << endl;
//	return position;
//}

//Case* Pion::goToPrison(){
//	joueur->setPrison(true);
//	while (position->getNom() != "Prison"){
//		this->position = position->getSuivante();
//        this->joueur->setPion(*this);
//	}
//	return position;
//}
