#include <iostream>
#include <vector>
#include "Primos.h"
using namespace std;


Primos::Primos(vector<Numeros> vv)
{
	v = vv;
}

void Primos::anadeNum(Numeros c)
{
	
	v.push_back(c);
}

void Primos::imprimeNum()
{
	std::vector<Numeros>::iterator i;
	for ( i = v.begin(); i != v.end(); i++)
		cout << "Numeros " << ": (" << (*i).getNUM()<<","<<(*i).getVal()<<")"<< endl;
}


