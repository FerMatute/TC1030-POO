/*
 * Proyecto Card-Jitsu
 * Fernando Josué Matute Soto
 * A00833375
 * 16/06/2022
 *
 * Esta clase define al objeto Dojo que es donde
 * se juega Card-Jitsu con las cartas asignadas aleatoriamente 
 * al ninja y al sensei
 */
 
//Bibliotecas con objetos de mi proyecto
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#ifndef DOJO_H_
#define DOJO_H_

#include "baraja.h"
#include "ninja.h"

using namespace std;

class Dojo{
	protected:
		string nombre;
		
	//Declaro los metodos de la clase	
	public:
		void lucha_Card_Jitsu();
};
 
/**
 * lucha_Card_Jitsu() es donde mediante las cartas obtenidas al azar
 * se lucha contra el Sensei (cartas y elecciones aleatorias).
 * El Card-Jitsu está diseñado ahora mismo en un modo de mejor de 3,
 * es decir, el primero que gane dos rounds gana. 
 * Para la logica del juego me base en un codigo que encontré en internet
 * que era de piedra papel o tijera
 * Agrego el link del repositorio en Github: 
 * https://gist.github.com/Zinth/1473104
 * 
 * @param
 * @return
 */
 
 void Dojo::lucha_Card_Jitsu(){
 	
 	//Definimos variables
 	int level, levelS;
	string elem, elemS;
	Baraja user;
	Baraja sensei;
	
	//Asignamos las barajas de cartas que tendra el jugador y el sensei
	user.crea_cartas();
	user.asigna_cartas(10);
	user.cartas_U;
	
	cout<<"\n*******************************Cartas Sensei*****************************************";
	sensei.crea_cartas();
	sensei.asigna_cartas(16);
	sensei.cartas_U;
	
	//Usamos char para que sea una repuesta de si (y) o no (n)
	char ch;
	
	// Declaro mis variables con los resultados
    int win = 0;
    int lose = 0;
	
	//Iniciamos el loop para jugar
	do{
		int choice;
	//Imprimo el titulo
	cout << "--------------------------------------" << endl;
    cout << "-- Prepara tus cartas para el Card-Jitsu --" << endl;
    cout << "--------------------------------------" << endl;
	
	//Solicitamos al usuario su eleccion
	//user.asigna_cartas(10);
	cout << "\n1 para Carta 1, 2 para Carta 2, 3 para Carta 3:" << endl;
    cin >> choice;
    
    /*Selecionamos un numero al azar para asignar cartas al azar al Sensei 
	y que eliga una carta para jugar
	*/
    int choiceS = rand() % 3 + 1;
    cout<<"\nEleccion del Sensei: "<<choiceS;
    
	//Obtenemos el elemento y el nivel de la Carta elegida por el usuario
	elem = user.cartas_U[choice]->get_tipo();
	level = user.cartas_U[choice]->get_nivel();
	//cout<<"\nSeleccion usuario: "<<user.cartas_U[choice]->to_string();
	
	//Obtenemos el elemento y el nivel de la Carta al azar por el Sensei
	elemS = sensei.cartas_U[choiceS]->get_tipo();
	levelS = sensei.cartas_U[choiceS]->get_nivel();
	
	//Evaluamos
	if(elem == "Fuego" && elemS == "Fuego"){
	cout<<"\nAmbos seleccionaron Fuego";
	//Evaluamos el nivel de la carta en caso de empate
		if(level > levelS){
			cout<<"\nGanaste";
			win++;
		}
		else{
			cout<<"\nPerdiste";
			cout<<"\nPreparate para el siguiente round\n";
			lose++;
		}
	}
else if(elem == "Fuego" && elemS == "Agua"){
	cout<<"\nPerdiste el round";
	lose++;
}

else if(elem == "Fuego" && elemS == "Nieve"){
	cout<<"\nGanaste el round";
	win++;
}

//Cuando se selecciona una carta de Agua
else if(elem == "Agua" && elemS == "Fuego"){
	cout<<"\nGanaste el round";
	win++;
}

else if(elem == "Agua" && elemS == "Agua"){
	cout<<"\nAmbos seleccionaron agua";
	//Evaluamos el nivel de la carta en caso de empate	
	if(level > levelS){
		cout<<"\nGanaste";
		win++;
	}
	else{
		cout<<"\nPerdiste";
		cout<<"\nPreparate para el siguiente round\n";
		lose++;
	}
}

else if(elem == "Agua" && elemS == "Nieve"){
	cout<<"\nPerdiste el round";
	lose++;
}

//Cuando se selecciona la carta de Nieve
else if(elem == "Nieve" && elemS == "Agua"){
	cout<<"\nGanaste el round";
	win++;
}

else if(elem == "Nieve" && elemS == "Fuego"){
	cout<<"\nPerdiste el round";
	lose++;
}

else if(elem == "Nieve" && elemS == "Nieve"){
	cout<<"\nAmbos nieve";
	//Evaluamos el nivel de la carta en caso de empate	
	if(level > levelS){
		cout<<"\nGanaste";
		win++;
	}
	else{
		cout<<"\nPerdiste";
		cout<<"\nPreparate para el siguiente round\n";
		lose++;
	}
}

else{
	cout<<"\nNo seleccionaste 1, 2 o 3";
	}

	//Mostramos como va el resultado del juego
	cout << "\nWins: " << win << endl;
    cout << "Losses:" << lose << endl;
    cout << "\nDeseas jugar otra vez? Y/N" << endl;
    cin >> ch;
    system("CLS");
    }while(win != 2 || lose!= 2);
		if(win = 2){
			cout<<"\nFelicidades ganaste";
		}
		//else{
		//	cout<<"\nPerdiste, intentalo de nuevo";
		//}
}

#endif //DOJO_H_
