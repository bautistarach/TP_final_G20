#include "cDragones.h"
int cDragones::cont_id = 0;
cDragones::cDragones(string nom, string car, string tam, string col, bool est, bool viv)
{
	this->nombre = nom;
	this->caracteristica = car;
	this->tamanio = tam;
	this->color = col;
	this->estado=est;
	this->vivo = viv;
	this->vida = 100;
	this->id_dragon = cont_id++;
}

cDragones::~cDragones()
{
}

void cDragones::alta_nombre()
{
	if (this->ataq->get_ataque() == fuego)
		set_nombre("fireball");
	else if (this->ataq->get_ataque() == viento)
		set_nombre("windy");
	else if (this->ataq->get_ataque() == rayo)
		set_nombre("Thunder");
	else if (this->ataq->get_ataque() == garras)
		set_nombre("Garritas");
	else if (this->ataq->get_ataque() == acido)
		set_nombre("acidus");
	//else
		//throw new exception("N");
}


bool cDragones::get_estado()
{
	return this->estado;
}

void cDragones::set_estado(bool NuevoEstado)
{
	this->estado = NuevoEstado;
}

void cDragones::set_vivo(bool viv)
{
	this->vivo = viv;
}

bool cDragones::get_vivo()
{
	return this->vivo;
}

string cDragones::get_nombre()
{
	return this->nombre;
}

int cDragones::get_id()
{
	return id_dragon;
}

int cDragones::get_vida()
{
	return this->vida;
}

void cDragones::set_vida(int vid)
{
	this->vida = vid;
}

void cDragones::set_nombre(string nomb)
{
	this->nombre = nomb;
}

void cDragones::set_ataque(cFormaAtaque* atak)
{
	this->ataq = atak;
}
