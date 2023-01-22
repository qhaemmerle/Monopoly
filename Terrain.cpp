#include "Terrain.h"
#include "Propriete.h"
#include "Case.h"
#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;

Terrain::Terrain(string n, Case suiv, Joueur prop, int l, int p, int m, bool h, Terrain* q, string c, int* ls, bool hy):
    Propriete(n, suiv, prop, l, p, hy),
    maison(m),
    hotel(h),
    quartier(q),
    couleur(c),
    loyers(ls){};

void Terrain::setMaison(int m)
{
    maison = m;
}

void Terrain::setHotel(bool h)
{
    hotel = h;
}

void Terrain::setQuartier(Terrain* q)
{
    quartier = q;
}

void Terrain::setCouleur(string c)
{
    couleur = c;
}

void Terrain::setLoyers(int* ls)
{
    loyers = ls;
}

void Terrain::achatImmo(int nombre)
{
    int i = 0;
    bool prop = true;
    while(prop and i < quartier.size())
    {
        if(i.getproprietaire() != proprietaire)
            prop = false;
        i = i + 1;
    }
    if(prop)
    {
         proprietaire.debiter(loyers[9]);
        if(maison + nombre < 5)
            maison = maison + nombre;
        else
        {
            maison = 0;
            hotel = true;
        }
    }
    else
        cout<<"vous ne possédez pas tout le quartier, vous ne pouvez pas encore acheter de ressources immobilière.";
}

void Terrain::arretSur(Joueur j)
{
    Propriete::arretSur();
    if (proprietaire != NULL && proprietaire.getNom() != j.getNom())
    {
        if(hyp)
            int loyer = 0;
        if(hotel)
            int loyer = loyers[8];
        else if(maison != 0)
            int loyer = loyers[3 + maison];
        else
        {
            int i = 0;
            bool prop = true;
            while(prop and i < quartier.size())
            {
                if(i.getproprietaire() != proprietaire)
                    prop = false;
                i = i + 1;
            }
            if(prop)
                int loyer = loyers[3] * 2;
            else
                int loyer = loyers[3];
        }
        j.debiter(loyer);
        proprietaire.crediter(loyer);
}

void Terrain::hypotheque()
{
    Propriete::hypotheque();
    if(hotel)
    {
        proprietaire.crediter(5 * loyers[9] / 2);
        hotel = false;
    }
    else if(maison != 0)
    {
        proprietaire.crediter(maison * loyers[9] / 2);
        maison = 0;
    }
}
