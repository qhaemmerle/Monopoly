/*
 * De.cpp
 *
 *  Created on: 2 janv. 2023
 *      Author: theosaulais
 */

#include <iostream>
#include <random>
using namespace std;

#include "De.h"

De::de(int v1, int v2, bool p){ // Constructeur des deux des
	valeur1 = v1;
	valeur2 = v2;
	pair = p;
}

int De::getValeur1(){ // Obtention de la valeur du de n°1
	return valeur1;
}

int De::getValeur2(){ // Obtention de la valeur du de n°2
	return valeur2;
}

int De::getValeurDe(){ // Obtention de la valeur totale du lancer
	return valeur1 + valeur2;
}

void De::lancerDe(){

	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<> distr(1, 6); // define the range
	this -> valeur1 = distr(gen); // obtention d'une premiere valeur aleatoire
	this -> valeur2 = distr(gen); //obtention d'une seconde valeur aleatoire
}

bool De::doublette(){
	pair = false; // Par defaut, on part du principe que le joueur n'a pas fait un double
	if (valeur1 == valeur2){ // Verifie si les deux valeurs des des sont egales
		pair = true; // Si c'est le cas, pair devient True
	}
	return pair; // La fonction renvoie la valeur de pair
}
