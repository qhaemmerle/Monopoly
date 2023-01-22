#include <iostream>
#include "Communaute.h"
#include "Case.h"
#include <string>
using namespace std;


//void Communaute::creerCartesCommunaute(){
    //créer un tableau avec les cartes
    //mélanger le tableau
    //identifier ce que doit faire chaque carte
//}

void Communaute :: arreterSur(Joueur* j){
     //pioche : tire un nombre aléatoire entre 0 et 13
	srand((unsigned) time(NULL));
    int i = (rand() % 14);

    //sélection de la carte
    if(i==0){
        cout << "Recevez vos APL mensuels 100€." << endl;
        j->crediter(100);
    }
    else if(i==1){
        cout << "La vente de vos cartouches Marlboro espagnoles vous rapporte 50€." << endl;
        j->crediter(50);
    }
    else if(i==2){
        cout << "Payez votre Gala 100€." << endl;
        j->debiter(100);
    }
    else if(i==3){
        cout << "Recevez votre intérêt sur l'emprunt à 0% des Alumnis, 25€." << endl;
        j->crediter(25);
    }
    else if(i==4){
        cout << "Votre liste de l’an passé vous rembourse la somme de 20€." << endl;
        j->crediter(20);
    }
    else if(i==5){
        cout << "Erreur de KSI en votre faveur. Recevez 200€." << endl;
        j->crediter(200);
    }
    else if(i==6){
        cout << "Payez la note de GP de 1A : 50€. (Dans vos souvenirs c’était moins…" << endl;
        j->debiter(50);
    }
    else if(i==7){
        cout << "Vous subtilisez les 100€ de votre projet innovation." << endl;
        j->crediter(100);
    }
    else if(i==8){
        cout << "Payez la cotisation BDA : 50€." << endl;
        j->debiter(50);
    }
    else if(i==9){
        cout << "Vous avez gagné l’AAP de l’UA. Recevez 10€." << endl;
        j->crediter(10);
    }
    else if(i==10){
        cout << "Allez en TP C++." << endl;
        j->getPion().setPosition(30); //gestion de la prison immédiate?
    }
    else if(i==11){
        cout << "Avancez jusqu'à la case Amphi Jul." << endl;
        j->getPion().setPosition(0); //gestion case Départ
    }
    else if(i==12){
        cout << "Retournez au Grand Amphi." << endl;
        j->getPion().setPosition(1);
    }
    else if(i==13){
        cout << "Vous êtes libéré de TP C++. Cette carte peut être conservée jusqu'à ce qu'elle soit utilisée." << endl;
        j->crediter(50); //credit de la somme pour sortir de prison pour simplifier le processus
    }
}