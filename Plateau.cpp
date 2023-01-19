#include <iostream>
#include "Plateau.h"
#include <string>
using namespace std;

Plateau::Plateau() {
	//création de toutes les cases
    lesTerrains[21]=Terrain("La Jetée",400,39, 50,200,600,1400,1700,2000,200);
    lesTaxes[1]=Taxes("Cotisation BDS",100);
    lesTerrains[20]=Terrain("Le Gymnase",350, 37,35,175,500,1100,1300,1500,200);
    lesChances[2]=Chance("Chance");
    lesGares[3]=Gare("TVP",200,35);
    lesTerrains[19]=Terrain("Échanges Phocéens", 320, 34, 28,150,450,1000,1200,1400,200);
    lesCommunautes[2]=Communaute("Caisse de Communauté");
    lesTerrains[18]=Terrain("KSI",300,32, 26,130,390,900,1100,1275,200);
    lesTerrains[17]=Terrain("FOCEEN",300,31,26,130,390,900,1100,1275,200);
    lesPrisons[1]=Prison("Aller en TP C++");
    lesTerrains[16]=Terrain("BDE",280,29,24,120,360,850,1025,1200,150);
    lesCompagnies[1]=Compagnie("Bar’bu",150,28);
    lesTerrains[15]=Terrain("BDS",260, 27,22,110,330,800,975,1150,150);
    lesTerrains[14]=Terrain("BDA",260,26,22,110,330,800,975,1150,150);
    lesGares[2]=Gare("CMA",200,25);
    lesTerrains[13]=Terrain("Fablab",240,24,20,100,300,750,925,1100,150);
    lesTerrains[12]=Terrain("Hang’art",220,23,18,90,250,700,875,1050,150);
    lesChances[1]=Chance("Chance");
    lesTerrains[11]=Terrain("Local PLP",220,21,18,90,250,700,875,1050,150);
    leParc=Parc();
    lesTerrains[10]=Terrain("MSB",200,19,16,80,220,600,800,1000,100);
    lesTerrains[9]=Terrain("ISF",180,18,14,70,200,550,750,950,100);
    lesCommunautes[1]=Communaute("Caisse de Communauté");
    lesTerrains[8]=Terrain("Phy-TV",180,16,14,70,200,550,750,950,100);
    lesGares[1]=Gare("MDV",200,15);
    lesTerrains[7]=Terrain("Kioske",160,14,12,60,180,500,700,900,100);
    lesTerrains[6]=Terrain("Local GInfo",140,13,10,50,150,450,625,750,100);
    lesCompagnies[0]=Compagnie("Le Crous",150,12);
    lesTerrains[5]=Terrain("Le Foy’s",140,11,10,50,150,450,625,750,100);
    lesPrisons[0]=Prison("TP C++");
    lesTerrains[4]=Terrain("PXC",120,9,8,40,100,300,450,600,50);
    lesTerrains[3]=Terrain("CMF",100,8,6,30,90,270,400,550,50);
    lesChances[0]=Chance("Chance");
    lesTerrains[2]=Terrain("La pièce",100,6,6,30,90,270,400,550,50);
    lesGares[0]=Gare("R2CM",200,5);
    lesTaxes[0]=Taxes("Cotisation BDE",200);
    lesTerrains[1]=Terrain("Médiathèque",60,3,4,20,60,180,320,450,50);
    lesCommunautes[0]=Communaute("Caisse de Communauté");
    lesTerrains[0]=Terrain("Grand Amphi",60,1,2,10,30,90,160,250,50);
    leDepart=Depart("Amphi JUL");


    //relation de groupe entre les cases (cases de même couleur)
    //Terrains
    lesTerrains[0].setGroupe(&lesTerrains[0],&lesTerrains[1]);
    lesTerrains[2].setGroupe(&lesTerrains[2],&lesTerrains[3],&lesTerrains[4]);
    lesTerrains[5].setGroupe(&lesTerrains[5],&lesTerrains[6],&lesTerrains[7]);
    lesTerrains[8].setGroupe(&lesTerrains[8],&lesTerrains[9],&lesTerrains[10]);
    lesTerrains[11].setGroupe(&lesTerrains[11],&lesTerrains[12],&lesTerrains[13]);
    lesTerrains[14].setGroupe(&lesTerrains[14],&lesTerrains[15],&lesTerrains[16]);
    lesTerrains[17].setGroupe(&lesTerrains[17],&lesTerrains[18],&lesTerrains[19]);
    lesTerrains[20].setGroupe(&lesTerrains[20],&lesTerrains[21]);
    //Gares
    lesGares[0].setAutreGares(&lesGares[0],&lesGares[1],&lesGares[2],&lesGares[3]);
    //Compagnies
    lesCompagnies[0].setAutreCompanie(&lesCompagnies[0],&lesCompagnies[1]);


    //Stockage éléments dans liste
    liste_cases[0]=&leDepart;
    liste_cases[1]=&lesTerrains[0];
    liste_cases[2]=&lesCommunautes[0];
    liste_cases[3]=&lesTerrains[1];
    liste_cases[4]=&lesTaxes[0];
    liste_cases[5]=&lesGares[0];
    liste_cases[6]=&lesTerrains[2];
    liste_cases[7]=&lesChances[0];
    liste_cases[8]=&lesTerrains[3];
    liste_cases[9]=&lesTerrains[4];
    liste_cases[10]=&lesPrisons[0];
    liste_cases[11]=&lesTerrains[5];
    liste_cases[12]=&lesCompagnies[0];
    liste_cases[13]=&lesTerrains[6];
    liste_cases[14]=&lesTerrains[7];
    liste_cases[15]=&lesGares[1];
    liste_cases[16]=&lesTerrains[8];
    liste_cases[17]=&lesCommunautes[1];
    liste_cases[18]=&lesTerrains[9];
    liste_cases[19]=&lesTerrains[10];
    liste_cases[20]=&leParc;
    liste_cases[21]=&lesTerrains[11];
    liste_cases[22]=&lesChances[1];
    liste_cases[23]=&lesTerrains[12];
    liste_cases[24]=&lesTerrains[13];
    liste_cases[25]=&lesGares[2];
    liste_cases[26]=&lesTerrains[14];
    liste_cases[27]=&lesTerrains[15];
    liste_cases[28]=&lesCompagnies[1];
    liste_cases[29]=&lesTerrains[16];
    liste_cases[30]=&lesPrisons[1];
    liste_cases[31]=&lesTerrains[17];
    liste_cases[32]=&lesTerrains[18];
    liste_cases[33]=&lesCommunautes[2];
    liste_cases[34]=&lesTerrains[19];
    liste_cases[35]=&lesGares[3];
    liste_cases[36]=&lesChances[2];
    liste_cases[37]=&lesTerrains[20];
    liste_cases[38]=&lesTaxes[1];
    liste_cases[39]=&lesTerrains[21];

}