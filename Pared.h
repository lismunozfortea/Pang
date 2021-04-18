#pragma once
#include "Vector2D.h"
class Pared
{ private:
	
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
public:
	Vector2D limite1;
	Vector2D limite2;
	void Dibuja();
	void setColor(unsigned char r, unsigned char v, unsigned char a);
	Pared();
virtual ~Pared() {}
	void setLimits(float x1, float x2, float y1, float y2);
};

