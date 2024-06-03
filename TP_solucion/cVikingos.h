#pragma once
#ifndef _CVIKINGOS_H
#define _CVIKINGOS_H

#include <string>
#include <iostream>
#include <sstream>

#include "cPersona.h"
#include "cDragones.h"

using namespace std;

//class cDragones;
class cVikingos:public cPersona
{
private:

	unsigned int dragones_eliminados;
	bool vivo;
	string posicion;
	int vida;
	int ataque;
	

public:
	cVikingos(string nom, string ape, string apo, string fecha_nac,  unsigned int dragones_elim, bool vivo_,string pos);
	~cVikingos();
	bool dragones_terminados();
	bool baja_confirmada(cDragones* dragon);
	bool morir_batallando();
	void ataque_vikingo(cDragones* dragon);
	//friend void cDragones:: ataque();
};

#endif