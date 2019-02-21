#include <iostream>
#include <vector>
#include "PoligonoIrreg.h"
using namespace std;


int PoligonoIrreg::contarvertices=0;
PoligonoIrreg::PoligonoIrreg(vector<Coordenada> vv)
{
	v = vv;
}

void PoligonoIrreg::anadeVertice(Coordenada c)
{
	contarvertices++;
	v.push_back(c);
}

void PoligonoIrreg::imprimeVertices()
{
	std::vector<Coordenada>::iterator i;
	for ( i = v.begin(); i != v.end(); i++)
		cout << "Coordenada " << ": (" << (*i).obtenerX()<<","<<(*i).obtenerY()<<") Magnitud: "<< (*i).obtenerM()<< endl;
}
int PoligonoIrreg::getContV(){
	return contarvertices;
}

