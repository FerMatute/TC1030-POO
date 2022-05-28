/*Proyecto Integrador
Card-Jitsu

Fernando Josué Matute Soto
A00833375

Maestro: Benjamín Valdés

Esta clase define el Objeto de tipo ninja
*/
#ifndef NINJA_H_
#define NINJA_H_

#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//Declaracion de clase ninja que es abstracta
class Ninja {
	protected:
		string nombre;
		string cinta;
		
  //Declaro los métodos publicos que va a tener el objeto	
	public:
		Ninja(): nombre(""), cinta(""){}; //Constructor por default
		Ninja(string nom, string _cinta):
			nombre(nom), cinta(_cinta) {};
		void Nombre(string);
		void Cinta(string);
		void despliega_jugador(){};
		
		string getNombre(){
			return nombre;
		}
		
		string getCinta(){
			return cinta;
		};
};
		
		/*Declaro la clase Sensei que va a heredar 
		los atributos y métodos de la clase Ninja
		*/
		class Sensei: public Ninja{
			private:
				int num_cartas;
			
			public: 
				int getCarta();
				Sensei(): Ninja("Miros2086", "Negra") {};
				Sensei(string nombre, string cinta, int num_cartas);
				void despliega_jugador(string nombre, string cinta, int num_cartas); //Funcion en la cual hicimos sobrecarga
				
			void despliega_jugador(){
				cout<<nombre;
				cout<<cinta;
				cout<<num_cartas;
			}
				
		};
		
#endif
