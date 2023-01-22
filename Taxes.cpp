#include "Taxes.h"
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;

Taxes::Taxes(string n, int m):
    Case(n),
    montant(m){};

void Taxes::arretSur(Joueur j)
{
    j.debiter(montant);
}
