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

/* Seter définit dans le fichier De.h */

De::~De(){
}

int De::getValeur(){
	return valeur;
}

int De::LancerDe(){

	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<> distr(1, 6); // define the range
	this -> valeur = distr(gen);

}
