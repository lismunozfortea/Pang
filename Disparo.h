#pragma once
#include "Vector2D.h"
class Disparo
{ public:
	 Disparo();
	 virtual ~Disparo() {}
	float radio;
	Vector2D origen;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
	void Dibuja();
	void Mueve(float t);
	void Dibuja_estela();
};

