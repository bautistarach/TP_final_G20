#include "cMedico.h"

cMedico::cMedico(string nom, string ape, string apo, string fecha_nac, unsigned int dragones_elim, bool vivo_):cVikingos(nom, ape, apo, fecha_nac, dragones_elim, vivo_)
{
}

cMedico::~cMedico()
{
}

void cMedico::trabajar(cVikingos* v)
{
	v->set_vida(v->get_vida() + 15);
}
