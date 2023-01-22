#ifndef PROPRIETE_H
#define PROPRIETE_H
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;

class Propriete: public Case
{
    public:
        Propriete(string n, Case suiv, Joueur prop = NULL, int l, int p, bool hy = false);
        void arretSur(Joueur j);
        Joueur getproprietaire(){return proprietaire;};
        int getLoyer(){return loyer;};
        int getPrixAchat(){return prixAchat;};
        bool gethyp(){return hyp;};
        void setProprietaire(Joueur prop);
        void setLoyer(int l);
        void setPrixAchat(int p);
        void sethyp(bool hy);
        void hypotheque();

    protected:
        Joueur proprietaire;
        int loyer;
        int prixAchat;
        bool hyp
};

#endif // PROPRIETE_H
