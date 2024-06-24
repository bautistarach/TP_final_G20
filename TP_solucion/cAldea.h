#pragma once
#ifndef _CALDEA_H
#define _CALDEA_H

#include <string>
#include <iostream>
#include <sstream>
#include <list>

#include "cPersona.h"
#include "cDragones.h"
#include "cVikingos.h"
#include "cJinetes.h"


using namespace std;

class cAldea {

private:
	list <cDragones*> Dragones;
	list <cDragones*> eliminados;
	list<cDragones*>domados;
	list <cDragones*>salvajes;
	list <cVikingos*> Vikingos;
	list <cJinetes*> Jinetes;


public:
	cAldea(list<cDragones*>d, list<cDragones*>s, list<cDragones*>a, list<cDragones*>f, list <cVikingos*>v, list<cJinetes*>j);
	~cAldea();
	void revision_dragones(cDragones* dragoncito);//funcion para eliminar los dragones muertos de la lista de dragones
	void dragones_muertos(cDragones* elim);
	void clasificar_dragones();
	cJinetes* asignar_jinete(cDragones* d);
	friend ostream& operator<<(ostream& out, cAldea& a);


};
#endif

