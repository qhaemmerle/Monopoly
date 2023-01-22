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
        Terrain(string n, Joueur* prop = NULL, int p = 0, int m = 0, bool h = false, Terrain* q[3], int ls[], bool hy = false);
        int getMaison(){return maison;};
        bool getHotel(){return hotel;};
        Terrain** getQuartier(){return quartier;};
        int* getLoyers(){return loyers;};
        void setMaison(int m);
        void setHotel(bool h);
        void setQuartier(Terrain* q[3]);
        void setLoyers(int ls[]);
        void achatImmo(int nombre);
        void arretSur(Joueur j);
        void hypotheque();

    private:
        int maison;
        bool hotel;
        Terrain* quartier[3];
        int loyers[];

};

#endif // TERRAIN_H
