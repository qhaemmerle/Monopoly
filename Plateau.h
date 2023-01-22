#ifndef PLATEAU_H_
#define PLATEAU_H_
#include "Terrain.h"
#include "Gare.h"
#include "Compagnie.h"
#include "Communaute.h"
#include "Chance.h"
#include "Case.h"
#include "Taxes.h"
#include "Depart.h"
#include "Prison.h"
#include "Parc.h"


class Plateau {
private:
    Terrain lesTerrains[22];
    Gare lesGares[4];
    Compagnie lesCompagnies[2];
    Communaute lesCommunautes[3];
    Chance lesChances[3];
    Case liste_cases[40];
    Taxes lesTaxes[2];
    Depart leDepart;
    Prison lesPrisons[2];
    Parc leParc;

public:
	Plateau();
	Case* getListe_cases(){return liste_cases;};
};

#endif /* PLATEAU_H_ */
