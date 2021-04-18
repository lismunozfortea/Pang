#include "freeglut.h"
#include "Caja.h"
Caja::Caja()
{

	suelo.setColor(30, 89, 69);
	techo.setColor(30, 89, 69);
	pared_dcha.setColor(32, 96, 61);
	pared_izq.setColor(32, 96, 61);

	pared_izq.setLimits(-10.0f, -10.0f, 0.0f, 15.0f);
	techo.setLimits(-10.0f, 10.0f, 15.0f, 15.0f);
	pared_dcha.setLimits(10.0f, 10.0f, 15.0f, 0.0f);
	suelo.setLimits(10.0f, -10.0f, 0.0f, 0.0f);
     
}
void Caja::Dibuja()
{
	suelo.Dibuja();
	techo.Dibuja();
	pared_izq.Dibuja();
	pared_dcha.Dibuja();

}