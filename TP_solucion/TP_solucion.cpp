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
#include "cGuerrero.h"
#include "cMedico.h"
#include "cHerrero.h"

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



    cDragones* Panchito = new cDragones("Panchito", "rabioso", "grande", "verde", true, false);
    cDragones* Fueguito = new cDragones("Fueguito", "enojo", "mediano", "rojo", false, true);
    cDragones* Chispita = new cDragones("Chispita", "rapido", "mediano", "naranja", false, true);
    cDragones* Cutie = new cDragones("Cutie", "tierno", "chiquitito", "arcoiris", true, true);

    list<cDragones*> DragonesAldea;

    DragonesAldea.push_back(Panchito);
    DragonesAldea.push_back(Fueguito);
    DragonesAldea.push_back(Chispita);
    DragonesAldea.push_back(Cutie);
   

  //  cJinetes* Miguel = new cJinetes();
  //  cJinetes* Lorenzo = new cJinetes();
  //  cJinetes* Carlos = new cJinetes();
  //  cJinetes* Sebastian = new cJinetes();
  //  cJinetes* Jorge = new cJinetes();



    cout << "Hello World!\n";
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
