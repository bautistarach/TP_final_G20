#include "cAldea.h"

cAldea::cAldea()
{
}

cAldea::~cAldea()
{
}

void cAldea::dragones_muertos(cDragones* elim) {

	list<cDragones*>::iterator itdrag;
	bool resul = true;



	for (itdrag = eliminados.begin(); itdrag != eliminados.end(); itdrag++) {
		if ((*itdrag)==elim)  {

			resul = false;

		}

	}
	if (resul == true)
	{
		eliminados.push_back(elim);
	}
}

void cAldea::revision_dragones(cDragones* dragoncito)//sirve vambiar la lista o tengo  que dejar a los dragones muertos anotados tambien
{
	list<cDragones*>::iterator itdrag;
	

	for (itdrag = Dragones.begin(); itdrag != Dragones.end(); itdrag++) {
		if ((*itdrag)->get_vivo() == false) {

			Dragones.remove(dragoncito);
			dragones_muertos(dragoncito);

		}

	}
}

void cAldea::clasificar_dragones()//la llamamos una vez en el main, para dividir los dragones en dos listas, una de domados y otra de salvajes 
{
	list<cDragones*>::iterator itdrag;

	for (itdrag = Dragones.begin(); itdrag != Dragones.end(); itdrag++) {

		if ((*itdrag)->get_estado() == true)
		{
			domados.push_back(*itdrag);
		}
		else {
			salvajes.push_back(*itdrag);
		}
	}
}

cJinetes* cAldea::asignar_jinete(cDragones* d)//nos devuelve que jinete esta asignado para cada dragon 
{
	
	list<cJinetes*>::iterator itjin;
	list<cDragones*>::iterator itdrag;


	for (itjin = Jinetes.begin(); itjin != Jinetes.end(); itjin++)
	{
		itdrag = (*itjin)->get_dragones().begin();

		while (itdrag != (*itjin)->get_dragones().end())
		{
			if ((*itdrag)->get_id() == d->get_id())
			{
				return *itjin;
			}
			itdrag++;
		}
	}
}