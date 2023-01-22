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

De::De(int v1, int v2, bool p){
	valeur1 = v1;
	valeur2 = v2;
	pair = p;
}

De::~De(){
}

int De::getValeur1(){
	return valeur1;
}

int De::getValeur2(){
	return valeur2;
}

int De::getValeurDe(){
	return valeur1 + valeur2;
}

void De::LancerDe(){

	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<> distr(1, 6); // define the range
	this -> valeur1 = distr(gen);
	this -> valeur2 = distr(gen);
}

bool De::Double(){
	pair = false;
	if (valeur1 == valeur2){
		pair = true;
	}
	return pair;
}
