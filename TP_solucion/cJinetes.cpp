#include "cJinetes.h"

cJinetes::cJinetes(string nom, string ape, string apo, string fecha_nac_, tipoResultado resul, tipoCaracteristicas carac, list<cDragones*> drag):cPersona(nom,ape,apo,fecha_nac_)
{
	this->resultado = resul;
	this->caracteristica = carac;
	this->Dragon = drag;
}

cJinetes::~cJinetes()
{
}

void cJinetes::operator-(cDragones* dragoncito)
{
	list<cDragones*>::iterator itdrag;


	for (itdrag = Dragon.begin(); itdrag != Dragon.end(); itdrag++) {
		if ((*itdrag)->get_id() == dragoncito->get_id()) {
			Dragon.remove(dragoncito);
		}
	}
	return;
}

void cJinetes::operator+(cDragones* dragoncito)
{
	list<cDragones*>::iterator itdrag;

	for (itdrag = Dragon.begin(); itdrag != Dragon.end(); itdrag++) {
		if (dragoncito->get_id() == (*itdrag)->get_id()) {
			
			throw new exception("Este dragon ya existe");//try-catch en el main 
		}
		else {
			Dragon.push_back(dragoncito);
		}
	}
}

bool cJinetes::domar_dragon(cDragones* dragon)
{
	srand(time(NULL));
	int resul = rand() % 5;
	if (this->resultado == 0 || this->resultado == 2) {
		return false;
	}
	else if (this->resultado == 3) {
		operator+(dragon);
		return true;
	}
	else if (this->resultado == 1) {
		if (resul >= 3) {
			operator+(dragon);
			return true;
		}
		else
			return false;
	}
	
	else if (this->resultado == 4) {
		if (resul >= 4) {
			operator+(dragon);
			return true;
		}
		else
			return false;

	}

}

void cJinetes::incorporar_dragon(cDragones* dragon)
{
	bool resul = domar_dragon(dragon);
	if (resul == true)
		cout << "El dragón se ha incorporado correctamente" << endl;
	else(resul == false)
		; cout << "El dragon no se pudo incorporar" << endl;

}

void cJinetes::baja_dragon(cDragones* dragoncito)
{
	if (dragoncito->get_vivo() == false)
		operator-(dragoncito);
}

tipoResultado cJinetes::get_resultado()
{
	return this->resultado;
}

void cJinetes::set_resultado(tipoResultado NuevoEstado)
{
	this->resultado = NuevoEstado;
}

list<cDragones*> cJinetes::get_dragones()
{
	return this->Dragon;
}

void cJinetes::entrenar_dragon(cDragones* dragon, cFormaAtaque*a)
{
	if (dragon->get_estado() == true) {
		dragon->set_vida(dragon->get_vida() + 5);
		dragon->agregar_ataque(a);
	}
	return;
}



