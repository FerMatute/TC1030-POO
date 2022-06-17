/*
 * Proyecto Card-Jitsu
 * Fernando Josué Matute Soto
 * A00833375
 * 16/06/2022
 *
 * Esta clase define al objeto carta que son las cartas proporcionadas 
 * al jugador de manera aleatoria para que batalle contra el Sensei 
 * en el dojo.
 * 
 * Version 3.2
 */
 
#ifndef CARTA_H_
#define CARTA_H_
 
//Bibliotecas con objetos de mi proyecto
#include <string>
#include <sstream>

using namespace std;

//Declaramos la clase Carta
class Carta{
	  protected:
		string tipo;
		string nombre;
		int nivel;

	//Declaro los métodos que va a tener la clase Carta
  	public:
  		Carta(): nombre(""), nivel(1), tipo(""){} ; //Constructor por default
			Carta(string nom, int level, string tip):
			nombre(nom), nivel(level), tipo(tip) {};
		
		string get_nombre() {
			return nombre;
		}
		
		int get_nivel() {
			return nivel;
		}

		string get_tipo(){
			return tipo;
		}
		
		//Metodo abstracto
		virtual string to_string() = 0; 	
};

//Declaro objeto Carta_Fuego que hereda de Carta
class Carta_Fuego:public Carta{
	public:
		Carta_Fuego(): Carta("", 1, "Fuego") {}; //Constructor por default
		Carta_Fuego(string nombre, int nivel): Carta(nombre, nivel, "Fuego"){};
		
  int get_nivel() {
    return nivel;
  }
  string get_nombre() {
    return nombre;
  }

  string to_string();
};

/**
 * Metodo abstracto to_string imprime los atributos.
 *
 * concatena todos los atributos para poder imprimirlos
 *
 * @param
 * @return string con los atributos en un texto concatenado.
 */
 
string Carta_Fuego::to_string() {

  stringstream aux;
  aux << "Nombre: " << nombre << "\nElemento: " << tipo << "\nNivel: " << nivel<< "\n";
  return aux.str();	
};

//Objeto Carta_Agua que hereda de Carta
class Carta_Agua: public Carta {
  public:
  	Carta_Agua(): Carta("", 1, "Agua") {}; //Constructor por default
	Carta_Agua(string nombre, int nivel): Carta(nombre, nivel, "Agua") {};		
	
  string to_string();
};

/**
 * Metodo abstracto to_string imprime los atributos.
 *
 * concatena todos los atributos para poder imprimirlos
 *
 * @param
 * @return string con los atributos en un texto concatenado.
 */
 
string Carta_Agua::to_string() {

  stringstream aux;
  aux << "Nombre: " << nombre << "\nElemento: " << tipo << "\nNivel: " << nivel<< "\n";
  return aux.str();
}

//Objeto Carta_Nieve que hereda de Carta
class Carta_Nieve: public Carta {
  public:
  	
	Carta_Nieve(): Carta("", 1, "Nieve") {}; //Contructor por default
		Carta_Nieve(string nombre, int nivel): Carta(nombre, nivel, "Nieve"){};
			
	string to_string();
};

/**
 * Metodo abstracto to_string imprime los atributos.
 *
 * concatena todos los atributos para poder imprimirlos
 *
 * @param
 * @return string con los atributos en un texto concatenado.
 */

string Carta_Nieve::to_string() {

  stringstream aux;
  aux << "Nombre: " << nombre << "\nElemento: " << tipo << "\nNivel: " << nivel<< "\n";
  return aux.str();
}

#endif //CARTA_H_
