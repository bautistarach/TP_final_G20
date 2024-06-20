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
	//void entrenar(); hecha en jinetes
	//bool domado(); tiene que estar en jinete
	//void baja();
	bool get_estado();
	void set_estado(bool NuevoEstado);
	//void ataque(cVikingos*vikingo);
	void set_vivo(bool viv);
	bool get_vivo();
	string get_nombre();
	int get_id();
	int get_vida();
	void set_vida(int vid);
	void set_nombre(string nomb);
	static int cont_id;
	//string operator=(string nom);
	//void operator-(string aux);
	void set_ataque(list <cFormaAtaque*> atak);
	//void asignar_jinete(cJinetes*j);
	//void atacar(cVikingos* vik);
	list <cFormaAtaque*> get_ataque();
	int devolver_ataque(int x);
	int devolver_defensa(int x);
	void agregar_ataque(cFormaAtaque* at);
	string to_string();
	void imprimir();
};
#endif