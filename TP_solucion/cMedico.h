#pragma once

#include "cVikingos.h"

class cMedico:public cVikingos
{

public:
	cMedico(string nom, string ape, string apo, string fecha_nac, unsigned int dragones_elim, bool vivo_);
	~cMedico();
	void trabajar(cVikingos*v);
};

