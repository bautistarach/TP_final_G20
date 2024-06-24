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

string cPersona::get_apodo()
{
	return this->apodo;
}

void cPersona::set_apodo(string NuevoEstado)
{
	this->apodo = NuevoEstado;
}

string cPersona::get_fecha_nac()
{
	return this->apodo;
}

void cPersona::set_fecha_nac(string NuevoEstado)
{
	this->apodo = NuevoEstado;
}

string cPersona::to_string()
{
	string resul = this->nombre + " " + this->apellido + " " + this->apodo + " "+this->fecha_nac;

	return resul;
}

void cPersona::imprimir()
{
	
	cout<< to_string()<<endl;
}




