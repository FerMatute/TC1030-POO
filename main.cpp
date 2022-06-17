/*
 * Proyecto Card-Jitsu
 * Fernando Josué Matute Soto
 * A00833375
 * 16/06/2022
 *
 * Este es mi proyecto para la clase TC1030 Programación Orientado a
 * Objetos.Este es el main el cual es interactivo con el usuario,
 * en el se puede crear ninja (usuario), crear cartas y ver cartas y
 * lo más importante...luchar Card-Jitsu.
 */
 
//Bibliotecas con objetos de mi proyecto
#include "ninja.h" 
#include "carta.h"
#include "baraja.h"
#include "dojo.h"

#include <iostream>
using namespace std;

int main(){
	
	//Creo los objetos que voy a utilizar
	Baraja cartas;
	Baraja u, s;
	Ninja ninja;
	Baraja cf, ca, cn;
	string nom;
	int level;
	Dojo dojo;
	
	int a, b, c;
	
	cout<<"\n1. Crear Ninja\n";
	cout<<"2. Mostrar Cartas del Juego\n";
	cout<<"3. Crea Cartas\n";
	cout<<"4. Luchar Card-Jitsu\n";
	cout<<"5. Salir\n";
	cout<<"\nIngresa tu accion: ";
	cin>>a;
	
	switch(a){
		
		case 1:
			cout<<"\nBienvenido, nuevo usuario\n";
			cout<<"\nCargando Usuario nuevo...\n";
			ninja.crea_jugador();
			main();
			break;
			
		case 2:
			cout<<"\nDesplegando las cartas del juego";
			cout<<"\nCargando cartas...\n";
			cartas.crea_cartas();
			cartas.muestra_cartas();
			main();
			break;
			
		case 3:
			cout<<"\nPreparate para crear tu carta\n";
			cout<<"\nNota: Las cartas no podrán ser utilizadas en las batallas contra el Sensei\n";
			cout<<"\nQue tipo de carta quieres crear? ";
			cout<<"\n1. Carta de Fuego\n";
			cout<<"\n2. Carta de Agua\n";
			cout<<"\n3. Carta de Nieve\n";
			cout<<"\nIngresa tu accion: ";
			cin>>c;
			switch(c){
				case 1:
					cout<<"\nSeleccionaste Carta de Fuego"<<endl;
					cout<<"\nIngresa el nombre de la carta (Solo una palabra): ";
					cin>>nom;
					cout<<"\nIngresa el nivel de la carta: ";
					cin>>level;
					
					cf.user_creaCarta_Fuego(nom, level);
					cout<<"\n*******************************************************************************\n";
					cout<<"Cartas de Fuego: \n";
					cf.muestra_cartas("Fuego");
					cout<<"\n";
					return main();
					break;
				
				case 2:
					cout<<"\nSeleccionaste Carta de Agua"<<endl;
					//crear obj de fuego
					//metodo para crear carta de fuego
					cout<<"\nIngresa el nombre de la carta (Solo una palabra): ";
					cin>>nom;
					cout<<"\nIngresa el nivel de la carta: ";
					cin>>level;
					
					ca.user_creaCarta_Agua(nom, level);
					cout<<"\n*******************************************************************************\n";
					cout<<"Cartas de Agua: \n";
					ca.muestra_cartas("Agua");
					cout<<"\n";
					return main();
					break;
					
				case 3:
					cout<<"\nSeleccionaste Carta de Nieve"<<endl;
					//crear obj de nieve
					//metodo para crear carta de nieve
					cout<<"\nIngresa el nombre de la carta (Solo una palabra): ";
					cin>>nom;
					cout<<"\nIngresa el nivel de la carta: ";
					cin>>level;
					
					cn.user_creaCarta_Nieve(nom, level);
					cout<<"\n*******************************************************************************\n";
					cout<<"Cartas de Nieve: \n";
					cn.muestra_cartas("Nieve");
					cout<<"\n";
					return main();
					break;
			}
			
		case 4:
			cout<<"\nPreparate para el Card-Jitsu\n";
			cout<<"\nContra que Sensei deseas luchar? ";
			cout<<"\n"<<"\n1. Sensei de Fuego\n";
			cout<<"\n2. Sensei de Agua\n";
			cout<<"\n3. Sensei de Nieve\n";
			cout<<"\nIngresa tu accion: ";
			cin>>b;
			switch(b){
				case 1:
					cout<<"\nSeleccionaste el Sensei de Fuego, preparate..."<<endl;
					cout<<"Cargando Dojo...\n"<<endl;
					cout<<"Hola, Soy el Sensei de Fuego\nPreparate para nuestro duelo";
					dojo.lucha_Card_Jitsu();
					//u.cartas_U;
					return main();
					break;
				
				case 2:
					cout<<"\nSeleccionaste el Sensei de Agua, preparate..."<<endl;
					cout<<"Cargando Dojo...\n"<<endl;
					cout<<"Hola, Soy el Sensei de Agua\nPreparate para nuestro duelo\n";
					dojo.lucha_Card_Jitsu();
					return main();
					break;
					
				case 3:
					cout<<"\nSeleccionaste el Sensei de Nieve, preparate..."<<endl;
					cout<<"Cargando Dojo...\n"<<endl;
					cout<<"Hola, Soy el Sensei de Nieve\nPreparate para nuestro duelo";
					dojo.lucha_Card_Jitsu();	
					return main();
					break;
			}	
		case 5:
		cout<<"\nGracias por jugar Card-Jitsu!\nTe esperamos pronto!";
		break;
	}
	return 0;	
}
