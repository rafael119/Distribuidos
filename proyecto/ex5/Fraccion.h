#ifndef FRACCION_H_
#define FRACCION_H_

class Fraccion
{
	private:
			int numerador;
			int denominador;
	public:
		Fraccion(int= 2,int = 3);
		void setFrac(int,int);
		int getNum();
		int getDen();		
};
	double getResu(Fraccion &);
	void getMin(Fraccion &);
#endif