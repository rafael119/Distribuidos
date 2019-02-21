#include <iostream>
#include "PoligonoIrreg.h"
#include "Coordenada.h"
#include <vector>
using namespace std;

int main()
{	
        int n=10;
	 	PoligonoIrreg p;
        for(int c=0;c<n;c++){
    	   p.anadeVertice(Coordenada(((rand() % 100000) / 1000.0 - 100.0),((rand() % 100000) / 1000.0 - 100.0)));
        }   
    	
    	p.imprimeVertices();

    PoligonoIrreg p1;
    cout<< p1.getContV()<<endl;
    //p.imprimeVertices();
    return 0;
}
