#ifndef PARC_H
#define PARC_H
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;

class Parc: public Case
{
    public:
        Parc(string n);
        void arretSur(Joueur j);

    private:
};


#endif // PARC_H
