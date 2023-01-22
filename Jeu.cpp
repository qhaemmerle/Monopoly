/*
 * Jeu.cpp
 *
 *  Created on: 19 janv. 2023
 *      Author: quent
 */

#include "Jeu.h"
#include "Plateau.h"


Jeu::Jeu(int nbJoueurs) {
	this-> tourdejeu = 0;
	this-> nbJoueurs = nbJoueurs;
	this-> plateau = Plateau();
	this-> joueurs = new Joueur[nbJoueurs];
}

int Jeu::compteur() {
	return tourdejeu;
}

void Jeu::lancePartie() {

}

