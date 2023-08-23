#pragma once
#include <iostream>
using namespace std;
class Zombi
{
private:
	//Propiedades privadas
	float posicionX;
	float posicionY;
	float direccionX;
	float direccionY;
	int vida = 100;
	int daño;
	float velocidadMovimiento;
	float velocidadAtaque;
	float alto;
	float ancho;
	string rutaArchivoImagen;
public:
	//propiedades publicas
	string nombre;
	string color;

public:
	//Constructores
	Zombi();
	Zombi(string RutaImagen);

	//Metodos propios
	void aparecer();
	void moverse();
	void atacar();
	void morir();

	//Metodos accesores
	int getVida() { return vida; }
	void setVida(int _vida) { vida = _vida; }

	int getDanio() { return daño; }//daño
	void setDanio(int _daño) { daño = _daño; }

	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }

	float getVelocidadAtaque() { return velocidadAtaque; }
	void setVelocidadAtaque(float _velocidadAtaque) { velocidadAtaque = _velocidadAtaque; }

};


