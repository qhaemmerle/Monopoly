#ifndef GARE_H
#define GARE_H
#include "Propriete.h"
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>

class Gare: public Propriete
{
    public:
        Gare(string n, Case suiv, Joueur prop = NULL, int l, int p, Gare* g, string c, int* ls, bool hy = false);
        Gare* getGroupe(){return groupe;};
        void setGroupe(Gare* g);
        void arretSur();

    private:
        Gare* groupe
};

#endif // GARE_H
