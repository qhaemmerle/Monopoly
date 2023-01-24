#include <iostream>
#include <cstdlib>
#include "Chance.h"
#include "Case.h"
#include <string>
using namespace std;

Chance::Chance()
	:Case("Chance"){}

void Chance::arreterSur(Joueur* j){
    //pioche : tire un nombre aléatoire entre 0 et 15
	srand((unsigned) time(NULL));
    int i = (rand() % 16);

    //sélection de la carte
    if(i==0){
        cout << "La Banque vous verse une dividende de 50€." << endl;
        j->crediter(50);
    }
    else if(i==1){
        cout << "Amende pour ivresse au Bar’bu : 20€." << endl;
        j->debiter(20);
    }
    else if(i==2){
        cout << "Amende pour excès de vitesse dans la queue du RU : 15€." << endl;
        j->debiter(15);
    }
    else if(i==3){
        cout << "Vous avez gagné l’AAP du FOCEEN. Recevrez 100€." << endl;
        j->crediter(100);
    }
    else if(i==4){
        cout << "Payez pour frais de scolarité 150€. (Le jeu date un peu, c’est pour ça que c’est pas cher.)" << endl;
        j->debiter(150);
    }
    else if (i==5){
        cout << "Votre minage de cryptomonnaie sur les serveurs du GInfo rapporte. Vous devez toucher 150€." << endl;
        j->crediter(150);
    }                    
    else if(i==6){
        cout << "Rendez-vous au Fablab." << endl;
        j->getPion().setPosition(24); //comment on déplace ? + inclure le cas où on passe la case départ à gérer
    }
    else if (i==7){
        cout << "Allez en TP C++." << endl;
        j->getPion().setPosition(30); //gestion de la prison immédiate?
    }
    else if (i==8){
        cout << "Avancez jusqu'à l’Amphi Jul." << endl;
        j->getPion().setPosition(0); //idem, gestion auto du départ et du créditer ?
    }
    else if (i==9){
        cout << "Rendez-vous à La Jetée." << endl;
        j->getPion().setPosition(39); //idem cas départ
    }
    else if (i==10){
        cout << "Allez au MDV." << endl;
        j->getPion().setPosition(15); //idem cas départ
    }
    else if (i==11){
        cout << "Avancez au Foy’s." << endl;
        j->getPion().setPosition(11); //idem cas départ
    }
    else if (i==12){
        //cout << "Rénovation des locaux. Versez pour chaque maison 25€ et versez pour chaque hôtel 100€." << endl;
        //int s = 0*25 + 0*100;
        //calcul de la somme : impossible sans les propriétés des joueurs.
        cout << "Fermeture du couloir des assos. Payez 100€ pour sa réouverture." << endl;
        j->debiter(100);
    }
    else if (i==13){
        cout << "Fermeture du couloir des assos. Payez 150€ pour sa réouverture." << endl;
        j->debiter(150);
    }
    else if (i==14){
        cout << "Reculez de trois cases." << endl;
        j->getPion().setPosition(j->getPion().getPosition()-3); //gestion auto de ce qu'il se passe sur la case d'arrivée
    }
    else if (i==15){
        cout << "Vous êtes libéré de TP C++. Cette carte peut être conservée jusqu'à ce qu'elle soit utilisée." << endl;
        j->crediter(50); //credit de la somme pour sortir de prison pour simplifier le processus
    }       
}
