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

const int Max_cartas = 36; //constante de tamaño de arreglo de cartas

//Declaro la clase carta
class Carta {
	protected:
		string tipo;
		int nivel;
		
		
	private:
	Carta * card[Max_cartas]; //se define como apuntador para usar polimorfismo
  	int cartas;
		
	//Declaro los métodos que va a tener la clase Carta
	
	public:
		//Carta(): cartas(0) {};
		Carta(): tipo(""), nivel(1){} ;//Constructor por default
		Carta(string tip, int level):
		tipo(tip), nivel(level) {};
		
		void consigueCarta();
		void pierdeCarta();
		void creaCarta(string, int); //Para sobrecargar aregando el nombre
		void asigna_Carta();
		//void muestra_Carta(string, int); //Para sobrecargar agregando el nombre
		
		//Metodo que va a ser sobrecargado
	void muestra_Carta(string tipo, int nivel){
		cout<<"\nElemento: "<<tipo<<"\nNivel: "<<nivel<<endl;
	}

};


//Creo las subclase Carta de Fuego que hereda de la clase Carta

class cFuego: public Carta{
	private: string nombre_fuego;
	
	public:
		cFuego(): Carta("", 1) {};
		cFuego(string tipo, int nivel): Carta(tipo, nivel){};
		
	int get_nivel(){
		return nivel;
	}
	
	void muestra_Carta(string nombre_fuego, string tipo, int nivel){
	cout<<"\nCarta: "<<nombre_fuego<<"\nElemento: "<<tipo<<"\nNivel: "<<nivel<<endl;
	}		
};



/*
void Carta::crea_Carta() {

  //new crea el objeto en tiempo de ejecución para usar polimorfismo
  card[cartas] = new Carta(cartas, "Fuego", 1);
  cartas++;
  emp[nomina] = new Asalariado(nomina, "Alejandro", 1800);
  nomina++;
  emp[nomina] = new Asalariado(nomina, "Ivett", 1200);
  nomina++;
  emp[nomina] = new PorHora(nomina, "Claudia", 24, 400);
  nomina++;
  emp[nomina] = new PorHora(nomina, "Felipe", 20, 650);
  nomina++;
  emp[nomina] = new Practicante(nomina, "María", 10, 200);
  nomina++;
  emp[nomina] = new Practicante(nomina, "Ramon", 15, 200);
  nomina++;
  emp[nomina] = new Practicante(nomina, "Luisa", 20, 150);
  nomina++;
}
*/	
#endif
