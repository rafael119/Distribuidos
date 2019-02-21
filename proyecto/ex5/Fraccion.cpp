#include "Fraccion.h"
#include <iostream>
using namespace std;

Fraccion::Fraccion(int nn,int dd):numerador(nn),denominador(dd)
{
	if(denominador<=0){
		cout<<"Valor invalido para denominador"<<endl;
		exit(1);
	}
}
int Fraccion::getNum(){
	return numerador;
}
int Fraccion::getDen(){
	return denominador;
}
double getResu(Fraccion &fraccion1){

	return static_cast<double>(fraccion1.getNum())/fraccion1.getDen();
}
void getMin(Fraccion &fraccion1){
	int nn= fraccion1.getNum();
	int dd= fraccion1.getDen();

	if((fraccion1.getDen())==1)
	{
		cout<<nn<<"/"<<dd<<endl;
	}
	int a=2;
	while(a<=nn){
		if((dd%a)==0 && (nn%a)==0){
			dd=dd/a;
			nn=nn/a;
		}else{
			a++;
		}
	}
	cout << nn<<"/"<<dd<<endl;

}