#ifndef PLATEAU_H_
#define PLATEAU_H_
#include "Case.h"
#include "Terrain.h"
#include "Gare.h"
#include "Compagnie.h"

class Plateau {
private:
    Terrain [22] lesTerrains;
    Gare [4] lesGares;
    Compagnie [2] lesCompagnies;
    Communaute [3] lesCommunautes;
    Chance [3] lesChances;
    Case [40] liste_case;
    Taxes [2] lesTaxes;
    Depart leDepart;
    Prison [2] lesPrisons;

public:
	Plateau();
};

#endif /* PLATEAU_H_ */
