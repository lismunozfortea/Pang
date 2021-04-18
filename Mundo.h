#pragma once
#include "Esfera.h"
#include "Caja.h"
#include "Bonus.h"
#include "Hombre.h"
#include "Disparo.h"

class Mundo
{
public: 
	Esfera esfera;
	Caja caja;
	Pared plataforma;
	Bonus bonus;
	Hombre hombre;
	Disparo disparo;

	void tecla(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mueve();
	void dibuja();

	float x_ojo;
	float y_ojo;
	float z_ojo;
};
