#include "Compagnie.h"
#include "Propriete.h"
#include "Case.h"
#include "Joueur.h"
#include "De.h"
#include <string>
#include <iostream>
using namespace std;

Compagnie::Compagnie(string n, Joueur* prop, int p, Compagnie* g[2], bool hy):
    Propriete(n, prop, p, hy),
    groupe(g){};

void Compagnie::setGroupe(Compagnie* g[2]) {
    groupe = g;
}

void Compagnie::arretSur(Joueur j){
    Propriete::arretSur(j);
    int loyer = 0;
    if (proprietaire != NULL && (*proprietaire).getNom() != j.getNom()){
        if(hyp) loyer = 0;
        else {
            int i = 0;
            int compt = 0;
            while(i < 2) {
                if((*groupe[i]).getproprietaire() == proprietaire)
                    compt = compt + 1;
                i = i + 1;
            }
            De de = De();
            de.lancerDe();
            if(compt == 1) loyer = 4 * de.getValeurDe();
            else
                loyer = 10 * de.getValeurDe();
        }
        j.debiter(loyer);
        (*proprietaire).crediter(loyer);
    }
}
