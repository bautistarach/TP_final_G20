#include "cFormaAtaque.h"
cFormaAtaque::cFormaAtaque(tipoAtaque ataque_, tipoDefensa defensa_)
{
	this->ataque = ataque_;
	this->defensa = defensa_;
}

cFormaAtaque::~cFormaAtaque()
{
}

tipoAtaque cFormaAtaque::get_ataque()
{
	return this->ataque;

}

void cFormaAtaque::set_ataque(tipoAtaque NuevoEstado)
{
	this->ataque = NuevoEstado;
}

tipoDefensa cFormaAtaque::get_defensa()
{
	return this->defensa;
}

void cFormaAtaque::set_defensa(tipoDefensa NuevoEstado)
{
	this->defensa = NuevoEstado;
}