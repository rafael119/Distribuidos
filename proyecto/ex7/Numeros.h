#ifndef NUMEROS_H
#define NUMEROS_H
#include <iostream>
using namespace std;

class Numeros
{
    private:
    int numero;
    bool valor;

    public:
    Numeros(int =0 , bool = true);
    int getNUM();
    bool getVal();

};

#endif