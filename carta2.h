/*Proyecto Integrador
Card-Jitsu

Fernando Josué Matute Soto
A00833375

Maestro: Benjamín Valdés

Esta clase define el Objeto de tipo carta
*/

#ifndef CARTA2_H_
#define CARTA2_H_

#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//Declaro la clase carta
class Carta {
	protected:
		string tipo;
		int nivel;
		
	//Declaro los métodos que va a tener la clase Carta
	public:
		Carta(): tipo(""), nivel(1){} ;//Constructor por default
		Carta(string tip, int level):
		tipo(tip), nivel(level) {};
		virtual string to_string()=0;
};

//Clase de la Carta Fuego que hereda de Carta
class Carta_Fuego:public Carta{
	public:
		Carta_Fuego(): Carta("Fuego", 1) {};
		Carta_Fuego(string tipo, int nivel): Carta("Fuego", nivel){};
		
		string to_string();
};

//Metodo to_string reescrito
string Carta_Fuego::to_string(){
  stringstream fire;
  fire << "\nElemento: " << tipo << "\nNivel: " << nivel <<endl;
  return fire.str();
}

//Clase de la Carta Agua que hereda de Carta
class Carta_Agua:public Carta{
	public:
		Carta_Agua(): Carta("Agua", 1) {};
		Carta_Agua(string tipo, int nivel): Carta("Agua", nivel){};
		
		string to_string();
};

//Metodo to_string reescrito
string Carta_Agua::to_string(){
  stringstream water;
  water << "\nElemento: " << tipo << "\nNivel: " << nivel <<endl;
  return water.str();
}

//Clase de la Carta Nieve que hereda de Carta
class Carta_Nieve:public Carta{
	public:
		Carta_Nieve(): Carta("Nieve", 1) {};
		Carta_Nieve(string tipo, int nivel): Carta("Nieve", nivel){};
		
		string to_string();
};

//Metodo to_string reescrito
string Carta_Nieve::to_string(){
	stringstream ice;
	ice << "\nElemento: " << tipo << "\nNivel: " << nivel <<endl;
	return ice.str();
}

#endif
