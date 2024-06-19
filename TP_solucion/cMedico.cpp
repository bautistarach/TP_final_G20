#include "cMedico.h"

cMedico::cMedico(unsigned int dragones_elim, bool vivo_):cVikingos(dragones_ekim, vivo_)
{
}

cMedico::~cMedico()
{
}

void cMedico::trabajar(cVikingos* v)
{
	v->set_vida(v->get_vida() + 15);
}
