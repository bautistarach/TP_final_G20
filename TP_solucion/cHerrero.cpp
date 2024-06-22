#include "cHerrero.h"

cHerrero::cHerrero(string nom, string ape, string apo, string fecha_nac, unsigned int dragones_elim, bool vivo_):cVikingos(nom, ape, apo, fecha_nac, dragones_elim,vivo_)
{
}

cHerrero::~cHerrero()
{
}

void cHerrero::trabajar(cVikingos* v)
{
	v->set_nataque(v->get_nataque() + 1);//mejora el arma del vikingo en 1 
}
