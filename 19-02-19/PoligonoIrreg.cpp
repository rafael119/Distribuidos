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
	for (int i = 0; i < v.size(); i++)
		cout << "Coordenada " << i << ": (" << v[i].obtenerX() << "," << v[i].obtenerY() << ")" << endl;
}
int PoligonoIrreg::getContV(){
	return contarvertices;
}

