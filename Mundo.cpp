#include "Mundo.h"
#include "freeglut.h"
#include <math.h>

void Mundo::rotarOjo()
{
	float dist=sqrt(x_ojo*x_ojo+z_ojo*z_ojo);
	float ang=atan2(z_ojo,x_ojo);
	ang+=0.05f;
	x_ojo=dist*cos(ang);
	z_ojo=dist*sin(ang);
}
void Mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,
		0.0, y_ojo, 0.0, //NOTESE QUE HEMOS CAMBIADO ESTO
		0.0, 1.0, 0.0); //PARA MIRAR AL CENTRO DE LA ESCENA
	esfera.Dibuja();
	caja.Dibuja();
	hombre.Dibuja();
	disparo.Dibuja();
	plataforma.Dibuja();
	bonus.Dibuja();
}

void Mundo::mueve()
{
	hombre.Mueve(0.025f);
	esfera.Mueve(0.025f);
	bonus.Mueve(0.025f);
	disparo.Mueve(0.025f);

}

void Mundo::inicializa()
{
	x_ojo = 0;
	y_ojo = 7.5;
	z_ojo = 30;

	esfera.setColor(0, 0, 255);
	esfera.setRadio(1.5f);
	esfera.setPos(2, 4);
	bonus.posicion.x = 5.0f;
	bonus.posicion.y = 5.0f;
	disparo.posicion.x = -5.0f;
	disparo.posicion.y = 0.0f;
	plataforma.limite1.x = -5.0f;
	plataforma.limite2.x = 5.0f;
	plataforma.limite1.y = 9.0f;
	plataforma.limite2.y = 9.0f;
}

void Mundo::tecla(unsigned char key)
{

}
