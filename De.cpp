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

De::~De(){
}

int De::getValeur(){
	return valeur1 + valeur2;
}

int De::LancerDe(){

	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<> distr(1, 6); // define the range
	this -> valeur1 = distr(gen);

	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<> distr(1, 6); // define the range
	this -> valeur2 = distr(gen);
}

bool De::Double(){
	pair = false;
	if (valeur1 == valeur2){
		pair = true;
	}
	return pair;
}
