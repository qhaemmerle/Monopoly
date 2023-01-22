#include "Pion.h"

#include "Joueur.h"

Pion::Pion(string nom){//Defintion du pion avec un nom, une position et un joueur associe
	this->nom = nom;
	this->position = NULL;
	this->joueur = NULL;
}

Joueur* Pion::getJoueur(){//Obtention du nom du joueur associe au pion
    return joueur;
}

int Pion::getPosition() {//Obtention de la position du pion
    return position;
}

const string Pion::getNom() const {//Obtention du nom du pion
    return nom;
}

void Pion::setJoueur(Joueur& joueur) {//Definition du joueur associe au pion
    Pion::joueur = &joueur;
}

void Pion::setPosition( int position) {//Definition de la position du pion
    Pion::position = position;
}

void Pion::setNom(const string &nom) {//Definition du nom du pion
    Pion::nom = nom;
}

void Pion::deplacer(int n) {//Deplacement du pion
	if(position + n < 40)
        position += n;
    else if(position + n - 40 != 0)
    {
        position = position + n - 40;
        joueur.crediter(200);
    }
    else
        position = 0;
}

