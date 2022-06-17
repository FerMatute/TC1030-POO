/*
 * Proyecto Card-Jitsu
 * Fernando Josué Matute Soto
 * A00833375
 * 16/06/2022
 *
 * Esta clase define al objeto Baraja que son las cartas proporcionadas 
 * al jugador y al sensei de manera aleatoria almacenadas en un arreglo 
 * para que sean utilizadas en el Card-Jitsu.
 * 
 * Version 3.2
 */
 
//Bibliotecas con objetos de mi proyecto
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include<ctime>

#ifndef BARAJA_H_
#define BARAJA_H_

#include "carta.h"

using namespace std;

//Defino como const la variable con el maximo numero de cartas
const int max_cartas = 18;

//Declaro la clase baraja
class Baraja{
	private:
		Carta* card[max_cartas]; //apuntador para guardar las cartas creadas por default
		bool es_jugador;
	
	int cards;
	int elemento;
	
	//Defino los metodos de la clase
	public:
		Baraja(): cards(0), es_jugador(true) {}; //Constructor por default
		Baraja(bool j): cards(0), es_jugador(j) {};
		Carta *cartas_U[3];
		
		
	 	void crea_cartas();
	 	void muestra_cartas(); //Metodo en el cual vamos aplicar sobrecarga
	 	void muestra_cartas(string tipo); //Metodo en el cual aplicamos sobrecarga
	 	void user_creaCarta_Fuego(string nombre, int nivel);
	 	void user_creaCarta_Agua(string nombre, int nivel);
	 	void user_creaCarta_Nieve(string nombre, int nivel);
	 	void asigna_cartas(int level_card);
	 	void muestra_cartasU();
};

/**
 * crea_cartas crea objetos de tipo Carta y los guarda en Cartas[]
 *
 * genera objetos de tipo Fuego, Agua y Nieve y los
 * guarda en el arreglo card[], un arreglo de cartas
 * Estas cartas son generadas por default
 *
 * @param
 * @return
 */
 
void Baraja::crea_cartas(){
	
	//new crea el objeto en tiempo de ejecución para usar polimorfismo
  //Cartas de Fuego
  card[cards] = new Carta_Fuego("Chile", 1);
  cards++;
  card[cards] = new Carta_Fuego("Chile Habanero", 2);
  cards++;
  card[cards] = new Carta_Fuego("Fuego", 3);
  cards++;
  card[cards] = new Carta_Fuego("Chiles Toreados", 4);
  cards++;
  card[cards] = new Carta_Fuego("Ghost Pepper", 5);
  cards++;
  card[cards] = new Carta_Fuego("Chocolate Caliente", 6);
  cards++;

  //Cartas de Agua
  card[cards] = new Carta_Agua("Agua", 1);
  cards++;
  card[cards] = new Carta_Agua("Agua Fria", 2);
  cards++;
  card[cards] = new Carta_Agua("Agua Congelada", 3);
  cards++;
  card[cards] = new Carta_Agua("Tsunami", 4);
  cards++;
  card[cards] = new Carta_Agua("Tornado de Agua", 5);
  cards++;
  card[cards] = new Carta_Agua("Playa", 6);
  cards++;
  
  //Cartas de Nieve
  card[cards] = new Carta_Nieve("Copo de Nieve", 1);
  cards++;
  card[cards] = new Carta_Nieve("Nieve", 2);
  cards++;
  card[cards] = new Carta_Nieve("Bola de Nieve", 3);
  cards++;
  card[cards] = new Carta_Nieve("Deslizador de Nieve", 4);
  cards++;
  card[cards] = new Carta_Nieve("Avalancha", 5);
  cards++;
  card[cards] = new Carta_Nieve("Fuerte Nevado", 6);
  cards++;
}

/**
 * muestra_cartas recorre el arreglo de cartas
 * y manda a llamar al metodo to_string() para imprimirlos
 *
 * @param
 * @return
 */
 
void Baraja::muestra_cartas(){
  for (int i = 0; i < cards; i++)
    cout << card[i] -> to_string();
}
 
/**
 * muestra_cartas(string_tipo) recorre el arreglo de cartas
 * de cirto tipo seleccionado por el usuario y manda a llamar 
 * al metodo to_string() para imprimirlos
 *
 * @param
 * @return
 */

void Baraja::muestra_cartas(string tipo){
  for (int i = 0; i < cards; i++) {
    if (card[i] -> get_tipo() == tipo)
      cout << card[i] -> to_string();
  }
}

/**
 * user_creaCarta_Fuego(string nombre, int nivel) 
 * le solicita al usuario el nombre y nivel de la carta que quiere
 * crear y se guarda en el arreglo de carta. Pero al momento de
 * jugar Card-Jitsu no las podra usar
 *
 * @param
 * @return
 */
 
void Baraja::user_creaCarta_Fuego(string nombre, int nivel){	
	card[cards] = new Carta_Fuego(nombre, nivel);
	cards++;
}

void Baraja::user_creaCarta_Agua(string nombre, int nivel){
	card[cards] = new Carta_Agua(nombre, nivel);
	cards++;
}

void Baraja::user_creaCarta_Nieve(string nombre, int nivel){
	card[cards] = new Carta_Nieve(nombre, nivel);
	cards++;
}

/**
 * asigna_cartas(int level_card) asigna las cartas al azar
 * tanto al usuario como al sensei. Se le ingresa el limite de nivel 
 * de las cartas que puede acceder el usuario segun su cinta. 
 * El Sensei tiene acceso a todas las cartas
 * Me base en un codigo que encontré en internet para crear el numero aleatorio
 * link: 
 * http://www.programacionenc.net/index.php?option=com_content&view=article&id=88:generar-numeros-aleatorios-sin-que-se-repitan&catid=31:general&Itemid=41
 * @param
 * @return
 */

void Baraja::asigna_cartas(int level_card){
	
	string elem;
	int level;
	int vector[6];
	srand(time(0)); // iniciando la semilla aleatoria


// Elige 3 cartas al azar del arreglo de cartas
for(int i=0;i<3;i++)
{
    // Genera numero aleatorio
    int num = 1 + rand()%level_card;

   if(i>0)
   {
      // Verifica si no se ha generado antes   
      for(int j=0; j < i; j++)     
          if(num==vector[j])
          {
             num = 1 + rand()%level_card;
             j=-1;                         
          }
    }

    
	vector [ i ] = num;    
	//Array para guardar las cartas asignadas
	cartas_U[i] = card[num];
}
	if(es_jugador)
	muestra_cartasU();
}

void Baraja::muestra_cartasU(){
  for (int i = 0; i < 3; i++){
  
	cout << "\n------------------------ Carta: "<<i + 1<<"----------------------------------" << endl;
    cout << cartas_U[i] -> to_string();
}
}

#endif //BARAJA_H_
