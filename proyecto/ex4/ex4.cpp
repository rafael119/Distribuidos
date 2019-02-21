#include "Temperatura.h"
#include <iostream>
using namespace std;
int main(){
		Temperatura a, b, c;
		//a.setTempCelsius(10);
		//a.muestraTempCel();
		a.muestraTemp(1);
		a.muestraTemp(2);
		a.muestraTemp(3);
		cout<<"----"<<endl;
		b.setTempKelvin(230.20);
		b.muestraTemp(1);
		b.muestraTemp(2);
		b.muestraTemp(3);
		/*b.muestraTempFa();
		b.muestraTempCel();*/
		cout<<"----"<<endl;
		c.setTempFahrenheit(80);
		//c.muestraTempFa();
		c.muestraTemp(1);
		c.muestraTemp(2);
		c.muestraTemp(3);
}
