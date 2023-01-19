#ifndef DEPART_H_
#define DEPART_H_
#include"Case.h"

class Depart : public Case
{
private:
	string nom;

public:
	Depart();
	void arreterSur();
};

#endif /* DEPART_H_ */
