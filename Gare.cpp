#include "Gare.h"
#include "Propriete.h"
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;

Gare::Gare(string n, Case suiv, Joueur prop, int l, int p, Gare* g, bool hy):
    Propriete(n, suiv, prop, l, p, hy),
    groupe(g){};

void Gare::setGroupe(Gare* g)
{
    groupe = g;
}

void Gare::arretSur(Joueur j)
{
    Propriete::arretSur();
    if (proprietaire != NULL && proprietaire.getNom() != j.getNom())
    {
        if(hyp)
            int loyer = 0;
        else
        {
            int i = 0;
            int compt = 0;
            while(prop and i < groupe.size())
            {
                if(i.getproprietaire() == proprietaire)
                    compt = compt + 1;
                i = i + 1;
            }
            int loyer = 25 * (2 ^ (compt - 1))
        }
        j.debiter(loyer);
        proprietaire.crediter(loyer);
}
