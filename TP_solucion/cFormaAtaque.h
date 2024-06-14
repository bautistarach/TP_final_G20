#pragma once
#ifndef _CFORMAATAQUE_H
#define _CFORMAATAQUE_H

#include <string>
#include <iostream>
#include <sstream>

#include "tipoAtaque.h"
#include "tipoDefensa.h"

using namespace std;

class cFormaAtaque
{
private:

	tipoAtaque ataque;
	tipoDefensa defensa;

public:

	cFormaAtaque(tipoAtaque ataque_, tipoDefensa defensa_);
	~cFormaAtaque();
	tipoAtaque get_ataque();
	void set_ataque(tipoAtaque NuevoEstado);
	tipoDefensa get_defensa();
	void set_defensa(tipoDefensa NuevoEstado);



};
#endif
