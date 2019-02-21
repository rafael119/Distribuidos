#ifndef TEMPERATURA_H_
#define TEMPERATURA_H_
#define SK 273.15

class Temperatura
{
	private:
		double gkelvin;
	public:
		Temperatura(double = 300.15);
		void setTempKelvin(double);
		void setTempFahrenheit(double);
		void setTempCelsius(double);
		void muestraTemp(int);
		/*void muestraTempCel();
		void muestraTempFa();*/
};
#endif