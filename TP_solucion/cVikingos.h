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
	//posicion_vik posicion;
	int vida;
	int ataque;
	int defensa;

public:
	cVikingos(string nom, string ape, string apo, string fecha_nac, unsigned int dragones_elim, bool vivo_);
	virtual ~cVikingos() = default;
	bool dragones_terminados();
	bool baja_confirmada(cDragones* dragon);
	bool morir_batallando();
	void atacar(cDragones* dragon);
	void set_vida(int v);
	int get_vida();
	virtual void trabajar(cVikingos* v)=0;//clase abstracta
	int get_nataque();
	void set_nataque(int a);
	friend ostream& operator<<(ostream& out, cVikingos& v)
};

#endif