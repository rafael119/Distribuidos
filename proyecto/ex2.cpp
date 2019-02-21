#include <iostream>
using namespace std;
#define GRA 9.8
int main(){
	int seg;
	double vf,vi=0;
	double altura;
	cout<< "introduce el tiempo de caida en segundos: ";
	cin >> seg;
	cout<<endl;
	vf=(GRA*seg)+vi;
	cout<<"vf: "<<vf<<"m/s"<<endl;
	altura= static_cast<double>(vf*vf)/(static_cast<double>(2)*GRA);
	cout<< "altura: "<<altura<<"m"<<endl;

}