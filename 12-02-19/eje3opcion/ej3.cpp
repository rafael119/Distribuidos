#include "Fecha.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Fecha a, b, c(21, 9, 1973);
    int fechas,viejo;
    srand (time(NULL));
    cout<< "cuantas fechas quieres: ";
    cin >> fechas;
    cout<<endl;
    Fecha * buffer;
    buffer = (Fecha*) malloc (fechas*sizeof(Fecha));
   
    for(int i=0;i<fechas;i++){
        buffer[i].inicializaFecha((rand()%32),(rand()%12+1),(rand()%2019));
    }
    for(int i =0;i<fechas;i++){
        buffer[i].muestraFecha();
        if(i<fechas-1){
        viejo= masVieja(&buffer[i],&buffer[i+1]);
        cout<<"viejo "<<i<<": " << viejo<<endl; 
        }
    }
    return 0;
}
