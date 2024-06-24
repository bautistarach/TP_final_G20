// TP_solucion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <list>

using namespace std;

#include "cAldea.h"
#include "cVikingos.h"
#include "cJinetes.h"
#include "cDragones.h"
#include "cPersona.h"
#include "cFormaAtaque.h"
#include "cGuerrero.h"
#include "cMedico.h"
#include "cHerrero.h"
#include "tipoAtaque.h"
#include "tipoDefensa.h"

int main()
{
    cVikingos* Andres = new cGuerrero("Andres", "Gonzalez", "Keko", "14/02/1992", 10, true);
    cVikingos* Martin = new cGuerrero("Martin", "Lopez", "Tincho", "21/11/1995", 15, false);
    cVikingos* Felipe = new cMedico("Felipe", "Germano", "Pipe", "02/06/2000", 5, true);
    cVikingos* Bautista = new cMedico("Bautista", "Rach", "Toba", "20/07/2003", 7, false);
    cVikingos* Martina = new cHerrero("Martina", "Hansel", "Tula", "29/03/2003", 4, true);
    cVikingos* Julia = new cHerrero("Julia", "Gretel", "Juji", "25/12/1994", 11, false);
    

    list <cVikingos*> VikingosAldea;

    VikingosAldea.push_back(Andres);
    VikingosAldea.push_back(Martin);
    VikingosAldea.push_back(Felipe);
    VikingosAldea.push_back(Bautista);
    VikingosAldea.push_back(Martina);
    VikingosAldea.push_back(Julia);


    cDragones* Panchito = new cDragones("Panchito", "rabioso", "grande", "verde", true, true);
    cDragones* Fueguito = new cDragones("Fueguito", "enojo", "mediano", "rojo", false, true);
    cDragones* Chispita = new cDragones("Chispita", "rapido", "mediano", "naranja", false, true);
    cDragones* Cutie = new cDragones("Cutie", "tierno", "chiquito", "arcoiris", true, true);
    cDragones* Rayito = new cDragones("Rayito", "veloz", "chiquito", "amarillo", true, true);
    cDragones* Destructorcito = new cDragones("Destructorcito", "fuerte", "grande", "negro", true, false);
    cDragones* Nerdy = new cDragones("Nerdy", "inteligente", "mediano", "violeta", true, true);

    list<cDragones*> DragonesMigue;

    DragonesMigue.push_back(Panchito);
    DragonesMigue.push_back(Rayito);

    list<cDragones*> DragonesLoren;
    DragonesLoren.push_back(Nerdy);
    DragonesLoren.push_back(Cutie);
   

   cJinetes* Miguel = new cJinetes("Miguel", "Sanchez", "Migue", "30/03/1992", aprobado, robusto, DragonesMigue);
   cJinetes* Lorenzo = new cJinetes("Lorenzo", "Garcia", "Loren", "25/08/1995", primero, agil, DragonesLoren);

   list<cJinetes*> JinetesAldea;
   JinetesAldea.push_back(Miguel);
   JinetesAldea.push_back(Lorenzo);

   cFormaAtaque* forma1 = new cFormaAtaque(tipoAtaque::acido, tipoDefensa::resistencia_intensa);
   cFormaAtaque* forma2= new cFormaAtaque(tipoAtaque::fuego, tipoDefensa::armadura_dragon);
   cFormaAtaque* forma3 = new cFormaAtaque(tipoAtaque::viento, tipoDefensa::abrazo_de_oso);
   cFormaAtaque* forma4 = new cFormaAtaque(tipoAtaque::rayo, tipoDefensa::reflejos_rapidos);
   cFormaAtaque* forma5 = new cFormaAtaque(tipoAtaque::garras, tipoDefensa::capa_invisibilidad);
   cFormaAtaque* forma6 = new cFormaAtaque(tipoAtaque::acido, tipoDefensa::reflejos_rapidos);
   cFormaAtaque* forma7 = new cFormaAtaque(tipoAtaque::viento, tipoDefensa::abrazo_de_oso);


   Miguel->domar_dragon(Fueguito);
   Lorenzo->domar_dragon(Chispita);

   try {
       Panchito->agregar_ataque(forma1);  
   }
   catch (exception* e)
   {
       cout << e->what() << endl;
       delete e;
   }




    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
