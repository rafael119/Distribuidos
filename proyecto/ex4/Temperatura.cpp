#include "Temperatura.h"
#include <iostream>
using namespace std;


Temperatura::Temperatura(double grados)
{
	gkelvin= grados;
}

void Temperatura::setTempKelvin(double grados){
	gkelvin = grados;
	return;
}
void Temperatura::setTempFahrenheit(double grados){
	gkelvin= ((((grados-32)*5)/9)+SK);
	return;
}
void Temperatura::setTempCelsius(double grados){
	gkelvin = grados+SK;
	return;
}
void Temperatura::muestraTemp(int op){
	switch(op){
		case 1:
				cout<<"Temperatura en grados K: "<< gkelvin<<endl;
		break;
		case 2:
				cout<<"Temperatura en grados C: "<< (gkelvin-SK) <<endl;
		break;
		case 3:
				cout<<"Temperatura en grados F: "<< ((gkelvin-SK)*((double)(9)/5)+32)<<endl;
		break;
	}
	return;
	
}
/*
void Temperatura::muestraTempCel(){
	cout<<"Temperatura en grados C: "<< (gkelvin-SK) <<endl;
	return;
}
void Temperatura::muestraTempFa(){
	cout<<"Temperatura en grados F: "<< ((gkelvin-SK)*((double)(9)/5)+32)<<endl;
	return;
}*/