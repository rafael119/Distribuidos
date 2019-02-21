#include <iostream>
#include "Rectangulo.h"
#include "Coordenada.h"
using namespace std;

int main()
{
    Rectangulo rectangulo1(Coordenada(3.60,33.69),Coordenada(5.09,11.30));
    double ancho, alto;
    cout << "Calculando el área de un rectángulo dadas sus coordenadas en un plano cartesiano :\n ";
    rectangulo1.imprimeEsq();
    cout << "El área del rectángulo es = " << rectangulo1.obtieneArea() << endl;
    return 0;
}