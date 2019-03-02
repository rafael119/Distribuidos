#ifndef PRIMOS_H
#define PRIMOS_H
#include "Numeros.h"
#include <vector>
#include <iostream>
using namespace std;

class Primos
{
private:
	vector<Numeros> v;

public:
	Primos(vector<Numeros> = {});
	void anadeNum(Numeros = Numeros(0,true));
	void imprimeNum();
};

#endif