#include "Propriete.h"
#include <string>
#include <iostream>
using namespace std;


Propriete::Propriete(string n, Joueur* prop, int p, bool hy):
        Case(n),
        proprietaire(prop),
        hyp(hy),
        prixAchat(p){};

void Propriete::setProprietaire(Joueur* prop)
{
    proprietaire = prop;
}

void Propriete::setPrixAchat(int p)
{
    prixAchat = p;
}

void Propriete::sethyp(bool hy)
{
    hyp = hy;
}

void Propriete::arretSur(Joueur j)
{
    if(proprietaire == NULL)
    {
    	string x;
        cout<<"Voulez vous acheter "<<nom()<<"? y/n";
        cin<<x;
        /* rattrapage d'erreur*/
        if(x == "y")
        {
            j.debiter(prixAchat);
            proprietaire = &j;
        }
    }
}

void Propriete::hypotheque()
{
    hyp = true;
    (*proprietaire).crediter(prixAchat/2);
}
