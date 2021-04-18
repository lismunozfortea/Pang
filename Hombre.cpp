#include "Hombre.h"
#include "freeglut.h"
Hombre::Hombre()
{
	velocidad.x = 0;
	velocidad.y = 0;
	aceleracion.y = 0;
	aceleracion.x = 0;
	altura = 1.8f;

}
void Hombre::Dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glutSolidSphere(altura, 20, 20);
	glPopMatrix();
}
void Hombre::Mueve(float t)
{
	posicion.x = posicion.x + velocidad.x * t + 0.5f * aceleracion.x * t * t;
	posicion.y = posicion.y + velocidad.y * t + 0.5f * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;

}
