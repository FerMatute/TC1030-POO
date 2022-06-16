/*
 * Proyecto Card-Jitsu
 * Fernando Josué Matute Soto
 * A00833375
 * 16/06/2022
 *
 */

//Bibliotecas con objetos de mi proyecto
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#ifndef NINJA_H_
#define NINJA_H_

#include "carta.h"

using namespace std;

string a;

//Definimos la clase Ninja
class Ninja{
	
	//Declaro sus atributos
	protected:
		string nombre;
		string cinta;
		
	public:
		Ninja(): nombre(""), cinta("") {}; //Constructor por default
			Ninja(string nom, string cint):
			nombre(nom), cinta(cint) {};
			
	//Declaro los metodos
	string get_nombre(){
		return nombre;
	}
	
	string get_cinta(){
		return cinta;
	}
	
	virtual void view_player(){ //metodo en el cual vamos aplicar polimorfismo
		cout<<"\nBienvenido "<<nombre<<" tu cinta es: "<<cinta<<endl;
	}
	void crea_jugador();
};

//Declaro el objeto Sensei que hereda de Ninja
class Sensei:public Ninja{
	//Atributos
	private: string tipo;
	
	public:
		Sensei(): Ninja("", "") {}; //Constructor por default
		Sensei(string cinta, string tipo): Ninja(nombre, cinta) {};
		
		//Metodo en el cual aplicamos polimorfismo
		void view_player(){
			cout<<"\nHola soy el sensei de "<<tipo<<" mi cinta es "<<cinta<<endl;
		}
};

/**
 * crea_jugador crea un jugador de tipo Ninja.
 *
 * crea un apuntador de tipo ninja con la información 
 * ingresada por el usuario 
 *
 * @param
 * utilizamos el metodo view_player para imprimir el objeto
 */
//Metodo crea jugadores (Ninja)
void Ninja::crea_jugador(){
	cout<<"\nIngresa tu nombre (Sin espacios): ";
	cin>>a;
	Ninja *nin = new Ninja(a, "Blanca");
	nin->view_player();
}
 
#endif //NINJA_H_
 
