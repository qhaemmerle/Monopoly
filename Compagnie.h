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
        Compagnie(string n, Joueur* prop = NULL, int p = 0, Compagnie* g[2], bool hy = false);
        Compagnie** getGroupe(){return groupe;};
        void setGroupe(Compagnie* g[2]);
        void arretSur(Joueur j);

    private:
        Compagnie* groupe[2];
};

#endif // COMPAGNIE_H
