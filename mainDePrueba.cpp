//Main de prueba ya que mi main de todo el proyecto no está terminado al 100%

#include "ninja.h" // bibliotecas con objetos de mi proyecto.
#include "carta2.h"
#include "Baraja.h"

#include <iostream>
using namespace std;

int main(){
	
	Ninja ninja("Carlitos852", "Blanca");
	ninja.view_player();
	
	cout<<"\nAplicamos polimorfismo con el apuntador apun";
	Ninja *apun =  new Sensei("Fuego","Negra"); //Polimorfismo
    apun->view_player(); //Esto nos imprime el mensaje de la subclase
	
	cout<<"\nImprimo las cartas que se guardan en el arreglo dinamico\n";
	Baraja cartas1;
	cartas1.crea_cartas();
	cartas1.muestra_cartas();

}
