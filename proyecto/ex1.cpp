#include <iostream>
#include <string>
using namespace std;
double raiz(int num){
	double r = static_cast<double>(num);
 	double t;
 	while(t!=r){
 		t=r;
 		r = (static_cast<double>(1)/2)*((static_cast<double>(num)/r)+r); 
 	}
 	return r;
}

int main( ){
	int num;
	double r;

	cout << "Introduce el numero  calcular la raiz:" << endl;
	cin >> num;
 	cout <<endl;
 	r= raiz(num);
 	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
 	cout <<"resultdo: "<<r<<endl;

 	return 0;
}