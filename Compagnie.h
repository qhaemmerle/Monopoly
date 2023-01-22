#ifndef COMPAGNIE_H
#define COMPAGNIE_H
#include "Propriete.h"
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>

class Compagnie: public Propriete
{
    public:
        Compagnie(string n, Case suiv, Joueur prop = NULL, int l, int p, Compagnie* g, string c, int* ls, bool hy = false);
        Compagnie* getGroupe(){return groupe;};
        void setGroupe(Companie* g);
        void arretSur();

    private:
        Compagnie* groupe
};

#endif // COMPAGNIE_H
