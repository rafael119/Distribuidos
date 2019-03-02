#include <iostream>
#include "Primos.h"
#include "Numeros.h"
#include <vector>
using namespace std;

int main()
{	
        int n,inic=2;
        cout<<"ingresa el n a calcular:";
        cin>>n;
        cout<<n<< endl;
	 	Primos p;
        for(int i=2;i<=n;i++){
            p.anadeNum(Numeros(i,true));
        }   
           
    	
    	p.imprimeNum();

    return 0;
}