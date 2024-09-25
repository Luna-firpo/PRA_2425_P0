#include "BrazoRobotico.h"

//Constructor

BrazoRobotico::BrazoRobotico(double x_ini, double y_ini, double z_ini):x(x_ini), y(y_ini), z(z_ini), objeto(false){}

//Metodos consultores 
double BrazoRobotico::Consultar_X() const {
	return x; 
}

double BrazoRobotico::Consutlar_Y() const {
	return y; 
}

double BrazoRobotico::Consultar_Z() const {
	return z; 
}

bool BrazoRobotico::Consultar_objeto() const {
	return objeto; 
}

//Metodos para coger, soltar y mover
void BrazoRobotico::coger(){
	objeto = true; 
}

void BrazoRobotico::soltar(){
	objeto = false; 
}

void BrazoRobotico::mover(double nuevo_X, double nuevo_Y, double nuevo_Z){
	x = nuevo_X; 
	y = nuevo_Y; 
	z = nuevo_Z; 
}

