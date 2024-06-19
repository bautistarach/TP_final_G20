#pragma once

#include "cVikingos.h" 

class cProfesor:public cVikingos
{

public:
	cProfesor(unsigned int dragones_elim, bool vivo_);
	~cProfesor();

	void trabajar(cVikingos* v);
};

