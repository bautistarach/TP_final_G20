#pragma once
#ifndef _CPERSONA_H
#define _CPERSONA_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class cPersona
{
private:
	string nombre;
	string apellido;
	string apodo;
	string fecha_nac;
	
public:
	cPersona(string nom, string ape, string apo, string fecha_nac);
	cPersona();
	~cPersona();
	string get_nombre();
	void set_nombre(string NuevoEstado);
	string get_apellido();
	void set_apellido(string NuevoEstado);
	string get_apodo();
	void set_apodo(string NuevoEstado);
	string get_fecha_nac();
	void set_fecha_nac(string NuevoEstado);
	string to_string();
	void imprimir();

	

};
#endif