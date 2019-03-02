#include <math.h>
#include <iostream>
#include "Numeros.h"
using namespace std;

Numeros::Numeros(int num,bool val):numero(num),valor(val)
{

}

int Numeros::getNUM(){
 return numero;
}

bool Numeros::getVal(){
    return valor;
}