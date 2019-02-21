ex3: ex3.cpp Rectangulo.o
	g++ ex3.cpp Rectangulo.o Coordenada.o -o ex3
ex2: ex2.cpp Rectangulo.o
	g++ ex2.cpp Rectangulo.o Coordenada.o -o ex2
ex1: ex1.cpp Rectangulo.o
	g++ ex1.cpp Rectangulo.o Coordenada.o -o ex1
Rectangulo.o: Rectangulo.cpp Coordenada.o Rectangulo.h
	g++ Rectangulo.cpp -c
Coordenada.o: Coordenada.cpp Coordenada.h
	g++ Coordenada.cpp -c