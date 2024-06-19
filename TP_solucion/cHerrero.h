#pragma once

#include "cVikingos.h"

class cHerrero:public cVikingos
{

public:
	cHerrero(unsigned int dragones_elim, bool vivo_);
	~cHerrero();

	void trabajar(cVikingos* v);
};

