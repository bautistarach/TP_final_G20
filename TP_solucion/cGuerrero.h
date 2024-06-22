#pragma once

#include "cVikingos.h"
class cGuerrero: public cVikingos
{
public:
	cGuerrero(string nom, string ape, string apo, string fecha_nac, unsigned int dragones_elim, bool vivo_);
	~cGuerrero();
	void trabajar(cVikingos* v);
};

