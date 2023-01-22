#include "Compagnie.h"
#include "Propriete.h"
#include "Case.h"
#include "Joueur.h"
#include "De.h"
#include <string>
#include <iostream>
using namespace std;

Compagnie::Compagnie(string n, Joueur prop, int p, (&Compagnie)* g, bool hy):
    Propriete(n, prop, p, hy),
    groupe(g){};

void Compagnie::setGroupe((&Compagnie)* g)
{
    groupe = g;
}

void Compagnie::arretSur(Joueur j)
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
                if((*groupe[i]).getproprietaire() == proprietaire)
                    compt = compt + 1;
                i = i + 1;
            }
            De d = De();
            de = LancerDe();
            if(compt == 1)
                int loyer = 4 * de.getValeurD();
            else
                int loyer == 10 * de.getValeurD();
        }
        j.debiter(loyer);
        proprietaire.crediter(loyer);
}
