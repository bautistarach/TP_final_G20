#pragma once

#include "cVikingos.h"

class cFontanero:public cVikingos
{

public:
	cFontanero(unsigned int dragones_elim, bool vivo_);
	~cFontanero();
	void trabajar(cVikingos* v);
};

