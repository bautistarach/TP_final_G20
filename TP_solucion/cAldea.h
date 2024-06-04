#pragma once
#ifndef _CALDEA_H
#define _CALDEA_H

#include <string>
#include <iostream>
#include <sstream>
#include <list>

#include "cJinetes.h"
#include "cVikingos.h"

using namespace std;

class cAldea {

private:
	list <cDragones*> Dragones;
	list <cVikingos*> Vikingos;
	list <cJinetes*> Jinetes;


public:
	cAldea();
	~cAldea();
	void revision_dragones(list<cDragones*>listadrag);//funcion para eliminar los dragones muertos de la lista de dragones

};
#endif

