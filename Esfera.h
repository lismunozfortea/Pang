#pragma once
#include "Vector2D.h"
#include "freeglut.h"
class Esfera
{private:
	
	float radio;
	float x;
	float y;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
public:
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
	void Mueve(float t);
	void Dibuja();
	void setColor(unsigned char r, unsigned char v, unsigned char a);
	void setRadio(float r);
	void setPos(float ix, float iy);
	Esfera();
	virtual ~Esfera() {}


};

