#pragma once
#ifndef _CDRAGONES_H
#define _CDRAGONES_H

#include <string>
#include <iostream>
#include <sstream>
#include <list>

#include "cFormaAtaque.h"
//#include "cVikingos.h"

using namespace std;

class cDragones
{
private:
	string nombre;
	string caracteristica;
	string tamanio;
	string color;
	bool estado; //si esta domado o no el dragon 
	bool vivo;
	int vida;
	list <cFormaAtaque*> ataq;
	int id_dragon;


public:
	cDragones(string nom, string car, string tam, string col, bool est, bool viv);
	~cDragones();

	void alta_nombre(string nom);

	bool get_estado();
	void set_estado(bool NuevoEstado);

	bool get_vivo();
	void set_vivo(bool viv);
	
	string get_nombre();
	void set_nombre(string nomb);

	static int cont_id;
	int get_id();//Esta funcion no tiene setter ya que es un atributo static 
	
	int get_vida();
	void set_vida(int vid);
	
	list <cFormaAtaque*> get_ataque();
	void set_ataque(list <cFormaAtaque*> atak);
	
	int devolver_ataque(int x);
	int devolver_defensa(int x);
	void agregar_ataque(cFormaAtaque* at);

	friend ostream& operator<<(ostream& out, cDragones& d);
};
#endif