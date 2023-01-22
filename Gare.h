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
        Gare(string n, Joueur* prop = NULL, int p, Gare* g[4], bool hy = false);
        Gare* getGroupe(){return groupe;};
        void setGroupe(Gare* g[4]);
        void arretSur(Joueur j);

    private:
        Gare* groupe[4];
};

#endif // GARE_H
