#include <iostream>
#include "Coordenada.h"
#include <cmath>
using namespace std;

Coordenada::Coordenada(double radio, double angulo) : r(radio), an(angulo)
{
}
double Coordenada::obtenerX()
{   
	double x= r*cos(an);
	cout<< x<<endl;
    return x;
}

double Coordenada::obtenerY()
{
	double y=r*sin(an);
	cout<< y<<endl;
    return y;
}