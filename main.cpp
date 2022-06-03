/*Proyecto Integrador
Card-Jitsu
Fernando Josué Matute Soto
A00833375

Maestro: Benjamín Valdes
TC1030 Programación Orientado a Objetos

Main
*/

#include "ninja.h" // bibliotecas con objetos de mi proyecto.
#include "carta.h"

#include <iostream>
using namespace std;

int main(){
	//Polimorfismo
	Ninja ninja("Usuario de Prueba", "Amarilla");
	ninja.view_player();
		
	Ninja *apun =  new Sensei("Fuego","Negra"); //Polimorfismo
    apun->view_player(); //Esto nos imprime el mensaje de la subclase
    
	    
    //Sobre Carga
    Carta cartaN;
    cartaN.muestra_Carta("Nieve", 7);
    
    cFuego cartaFire;
    cartaFire.muestra_Carta("Chile Picante","Fuego", 12);
    
	return 0;	
}
