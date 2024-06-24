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

	

public:

tipoAtaque ataque;
	tipoDefensa defensa;
	cFormaAtaque(tipoAtaque ataque_, tipoDefensa defensa_);
	~cFormaAtaque();
	int get_atak();
	void set_atak(tipoAtaque NuevoEstado);
	int get_def();
	void set_def(tipoDefensa NuevoEstado);
	//friend ostream& operator<<(ostream& out, cFormaAtaque& f);


};
#endif
