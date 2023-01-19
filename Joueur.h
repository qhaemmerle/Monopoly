/*
 * Joueur.h
 *
 *  Created on: 2 janv. 2023
 *      Author: theosaulais
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_

#include <iostream>
#include <string>
#include "Pion.h"
// #include "Possessions.h"


using namespace std;

class Propriete;
class Jeu;

class Joueur {

private:
    string nom;
    Pion pion;
    Jeu* jeu;
    int prison; // si on vas en prison
//    Possessions p;

protected:
    int solde;

public:
    Joueur();
    Joueur(string nom ,Pion pion, Jeu* jeu = NULL, int solde = 1500);

    void operation();
    const string &getNom() const;
    Pion getPion();
    int getSolde() const;
//    const Jeu &getJeu() const{return *this->jeu;}
//    int getPrison();
//    Possessions getPossessions(){return p;}


    void setNom(const string &nom);
    void setPion(Pion& pion);
    void setSolde(int solde);
    void setJeu(Jeu* jeu){this->jeu = jeu;}
//    void setPrison(int prison){ this->prison = prison;}
//   void setPossessions(Possessions& p){this->p = p;}



    void jouer(int nbCases);
    void crediter(const int montant);
    void debiter(const int montant);
//    int nbPossessions(){return this->p.getNbPossessions();}
//    void addPossession(Propriete* p){this->p.addPossession(p);}
//    void removePossession(Propriete* p){this->p = *this->p.removePossession(p);}
//    void vendPossession();
    bool perdu(){return (this->nbPossessions() == 0 && solde < 0);}


    void afficheSolde();

    void affiche(){
    	cout << nom << ", votre solde est " << solde << " $";
    }
    void affichePion(){
    	cout << &pion;
    }

    friend ostream& operator<< (ostream& stream, Joueur j){
    	j.affiche();
    	return stream;
    }

};


#endif /* JOUEUR_H_ */
