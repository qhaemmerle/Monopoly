#include "Propriete.h"
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;


Propriete::Propriete(string n, Case suiv, Joueur prop, int l, int p, bool hy):
        Case(n,suiv),
        proprietaire(prop),
        loyer(l),
        hyp(hy),
        prixAchat(p){};

void Propriete::setProprietaire(Joueur prop)
{
    proprietaire = prop;
}

void Propriete::setLoyer(int l)
{
    loyer = l;
}

void Propriete::setPrixAchat(int p)
{
    prixAchat = p;
}

void Terrain::sethyp(bool hy)
{
    hyp = hy;
}

void Propriete::arretSur(Joueur j)
{
    if(proprietaire == NULL)
    {
        cout<<"Voulez vous acheter "<<nom<<"? y/n";
        cin<<x;
        /* rattrapage d'erreur*/
        if(x == y)
        {
            j.debiter(prixAchat);
            proprietaire = j;
        }
    }
}

void Propriete::hypotheque()
{
    hyp = true;
    proprietaire.crediter(loyers[2] / 2);
}
