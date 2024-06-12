#include "cAldea.h"

cAldea::cAldea()
{
}

cAldea::~cAldea()
{
}

void cAldea::revision_dragones(cDragones* dragoncito)//sirve vambiar la lista o tengo  que dejar a los dragones muertos anotados tambien
{
	list<cDragones*>::iterator itdrag;
	

	for (itdrag == Dragones.begin(); itdrag != Dragones.end(); itdrag++) {
		if ((*itdrag)->get_vivo() == false) {

			Dragones.remove(dragoncito);

		}

	}

}
