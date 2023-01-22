/*
 * Joueur.cpp
 *
 *  Created on: 2 janv. 2023
 *      Author: theosaulais
 */

#include "Joueur.h"
#include "Jeu.h"
#include "Propriete.h"
#include "Possessions.h"

Joueur::Joueur(string nom, Pion p, Jeu* jeu, int solde){
	this->nom = nom;
	this->pion = p;
	this->solde = solde;
	this->jeu = jeu;
	this->prison = 0;
	this->nb_possessions = 0;

}

const string Joueur::getNom() const { // Obtention du nom du joueur
    return nom;
}

Pion Joueur::getPion() { // Obtention du pion associe au joueur
    return pion;
}

int Joueur::getSolde() const { // Obtention du solde du joueur
    return solde;
}

int Joueur::getPrison() {
	return prison;
}

const Jeu Joueur::getJeu(){ //Obtention du jeu en cours (dans le cas d'un jeu sauvegarde)
	return this->jeu;
}

int Joueur::getNb_possessions(){//Obtention des possessions du joueur (propriete, gare, etc)
	return nb_possessions;
}

void Joueur::setNom(const string nom) { // Definition du nom du joueur
    this -> nom = nom;
}

void Joueur::setPion(Pion pion) { //Definition du pion associe au joueur
	this -> pion = pion;
}

void Joueur::setSolde(int solde) { //Definition du solde du joueur
	this -> solde = solde;
}

void Joueur::setJeu(Jeu jeu){//Definition du jeu en cours
	this->jeu = jeu;
}

void Joueur::setPrison(int prison){//Definition de la valeur du nombre de tours consecutifs en prison
	this->prison = prison;
}

void Joueur::setNb_possessions(int nb){//Definition des possessions du joueur
	this->nb_possession = nb;
}

void Joueur::gestionPrison() { // Permet la gestion de la prision pour le joueur
    cout << prison << endl;
    if ( prison == 0 || prison > 3 ){ // Si le joueur est en prison depuis plus de trois tours
        this->setPrison(0); // Son nombre de tours successifs en prison repasse a 0
    }
    else {
        this->setPrison(prison+1); // Sinon, l'atribut prison prend la valeur prison+1 (le joueur passe un tour supplémentaire en prison)
        cout << "Souhaitez-vous sortir pour 50€ ?" << endl; // On propose au joueur de sortir de prison pour 50€
        string input;
        cin >> input;
        if (input == "y"){ // Si le joueur souhaite sortir en payant, il répond "y"
            this->debiter(50); // Son solde est debite de 50€
            this->setPrison(0); // Son nombre de tours successifs en prison passe a 0
            cout << "Vous sortez de prison et votre solde est de : " << this->solde << " €" << endl;
        }			// On indique au joueur qu'il est sorti et on affiche son nouveau solde.
    }
}


void Joueur::crediter(int montant) {//Permet de crediter le solde du joueur d'un montant fixe
    this->solde = solde + montant;
}

void Joueur::debiter(int montant) {//Permet de debiter le solde d'un joueur d'un montant donne
	if (solde - montant >= 0){ //Premier cas de figure : le joueur a les moyens de payer
		this->solde = solde - montant;//On retranche simplement le montant au solde
	}
	else{
		this->solde = solde - montant; //Si le joueur n'a pas les moyens de payer, on commence par retrancher le montant a son solde
		cout<<"Votre solde est négatif. Vous hypothéquez vos propriété en partant de la plus couteuse jusqu'à passage en positif"<<endl;
		/*grosse hypothèque*/
	}
}

bool Joueur::perdu(){
	return (this->nb_possessions == 0 && solde < 0);
}


void Joueur::afficheSolde(){
	cout << nom << ", votre solde est de " << solde << " €" << endl;
}
