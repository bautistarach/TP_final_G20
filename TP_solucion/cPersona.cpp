#include "cPersona.h"

cPersona::cPersona(string nom, string ape, string apo, string fecha_nac)
{
	this->nombre = nom;
	this->apellido = ape;
	this->apodo = apo;
	this->fecha_nac = fecha_nac;

}

cPersona::~cPersona()
{
}

string cPersona::get_nombre()
{
	return this->nombre;
}

void cPersona::set_nombre(string NuevoEstado)
{
	this->nombre = NuevoEstado;
}

string cPersona::get_apellido()
{
	return this->apellido;
}

void cPersona::set_apellido(string NuevoEstado)
{
	this->apellido = NuevoEstado;
}




