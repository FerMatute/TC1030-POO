/*Proyecto Integrador
Card-Jitsu
Fernando Josué Matute Soto
A00833375

Maestro: Benjamín Valdes
TC1030 Programación Orientado a Objetos

Clase Baraja
*/

#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "carta2.h"

using namespace std;

//const int Max_cartas = 36; //constante de tamaño de arreglo de cartas
const int max_cartas = 35;

//Definimos la clase baraja

class Baraja{
		private:
		Carta * card[max_cartas]; //defino como apuntador para poder utilizar polimorfismo
  		int cards;	
  		
  		public:
		Baraja(): cards(0) {};
	 	void crea_cartas();
	 	void muestra_cartas();
		
};

/*Creamos cartas de tipo Fuego, Agua y Nieve y los guardamos en card[ ] 
que es un arreglo de cartas
*/

void Baraja::crea_cartas(){

   //new crea el objeto en tiempo de ejecución para usar polimorfismo
  //Cartas de Fuego
  card[cards] = new Carta_Fuego("Fuego", 1);
  cards++;
  card[cards] = new Carta_Fuego("Fuego", 2);
  cards++;
  card[cards] = new Carta_Fuego("Fuego", 3);
  cards++;
  card[cards] = new Carta_Fuego("Fuego", 4);
  cards++;
  card[cards] = new Carta_Fuego("Fuego", 5);
  cards++;
  
  //Cartas de Agua
  card[cards] = new Carta_Agua("Agua", 1);
  cards++;
  card[cards] = new Carta_Agua("Agua", 2);
  cards++;
  card[cards] = new Carta_Agua("Agua", 3);
  cards++;
  card[cards] = new Carta_Agua("Agua", 4);
  cards++;
  card[cards] = new Carta_Agua("Agua", 5);
  cards++;
  
  //Cartas de Nieve
  card[cards] = new Carta_Nieve("Nieve", 1);
  cards++;
  card[cards] = new Carta_Nieve("Nieve", 2);
  cards++;
  card[cards] = new Carta_Nieve("Nieve", 3);
  cards++;
  card[cards] = new Carta_Nieve("Nieve", 4);
  cards++;
  card[cards] = new Carta_Nieve("Nieve", 5);
  cards++;
  
  }
  

void Baraja::muestra_cartas() {

  //Ciclo for que recorre el arreglo e imprime cada carta que existe dentro de el
  for (int i = 0; i < cards; i++)
    cout << card[i] -> to_string();
}
