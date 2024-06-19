#pragma once

#include "cVikingos.h"
class cCarpintero: public cVikingos
{
public:
	cCarpintero(unsigned int dragones_elim, bool vivo_);
	~cCarpintero();
	void trabajar(cVikingos* v);
};

