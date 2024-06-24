#include "cAldea.h"

cAldea::cAldea(list<cDragones*>d, list<cDragones*>s, list<cDragones*>a, list<cDragones*>f, list <cVikingos*>v, list<cJinetes*>j)
{
	this->Dragones = d;
	this->eliminados = s;
	this->domados = a;
	this->salvajes = f;
	this->Vikingos = v;
	this->Jinetes = j;
}

cAldea::~cAldea()
{
}

void cAldea::dragones_muertos(cDragones* elim) {

	list<cDragones*>::iterator itdrag;
	bool resul = true;



	for (itdrag = eliminados.begin(); itdrag != eliminados.end(); itdrag++) {
		if ((*itdrag)==elim)  {

			resul = false;

		}

	}
	if (resul == true)
	{
		eliminados.push_back(elim);
	}
}

void cAldea::revision_dragones(cDragones* dragoncito)//sirve vambiar la lista o tengo  que dejar a los dragones muertos anotados tambien
{
	list<cDragones*>::iterator itdrag;
	

	for (itdrag = Dragones.begin(); itdrag != Dragones.end(); itdrag++) {
		if ((*itdrag)->get_vivo() == false) {

			Dragones.remove(dragoncito);
			dragones_muertos(dragoncito);

		}

	}
}

void cAldea::clasificar_dragones()//la llamamos una vez en el main, para dividir los dragones en dos listas, una de domados y otra de salvajes 
{
	list<cDragones*>::iterator itdrag;

	for (itdrag = Dragones.begin(); itdrag != Dragones.end(); itdrag++) {

		if ((*itdrag)->get_estado() == true)
		{
			domados.push_back(*itdrag);
		}
		else {
			salvajes.push_back(*itdrag);
		}
	}
}

cJinetes* cAldea::asignar_jinete(cDragones* d)//nos devuelve que jinete esta asignado para cada dragon 
{
	
	list<cJinetes*>::iterator itjin;
	list<cDragones*>::iterator itdrag;


	for (itjin = Jinetes.begin(); itjin != Jinetes.end(); itjin++)
	{
		itdrag = (*itjin)->get_dragones().begin();

		while (itdrag != (*itjin)->get_dragones().end())
		{
			if ((*itdrag)->get_id() == d->get_id())
			{
				return *itjin;
			}
			itdrag++;
		}
	}
}

ostream& operator<<(ostream& out, cAldea& a)
{
	list<cDragones*>::iterator it1;

	for (it1 = a.Dragones.begin(); it1 != a.Dragones.end(); it1++) {
		out << "Nombre:" << (*it1)->get_nombre() << endl;
		out << "Caracteristica:" << (*it1)->get_carac() << endl;
		out << "Color:" << (*it1)->get_color() << endl;
		out << "Tamaño:" << (*it1)->get_tamanio() << endl;
		out << "Domado:" << (*it1)->get_estado() << endl;
		out << "Vivo:" << (*it1)->get_vivo() << endl;
		out << "ID:" << (*it1)->get_id() << endl;


	}

	list<cDragones*>::iterator it2;

	for (it2 = a.eliminados.begin(); it2 != a.eliminados.end(); it2++) {
		out << "Nombre:" << (*it2)->get_nombre() << endl;
		out << "Caracteristica:" << (*it2)->get_carac() << endl;
		out << "Color:" << (*it2)->get_color() << endl;
		out << "Tamaño:" << (*it2)->get_tamanio() << endl;
		out << "Domado:" << (*it2)->get_estado() << endl;
		out << "Vivo:" << (*it2)->get_vivo() << endl;
		out << "ID:" << (*it2)->get_id() << endl;


	}

	list<cDragones*>::iterator it3;
	for (it3 = a.salvajes.begin(); it3 != a.salvajes.end(); it3++) {
		out << "Nombre:" << (*it3)->get_nombre() << endl;
		out << "Caracteristica:" << (*it3)->get_carac() << endl;
		out << "Color:" << (*it3)->get_color() << endl;
		out << "Tamaño:" << (*it3)->get_tamanio() << endl;
		out << "Domado:" << (*it3)->get_estado() << endl;
		out << "Vivo:" << (*it3)->get_vivo() << endl;
		out << "ID:" << (*it3)->get_id() << endl;
	}

	list<cVikingos*>::iterator it4;

	for (it4 = a.Vikingos.begin(); it4 != a.Vikingos.end(); it4++) {
		out << "Nombre:" << (*it4)->get_nombre() << endl;
		out << "Apellido:" <<(*it4)->get_apellido() << endl;
		out << "Apodo:" << (*it4)->get_apodo() << endl;
		out << "Fecha de nacimiento: " << (*it4)->get_fecha_nac() << endl;
		out << "Dragones eliminados:" << (*it4)->get_delim() << endl;
		out << "Vivo: " << (*it4)->get_vivo() << endl;
		out << "N° Vida:" << (*it4)->get_vidav() << endl;
		out << "Daño de ataque:" << (*it4)->get_nataque() << endl;
		out << "Defensa:" << (*it4)->get_defensa() << endl;

	}

	list<cJinetes*>::iterator it5;

	for (it5 = a.Jinetes.begin(); it5 != a.Jinetes.end(); it5++) {
		out << "Nombre:" << (*it5)->get_nombre() << endl;
		out << "Apellido:" << (*it5)->get_apellido() << endl;
		out << "Apodo:" << (*it5)->get_apodo() << endl;
		out << "Fecha de nacimiento:" << (*it5)->get_fecha_nac() << endl;
		out << "Resultado exámen:" << (*it5)->get_resultado() << endl;
		

		list<cDragones*>drag = (*it5)->get_dragones();
		list<cDragones*>::iterator it6;

		for (it6=drag.begin();it6!=drag.end(); it6++)
		{
			out << "Nombre Dragon:" << (*it6)->get_nombre() << endl;
			out << "ID Dragon:" << (*it6)->get_id() << endl;
			
		}

	}
	return out;

}
