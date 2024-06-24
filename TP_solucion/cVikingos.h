#pragma once
#ifndef _CVIKINGOS_H
#define _CVIKINGOS_H

#include <string>
#include <iostream>
#include <sstream>

#include "cPersona.h"
#include "cDragones.h"
#include "posicionvikingo.h"

using namespace std;

//class cDragones;
class cVikingos :public cPersona
{
private:

	unsigned int dragones_eliminados;
	bool vivo;
	int vida;
	int ataque;
	int defensa;

public:
	cVikingos(string nom, string ape, string apo, string fecha_nac, unsigned int dragones_elim, bool vivo_);
	virtual ~cVikingos() = default;//al ser clase abstracta el destructor es virtual 

	bool dragones_terminados();
	bool baja_confirmada(cDragones* dragon);
	bool morir_batallando();
	void atacar(cDragones* dragon);

	int get_vidav();
	void set_vidav(int v);
	
	int get_nataque();
	void set_nataque(int a);

	int get_delim();
	bool get_vivo();
	int get_defensa();

	virtual void trabajar(cVikingos* v) = 0;//clase abstracta

	friend ostream& operator<<(ostream& out, cVikingos& v);
};

#endif