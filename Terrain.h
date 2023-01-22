#ifndef TERRAIN_H
#define TERRAIN_H
#include "Propriete.h"
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>

class Terrain: public Propriete
{
    public:
        Terrain(string n, Case suiv, Joueur prop = NULL, int l, int p, int m = 0, bool h = false, Terrain* q, string c, int* ls, bool hy = false);
        int getMaison(){return maison;};
        bool getHotel(){return hotel;};
        Terrain* getQuartier(){return quartier;};
        string getCouleur(){return couleur;};
        int* getLoyers(){return loyers;};
        void setMaison(int m);
        void setHotel(bool h);
        void setQuartier(Terrain* q);
        void setCouleur(string c);
        void setLoyers(int* ls);
        void achatImmo(int nombre);
        void arretSur();
        void hypotheque();

    private:
        int maison
        bool hotel
        Terrain* quartier
        string couleur
        int* loyers

};

#endif // TERRAIN_H
