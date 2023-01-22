/*
 * Jeu.h
 *
 *  Created on: 19 janv. 2023
 *      Author: quent
 */

#ifndef JEU_H_
#define JEU_H_

#include "Pl bvv bg vb  ateau.h"
#include "Joueur.h";

class Jeu {

private:
	int tourdejeu;
	int nbJoueurs;
	Plateau plateau;
	Joueur* joueurs;

public:
	Jeu(int nbJoueurs=2);

	int compteur();
	void lancePartie();


};

#endif /* JEU_H_ */
