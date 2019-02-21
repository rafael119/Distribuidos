#include "Fraccion.h"
#include <iostream>
using namespace std;
int main(int args,char const *argv[]){
	Fraccion a,b(18,15);
	double resu= getResu(a);
	cout<< resu<< endl;
	getMin(b);
}