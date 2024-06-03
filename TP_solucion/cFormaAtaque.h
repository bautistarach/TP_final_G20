#pragma once
#ifndef _CFORMAATAQUE_H
#define _CFORMAATAQUE_H

#include <string>
#include <iostream>
#include <sstream>

#include "tipoAtaque.h"

using namespace std;

class cFormaAtaque
{
private:

	tipoAtaque ataque;

public:

	cFormaAtaque(tipoAtaque ataque_);
	~cFormaAtaque();
	tipoAtaque get_ataque();
	void set_ataque(tipoAtaque NuevoEstado);


};
#endif
