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
	int da�o;
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

	int getDanio() { return da�o; }//da�o
	void setDanio(int _da�o) { da�o = _da�o; }

	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }

	float getVelocidadAtaque() { return velocidadAtaque; }
	void setVelocidadAtaque(float _velocidadAtaque) { velocidadAtaque = _velocidadAtaque; }

};


