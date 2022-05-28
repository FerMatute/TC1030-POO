/*Proyecto Integrador
Card-Jitsu

Fernando Josué Matute Soto
A00833375

Maestro: Benjamín Valdés

Esta clase define el Objeto de tipo carta
*/

#ifndef CARTA_H_
#define CARTA_H_

#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//Declaracion de clase ninja que es abstracta
class Carta {
	protected:
		string elemento;
		int nivel;
		
		
	//Declaro los métodos que va a tener la clase Carta
	
	public:
		Carta(): elemento(""), nivel(1){} ;//Constructor por default
		Carta(string elem, int level):
		elemento(elem), nivel(level) {};
		
		string consigueCarta();
		string pierdeCarta();
		void setelemento(string);
		void setnivel(int);
		void setobtenCarta(int, string);
		
};
#endif
