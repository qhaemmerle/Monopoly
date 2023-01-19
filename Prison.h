#ifndef PRISON_H_
#define PRISON_H_
#include"Case.h"

class Prison : public Case
{
private:
	string nom;

public:
	Prison();
	void arreterSur();
};

#endif /* PRISON_H_ */
