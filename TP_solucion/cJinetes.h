#pragma once
#ifndef _CJINETES_H
#define _CJINETES_H

#include <string>
#include <iostream>
#include <sstream>
#include <list>
#include <time.h>
#include "tipoResultado.h"
#include "tipoCaracteristicas.h"
#include "cDragones.h"
#include "cPersona.h"

using namespace std;

class cJinetes:public cPersona
{
private:

	tipoResultado resultado;
	tipoCaracteristicas caracteristica;
	list<cDragones*> Dragon;


public:
	cJinetes(string nom, string ape, string apo, string fecha_nac_, tipoResultado resul, tipoCaracteristicas carac,list<cDragones*> drag);
	~cJinetes();
	//int operator=(string aux);
	void operator-(cDragones* dragoncito);
	void operator+(cDragones* dragoncito);
	bool domar_dragon(cDragones* dragon);
	void incorporar_dragon(cDragones* dragon);
	void baja_dragon(cDragones* dragoncito);
	tipoResultado get_resultado();
	void set_resultado(tipoResultado NuevoEstado);
	void entrenar_dragon(cDragones* dragon);


};

#endif
