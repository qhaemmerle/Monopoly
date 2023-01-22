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
        Terrain(string n, Joueur prop = NULL, int p, int m = 0, bool h = false, (&Terrain)* q, int* ls, bool hy = false);
        int getMaison(){return maison;};
        bool getHotel(){return hotel;};
        (&Terrain)* getQuartier(){return quartier;};
        int* getLoyers(){return loyers;};
        void setMaison(int m);
        void setHotel(bool h);
        void setQuartier((&Terrain)* q);
        void setLoyers(int* ls);
        void achatImmo(int nombre);
        void arretSur();
        void hypotheque();

    private:
        int maison
        bool hotel
        (&Terrain)* quartier
        int* loyers

};

#endif // TERRAIN_H
