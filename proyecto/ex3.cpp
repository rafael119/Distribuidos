#include <iostream>
using namespace std;

int main(){
	int tiempo;
	int minutos;
	int segundos;
	int horas;
	cout<<"Dame el valor en segundos: ";
	cin>>tiempo;
	cout<<endl;
	if(tiempo%3600==0){
		horas=tiempo/3600;
	}else{
		horas=tiempo/3600;
		tiempo=tiempo%3600;

		if(tiempo%60==0){
			minutos=tiempo/60;

		}else{
			minutos=tiempo/60;
			tiempo= tiempo%60;
			segundos=tiempo;
		}
	}

	cout<<horas<<" Horas "<<minutos<<" minutos "<<segundos<<" segundos "<<endl;
}