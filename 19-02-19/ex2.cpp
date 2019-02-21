#include <iostream>
#include "PoligonoIrreg.h"
#include "Coordenada.h"
#include <vector>
using namespace std;

int main()
{	

	    int nn=rand()%100;
	 	PoligonoIrreg p;
       
    	for(int j=0;j<nn;j++){
    		p.anadeVertice(Coordenada(rand(),rand()));
            
    	}
    	
    	p.imprimeVertices();

    PoligonoIrreg p1;
    cout<< p1.getContV()<<endl;
    //p.imprimeVertices();
    return 0;
}
