#include "cVikingos.h"

cVikingos::cVikingos(string nom, string ape, string apo, string fecha_nac, unsigned int dragones_elim, bool vivo_):cPersona(nom,ape,apo,fecha_nac)
{
	this->dragones_eliminados = dragones_elim;
	this->vivo = vivo_;
	this->ataque = 10;
	this->defensa = 5;
	this->vida = 100;
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

void cVikingos::atacar(cDragones* dragon)
{
	int i = dragon->get_ataque().max_size();
	srand(time(NULL));
	int resul = rand() % i;

	dragon->set_vida(dragon->get_vida() - ((this->ataque) - dragon->devolver_defensa(resul)));//ataque de vikingo a dragon
	if (dragon->get_vida() <= 0)
		baja_confirmada(dragon);

	this->vida = (this->vida) - (dragon->devolver_ataque(resul) - this->defensa);//ataque de dragon a vikingo
	if (this->vida <= 0)
		morir_batallando();

	
}

int cVikingos::get_vidav()
{
	return this->vida;
}

void cVikingos::set_vidav(int v)
{
	this->vida = v;
}

int cVikingos::get_nataque()
{
	return this->ataque;
}

void cVikingos::set_nataque(int a)
{
	this->ataque = a;
}

int cVikingos::get_delim()
{
	return this->dragones_eliminados;
}

bool cVikingos::get_vivo()
{
	return this->vivo;
}

int cVikingos::get_defensa()
{
	return this->defensa;
}


//ostream& operator<<(ostream& out, cVikingos& v)
//{
//	out << "Nombre:" << v.get_nombre() << endl;
//	out << "Apellido:" << v.get_apellido() << endl;
//	out << "Apodo:" << v.get_apodo() << endl;
//	out << "Fecha de nacimiento: " << v.get_fecha_nac() << endl;
//	out << "Dragones eliminados:" << v.dragones_eliminados << endl;
//	out << "Vivo: " << v.vivo << endl;
//	out << "N� Vida:" << v.vida << endl;
//	out << "Da�o de ataque:" << v.ataque << endl;
//	out << "Defensa:" << v.defensa << endl;
//
//	return out;
//}
