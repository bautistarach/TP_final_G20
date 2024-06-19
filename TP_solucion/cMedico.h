#pragma once

#include "cVikingos.h"

class cMedico:public cVikingos
{

public:
	cMedico(unsigned int dragones_elim, bool vivo_);
	~cMedico();
	void trabajar(cVikingos*v);
};

