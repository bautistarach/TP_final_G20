#include "cFormaAtaque.h"
cFormaAtaque::cFormaAtaque(tipoAtaque ataque_, tipoDefensa defensa_)
{
	this->ataque = ataque_;
	this->defensa = defensa_;
}

cFormaAtaque::~cFormaAtaque()
{
}

int cFormaAtaque::get_atak()
{
	return static_cast<int>(this->ataque);

}

void cFormaAtaque::set_atak(tipoAtaque NuevoEstado)
{
	this->ataque = NuevoEstado;
}

int cFormaAtaque::get_def()
{
	return static_cast<int>(this->defensa);
}

void cFormaAtaque::set_def(tipoDefensa NuevoEstado)
{
	this->defensa = NuevoEstado;
}