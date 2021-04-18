#include "Disparo.h"
#include "freeglut.h"
Disparo::Disparo()
{
	velocidad.y = 3;
	velocidad.x = 0;
	aceleracion.x = 0;
	aceleracion.y = 0;
	radio = 0.25f;
	origen.x = -5.0f;
	origen.y = 0.0f;

	

}
void Disparo::Dibuja()
{
	glColor3f(0.0f, 1.0f, 1.0f);
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();
	Dibuja_estela();

}
void Disparo::Mueve(float t)
{
	posicion.x = posicion.x + velocidad.x * t + 0.5f * aceleracion.x * t * t;
	posicion.y = posicion.y + velocidad.y * t + 0.5f * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;
}
void Disparo::Dibuja_estela()
{
	glColor3f(0.0f, 1.0f, 1.0f);
	glBegin(GL_LINES);
	glVertex2d(origen.x, origen.y);
	glVertex2d(posicion.x, posicion.y);
	glEnd();
}
