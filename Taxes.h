#ifndef TAXES_H
#define TAXES_H
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;

class Taxes: public Case
{
    public:
        Taxes(string n, int m);
        void arretSur(Joueur j);

    private:
        int montant;
};

#endif // TAXES_H
