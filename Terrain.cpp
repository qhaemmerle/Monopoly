#include "Terrain.h"
#include "Propriete.h"
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;

Terrain::Terrain(string n, Joueur* prop, int p, int m, bool h, Terrain* q[3], int ls[], bool hy):
    Propriete(n, prop, p, hy),
    maison(m),
    hotel(h),
    quartier(q),
    loyers(ls){};

void Terrain::setMaison(int m)
{
    maison = m;
}

void Terrain::setHotel(bool h)
{
    hotel = h;
}

void Terrain::setQuartier(Terrain* q[3])
{
    quartier = q;
}

void Terrain::setLoyers(int* ls)
{
    loyers = ls;
}

void Terrain::achatImmo(int nombre)
{
    int i = 0;
    bool prop = true;
    while(prop and i < 3)
    {
        if((*quartier[i]).getproprietaire() != proprietaire)
            prop = false;
        i = i + 1;
    }
    if(prop)
    {
         (*proprietaire).debiter(loyers[9]);
        if(maison + nombre < 5)
            maison = maison + nombre;
        else
        {
            maison = 0;
            hotel = true;
        }
    }
    else
        cout<<"Vous ne possedez pas tout le quartier, vous ne pouvez pas encore acheter de ressources immobilière.";
}

void Terrain::arretSur(Joueur j) {
    Propriete::arretSur(j);
    int loyer = 0;
    if (proprietaire != NULL && (*proprietaire).getNom() != j.getNom()) {
        if(hyp) loyer = 0;
        if(hotel) loyer = loyers[8];
        else if(maison != 0) int loyer = loyers[1 + maison];
        else {
            int i = 0;
            bool prop = true;
            while(prop and i < 3)
            {
                if((*quartier[i]).getproprietaire() != proprietaire)
                    prop = false;
                i = i + 1;
            }
            if(prop)
                loyer = loyers[1] * 2;
            else
                loyer = loyers[1];
        }
        j.debiter(loyer);
        (*proprietaire).crediter(loyer);
    }
}

void Terrain::hypotheque() {
    Propriete::hypotheque();
    if(hotel) {
        (*proprietaire).crediter(5 * loyers[7] / 2);
        hotel = false;
    }
    else if(maison != 0) {
        (*proprietaire).crediter(maison * loyers[7] / 2);
        maison = 0;
    }
}
