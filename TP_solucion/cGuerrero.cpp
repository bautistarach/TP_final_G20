#include "cGuerrero.h"

cGuerrero::cGuerrero(string nom, string ape, string apo, string fecha_nac, unsigned int dragones_elim, bool vivo_):cVikingos(nom, ape, apo, fecha_nac, dragones_elim, vivo_)
{

}

cGuerrero::~cGuerrero()
{
}

void cGuerrero::trabajar(cVikingos* v)
{
	cout << "Vikingo se dirige a pelear" << endl;
}
