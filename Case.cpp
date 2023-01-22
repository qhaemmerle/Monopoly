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

Case::string getNom(){
    return this->nom;
}

Case::void setNom(string n){
    this->nom = n;
}

Case :: void affiche(){
    	cout << this->nom ;
}