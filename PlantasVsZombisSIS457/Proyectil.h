#pragma once
#include <iostream>
using namespace std;
class Proyectil
{
private:
	//Propiedades privadas
	float posicionX;
	float posicionY;
	float direccionX;
	float direccionY;
	int da�o;
	float tiempoCarga;
	float velocidadMovimiento;
	float alto;
	float ancho;
	string rutaArchivoImagen;
public:
	//Propiedades publicas
	string nombre;
public:
	//Constructores
	Proyectil();
	Proyectil(string RutaImagen);

public:
	//Metodos propios
	void cargaProyectil();
	void trayectoria();
	void colision();
	void destruir();

	//Metodos accesores
	int getDanio() { return da�o; }
	void setDanio(int _da�o) { da�o = _da�o; }

	float getTiempoCarga() { return tiempoCarga; }
	void setTiempoCarga(float _tiempoCarga) { tiempoCarga = _tiempoCarga; }

	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }

	float getVelocidadMovimiento() { return velocidadMovimiento; }
	void setVelocidadMovimiento(float _velocidadMovimiento) { velocidadMovimiento = _velocidadMovimiento; }
};



