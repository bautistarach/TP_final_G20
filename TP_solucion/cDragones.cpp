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
	//this->ataq = a;
	this->id_dragon = cont_id++;
}

cDragones::~cDragones()
{
}

void cDragones::alta_nombre(string nom)
{
	this->nombre = nom;
}


bool cDragones::get_estado()
{
	return this->estado;
}

void cDragones::set_estado(bool NuevoEstado)
{
	this->estado = NuevoEstado;
}

bool cDragones::get_vivo()
{
	return this->vivo;
}

void cDragones::set_vivo(bool viv)
{
	this->vivo = viv;
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

string cDragones::get_carac()
{
	return this->caracteristica;
}

string cDragones::get_color()
{
	return this->color;
}

string cDragones::get_tamanio()
{
	return this->tamanio;
}

void cDragones::set_ataque(list<cFormaAtaque*> atak)
{
	this->ataq = atak;
}

list<cFormaAtaque*> cDragones::get_ataque()
{
	
	return this->ataq;
}

int cDragones::devolver_ataque(int x)
{
	list<cFormaAtaque*>::iterator it;
	int f = 0;
	for (it = ataq.begin(); it != ataq.end(); it++) {
		
		if (f == x) {
			return (*it)->get_atak();
		}
		f++;
	}
	
}
int cDragones::devolver_defensa(int x)
{
	list<cFormaAtaque*>::iterator it;
	int f = 0;
	for (it = ataq.begin(); it != ataq.end(); it++) {

		if (f == x) {
			return (*it)->get_def();
		}
		f++;
	}

}

void cDragones::agregar_ataque(cFormaAtaque* at)
{
	list<cFormaAtaque*>::iterator it;

	for (it = ataq.begin(); it != ataq.end(); it++)
	{
		if ((*it) == at)
		{
			throw new exception("El ataque y la defensa ya estan dentro de la lista");
			return;
		}

	}
	ataq.push_back(at);
}


ostream& operator<<(ostream& out, cDragones& d)
{
	out << "Nombre:" << d.nombre << endl;
	out << "Caracteristica:" << d.caracteristica << endl;
	out << "Color:" << d.color << endl;
	out << "Tamaño:" << d.tamanio << endl;
	out << "Domado:" << d.estado << endl;
	out << "Vivo:" << d.vivo << endl;
	out << "ID:" << d.id_dragon << endl;

	list<cFormaAtaque*>::iterator it;

	for (it = d.ataq.begin(); it != d.ataq.end(); it++) {
		out << "Ataque:" << (*it)->get_atak() << endl;
		out << "Defensa:" << (*it)->get_def() << endl;
	}


	return out;

}
