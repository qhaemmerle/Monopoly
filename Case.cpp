#include <iostream>
#include "Case.h"
#include <string>
using namespace std;

Case::Case(){
	this->nom = "";
}

Case::Case(string n){
	this->nom = n;
}

string Case:: getNom(){
    return this->nom;
}

void Case::setNom(string n){
    this->nom = n;
}

void Case :: affiche(){
    	cout << this->nom ;
}
