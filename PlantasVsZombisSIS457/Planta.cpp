#include "Planta.h"
Planta::Planta() {
	posici�nX = 0;
	posici�nY = 0;
	vida = 100;
	da�o = 7;
	velocidadAtaque = 1.5;
	alto = 1.5;
	ancho = 1.5;
	color = "Verde";
	rutaArchivoImagen = "planta.png";
}

Planta::Planta(string RutaImagen) {
	posici�nX = 2;
	posici�nY = 3;
	vida = 100;
	da�o = 11;
	velocidadAtaque = 2;
	alto = 1.5;
	ancho = 1.5;
	color = "Verde";
	rutaArchivoImagen = RutaImagen;
}

void Planta::posicionar() {
	posici�nX = 0;
	posici�nY = 0;
}
void Planta::atacar() {
	cout << "La Planta esta  atacando" << endl;
}
void Planta::morir() {
	cout << "Planta sin vida" << endl;
}