#ifndef DEPART_H_
#define DEPART_H_
#include"Case.h"

class Depart : public Case
{
private:
	string nom;

public:
	Depart();
	void arreterSur(Joueur J);
};

#endif /* DEPART_H_ */
