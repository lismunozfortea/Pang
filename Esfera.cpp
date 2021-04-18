
#include "Esfera.h"
#include "freeglut.h"
Esfera::Esfera()
{
	setColor(255, 255, 255); //blanco
	setRadio(3.0f);
	velocidad.x = 2;
	velocidad.y = 2;
	aceleracion.y = -9.8f;
	aceleracion.x = 2.0f;
	setPos(0.0, 5.0f);
}
void Esfera::setColor(unsigned char r, unsigned char v, unsigned char a) {
	rojo = r;
	verde = v;
	azul = a;

}
void Esfera::setRadio(float r)
{
	if (r < 0.1f)
		r = 0.1f;
	radio = r;
}
void Esfera::setPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
void Esfera::Mueve(float t)
{ 
	posicion.x = posicion.x + velocidad.x * t + 0.5f * aceleracion.x * t * t;
	posicion.y = posicion.y + velocidad.y * t + 0.5f * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;

}
void Esfera::Dibuja()
{
	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}

