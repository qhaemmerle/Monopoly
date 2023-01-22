#include "Gare.h"
#include "Propriete.h"
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;

Gare::Gare(string n, Joueur* prop, int p, Gare* g[4], bool hy):
    Propriete(n, prop, p, hy),
    groupe(g){};

void Gare::setGroupe(Gare* g[4])
{
    groupe = g;
}

void Gare::arretSur(Joueur j)
{
    Propriete::arretSur(j);
    int loyer = 0;
    if (proprietaire != NULL && (*proprietaire).getNom() != j.getNom())
    {
        if(hyp)
            loyer = 0;
        else
        {
            int i = 0;
            int compt = 0;
            while(i < 4)
            {
                if((*groupe[i]).getproprietaire() == proprietaire)
                    compt = compt + 1;
                i = i + 1;
            }
            loyer = 25 * (2 ^ (compt - 1));
        }
        j.debiter(loyer);
        (*proprietaire).crediter(loyer);
    }
}
