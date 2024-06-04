#include "cAldea.h"

cAldea::cAldea()
{
}

cAldea::~cAldea()
{
}

void cAldea::revision_dragones(list<cDragones*>listadrag)//sirve vambiar la lista o tengo  que dejar a los dragones muertos anotados tambien
{
	list<cDragones*>::iterator itdrag;
	

	for (itdrag == listadrag.begin(); itdrag != listadrag.end(); itdrag++) {
		if ((*itdrag)->get_vivo () == false) {
			listadrag.remove(*itdrag);

		}

	}

}
