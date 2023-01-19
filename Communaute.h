#ifndef COMMUNAUTE_H_
#define COMMUNAUTE_H_
#include"Case.h"

class Communaute : public Case
{
private:
	string nom;

public:
	Communaute();
	void arreterSur();
};
#endif /* COMMUNAUTE_H_ */
