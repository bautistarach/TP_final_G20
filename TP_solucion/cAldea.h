#pragma once
#ifndef _CALDEA_H
#define _CALDEA_H

#include <string>
#include <iostream>
#include <sstream>
#include <list>

#include "cPersona.h"


using namespace std;

class cAldea {

private:
	list <cDragones*> Dragones;
	list <cVikingos*> Vikingos;
	list <cJinetes*> Jinetes;


public:
	cAldea();
	~cAldea();
	void revision_dragones(cDragones* dragoncito);//funcion para eliminar los dragones muertos de la lista de dragones

};
#endif

