#include "Fecha.h"
#include <time.h>
#include <stdio.h>
#include <iostream>
using namespace std;

//int masVieja(Fecha fecha1, Fecha fecha2);
//int masViejaR(Fecha &fecha1, Fecha &fecha2);
int masViejaRR(Fecha *fecha1, Fecha *fecha2);

int main(int argc, char const *argv[])
{
    int n;
    Fecha a(1, 1, 2018), b(1, 1, 2018);
    a.muestraFecha();
    b.muestraFecha();
    cout << "Ingresa el valor de n: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        Fecha c(rand() % 31 + 1, rand() % 12 + 1, rand() % 2019), d(rand() % 31 + 1, rand() % 12 + 1, rand() % 2019);
        c.muestraFecha();
        d.muestraFecha();
        /*masVieja(c, d);
        masViejaR(c,d);*/
        cout<<masViejaRR(&c,&d)<<endl;
    }
    return 0;
}
/*
int masVieja(Fecha fecha1, Fecha fecha2)
{
    return fecha1.convierte() < fecha2.convierte() ? -1 : (fecha1.convierte() > fecha2.convierte() ? 1 : 0);
}

int masViejaR(Fecha &fecha1, Fecha &fecha2)
{
    return fecha1.convierte() < fecha2.convierte() ? -1 : (fecha1.convierte() > fecha2.convierte() ? 1 : 0);
}*/
int masViejaRR(Fecha *fecha1, Fecha *fecha2){
    return fecha1->convierte() < fecha2->convierte() ? -1 : (fecha1->convierte() > fecha2->convierte() ? 1 : 0);
}