/*Proyecto Integrador
Card-Jitsu
Fernando Josué Matute Soto
A00833375

Maestro: Benjamín Valdes
TC1030 Programación Orientado a Objetos

Clase Ninja
*/

#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//Definimos la clase ninja
class Ninja{
	protected: //Declaro los atributos en protected para poder acceder a ellos mediante la subclase
		string nombre;
		string cinta;
	
	public:
		Ninja(): nombre(""), cinta("") {}; //Constructor por default
		Ninja(string nom, string cint):
			nombre(nom), cinta(cint) {};
	
	//Declaro los metodos de la clase Ninja		
	string get_nombre(){
		return nombre;
	}
	
	string get_cinta(){
		return cinta;
	}
	
	virtual void view_player(){ //metodo en el cual vamos aplicar polimorfismo
		cout<<"\nBienvenido "<<nombre<<" tu cinta es: "<<cinta<<endl;
	}
	void crea_jugadores();
};

class Sensei:public Ninja{
	private: string tipo;
	public:
		Sensei(): Ninja("", "") {}; 
		Sensei(string cinta, string tipo): Ninja(nombre, cinta) {};
		void view_player(){
			cout<<"\nHola soy el sensei de "<<tipo<<" mi cinta es "<<cinta<<endl;
		}
};
