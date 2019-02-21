#include <iostream>
#include "PoligonoIrreg.h"
#include "Coordenada.h"
#include <vector>
using namespace std;

int main()
{	

	int n=100000;
	vector <PoligonoIrreg> x;
	//x.reserve(n);
    	for(int i=0;i<n;i++){
    		PoligonoIrreg p;
    		int nn=rand()%10;
    	for(int j=0;j<nn;j++){
    		p.anadeVertice(Coordenada(rand(), rand()));
    	}
    	x.push_back(p);
    	//p.imprimeVertices();
    }
    PoligonoIrreg p1;
    cout<< p1.getContV()<<endl;
    return 0;
}
