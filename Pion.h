/*
 * Pion.h
 *
 *  Created on: 2 janv. 2023
 *      Author: theosaulais
 */

#ifndef PION_H_
#define PION_H_

// #include "Case.h"


using namespace std;

class Joueur;
class Pion {
private:
    Joueur* joueur;
    // Case* position;
    string nom; // character du pion sur le plateau
public:
    Pion(string nom="");

    Joueur* getJoueur();
    void setJoueur(Joueur& joueur);

    // Case* getPosition();
    // void setPosition( Case* position);

    const string &getNom() const;
    void setNom(const string &nom);

    // Case* deplacer(int n);

    // Case* goToPrison();

    void affiche(){
		cout << this->nom;
    }

    friend ostream& operator<< (ostream& stream, Pion p){
    	p.affiche();
    	return stream;
    }
};

#endif /* PION_H_ */
