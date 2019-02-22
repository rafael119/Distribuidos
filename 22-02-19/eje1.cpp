#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string line;
	cin >> n;
	cin.ignore();
	getline(cin, line);
	cout<<line<<endl;
	//No funciona porque se queda en el buffer el 'enter' presionado antes y getline lee hasta el salto de linea 
	return 0;
}
