#include "cVikingos.h"

cVikingos::cVikingos(string nom, string ape, string apo, string fecha_nac, unsigned int dragones_elim, bool vivo_):cPersona(nom,ape,apo,fecha_nac)
{
	this->dragones_eliminados = dragones_elim;
	this->vivo = vivo_;
	this->ataque = 10;
	this->vida = 100;
}

cVikingos::~cVikingos()
{
}

bool cVikingos::dragones_terminados()
{
	if (this->dragones_eliminados == 0)
		return false;
	else(this->dragones_eliminados > 0)
		; return true;

}

bool cVikingos::baja_confirmada(cDragones* dragon)
{
	if (dragon->get_vida() <= 0) {
		dragon->set_vivo(false);
		return true;
	}
	else
		return false;
}

bool cVikingos::morir_batallando()
{
	if (this->vida <= 0)
		return true;
	else
		return false;
}

void cVikingos::ataque_vikingo(cDragones* dragon)
{
	dragon->set_vida(dragon->get_vida() - (this->ataque));// le resto la cantidad de vida que hace el vikingo al atacar 

	if (dragon->get_vida() <= 0) {
		this->dragones_eliminados++;
		dragon->set_vivo(false);
	}
}

