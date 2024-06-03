#include "cFormaAtaque.h"
cFormaAtaque::cFormaAtaque(tipoAtaque ataque_)
{
	this->ataque = ataque_;
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