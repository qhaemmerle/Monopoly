#include <iostream>
#include "Prison.h"
#include "Case.h"
#include <string>
using namespace std;

Prison::Prison(string n):
    Case(n){};

void Prison :: arreteSur(Joueur j){
    if(nom == "Allez en TP C++")
        j.setPrison(1);
        (j.getPion()).setPosition(10);
}
