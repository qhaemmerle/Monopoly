/*
 * Joueur.h
 *
 *  Created on: 2 janv. 2023
 *      Author: theosaulais
 */

#include "Possessions.h"
#include "Propriete.h"

Possessions::Possessions() {
	possession = NULL;
	suivante = NULL;
}

Possessions::Possessions(Propriete* p) {
	possession = p;
	suivante = NULL;
}


void Possessions::addPossession(Propriete* p){
	if (possession == NULL){
		possession = p;
	}else{
		if (suivante == NULL){
			suivante = new Possessions(p);
		}else{
			suivante->addPossession(p);
		}
	}
}

Possessions* Possessions::removePossession(Propriete* p){
	Possessions* resultat;
	if (possession == p){
		if (suivante != NULL){
			resultat = suivante;
		}else{
			resultat = new Possessions();
		}
	}else{
		resultat = suivante->removePossession(p);
	}
	return resultat;
}

void Possessions::affichePossessions(){
	if (possession != NULL){
		cout << possession;
		cout << endl;
	}
	if (suivante != NULL){
		suivante->affichePossessions();
		cout << endl;
	}
}

int Possessions::getNbPossessions(){
	int resultat = 0;
	if (suivante == NULL){
		if (possession != NULL){
			resultat = 1;
		}
	}else{
		resultat = suivante->getNbPossessions() + 1;
	}
	return resultat;
}
