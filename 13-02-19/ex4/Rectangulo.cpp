#include <iostream>
#include "Rectangulo.h"
using namespace std;

Rectangulo::Rectangulo() : superiorIzq(0, 0), inferiorDer(0, 0)
{
}

Rectangulo::Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer) : superiorIzq(xSupIzq, ySupIzq), inferiorDer(xInfDer, yInfDer)
{
}

Rectangulo::Rectangulo(Coordenada coord1, Coordenada coord2) : superiorIzq(coord1), inferiorDer(coord2)
{
}

void Rectangulo::imprimeEsq()
{

    cout << "Para la esquina superior izquierda.\n";
    cout << "x = " << superiorIzq.obtenerX() << " y = " << superiorIzq.obtenerY() << endl;
    cout << "Para la esquina inferior derecha.\n";
    cout << "x = " << inferiorDer.obtenerX() << " y = " << inferiorDer.obtenerY() << endl;
}

Coordenada Rectangulo::obtieneSupIzq()
{

    return superiorIzq;
}

Coordenada Rectangulo::obtieneInfDer()
{

    return inferiorDer;
}

double Rectangulo::obtieneArea()
{
    double alto, ancho;
    alto = obtieneSupIzq().obtenerY() - obtieneInfDer().obtenerY();
    ancho = obtieneInfDer().obtenerX() - obtieneSupIzq().obtenerX();
    return alto * ancho;
}