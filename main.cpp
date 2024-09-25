#include <iostream>
#include "BrazoRobotico.h"

int main (){
	//Crear una instancia de BrazoRobotico
	BrazoRobotico brazo(0,0,0); 

	//Mover el brazo a nuevas coordenadas
	brazo.mover(10,5,7); 
	std::cout << "Brazo movido a las coordenadas: (" << brazo.Consultar_X()<<"," << brazo.Consultar_Y() << "," << Consultar_Z() << ")\n"; 

	//Coger un objeto
	brazo.coger(); 
	std::cout << "El brazo está sujetando un objeto" << (brazo.estaSujetando() ? "Sí" : "No") <<"\n"; 

	//Soltar un objeto
	brazo.soltar(); 
	std::cout << "El brazo está sujetando un objeto: " << (brazo.estaSujetando() ? "Sí" : "No") << "\n"; 

	return 0; 
} 

