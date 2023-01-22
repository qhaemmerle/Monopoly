/*
 * Jeu.h
 *
 *  Created on: 09 janv. 2023
 *      Author: quent
 */

#ifndef JEU_H_
#define JEU_H_

#include <iostream>
#include <string>

#include "Plateau.h"
#include "Pion.h"
#include "Joueur.h"
#include "Propriete.h"
#include "De.h"
#include "Case.h"

using namespace std;

class Jeu {

private:
	int tourdejeu;
	int nbJoueurs;
	Plateau plateau;
	Joueur joueur[];
	De de;

public:
	Jeu(int nbJoueurs=2);

	int compteur();
	void lancePartie();

	void setTour(int tour) {
		this->tourdejeu = tour;
	}
	void setPlateau(Plateau plateau) {
			this->plateau = plateau;
		}
	void setJoueurs(Joueur joueur[]) {
			this->joueur = joueur;
		} // Vérifier si pas d'erreur de type tableau.

	void tourDeJeu();

	bool finPartie();
};

#endif /* JEU_H_ */
