ex7: ex7.cpp Primos.o
	g++ ex7.cpp Primos.o Numeros.o -o ex7
Primos.o: Primos.cpp Numeros.o Primos.h
	g++ Primos.cpp -c
Numeros.o: Numeros.cpp Numeros.h
	g++ Numeros.cpp -c