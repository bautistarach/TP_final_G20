#pragma once

#include "cVikingos.h"

class cHerrero:public cVikingos
{

public:
	cHerrero(string nom, string ape, string apo, string fecha_nac, unsigned int dragones_elim, bool vivo_);
	~cHerrero();

	void trabajar(cVikingos* v);
};

