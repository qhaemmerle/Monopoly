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
        Compagnie(string n, Joueur prop = NULL, int p, (&Compagnie)* g, bool hy = false);
        (&Compagnie)* getGroupe(){return groupe;};
        void setGroupe(&(Companie)* g);
        void arretSur();

    private:
        (&Compagnie)* groupe
};

#endif // COMPAGNIE_H
