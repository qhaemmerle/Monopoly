#include <iostream>
#include "Depart.h"
#include "Joueur.h"
#include "Case.h"
#include <string>
using namespace std;

Depart::Depart() {
	nom = "Amphi JUL";
}

void Depart:: arreteSur(Joueur j){
    j.crediter(400);
}
