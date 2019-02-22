#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

void busca(string fuente,string pbuscar){
	
   int occurrencias = 0;
   string::size_type pos = 0;
   //la primea iteracion empieza en la posicion 0 y busca la primera coincidencia
    while ((pos = fuente.find(pbuscar, pos )) != std::string::npos) {
          ++ occurrencias;
          
			//indicamos que pos si incremente el tamaño de la palabra que buscamos
          pos += pbuscar.length();
		
   }
   cout <<"Numero de ocurrencias: "<< occurrencias << endl;
}

int main(){
	time_t t;
	int i;
	srand((unsigned) time(&t));
	string palabra="";
	string poli="IPN";
	
	
  
	for(i=0;i<10;i++){
		
		string letra,letra2,letra3;
	    letra = toupper('a' + rand()%26);
	    letra2 = toupper('a' + rand()%26);
		letra3 = toupper('a' + rand()%26);
		palabra.append(letra.c_str());
		palabra.append(letra2.c_str());
		palabra.append(letra3.c_str());
		palabra.append(" ");
		
	    cout<<"letra1: "<<letra<<" letra2: "<<letra2<<" letra3: "<<letra3<<endl;
	    
	}	
	cout<<palabra<<endl;
	busca(palabra.c_str(),poli.c_str());
	
	return 0;
}
