#ifndef POLIGONOIRREG_H
#define POLIGONOIRREG_H
#include "Coordenada.h"
#include <vector>
#include <iostream>
using namespace std;

class PoligonoIrreg
{
private:
	vector<Coordenada> v;
	static int contarvertices;

public:
	PoligonoIrreg(vector<Coordenada> = {});
	void anadeVertice(Coordenada = Coordenada(0, 0));
	void imprimeVertices();
	static int getContV();
};

#endif