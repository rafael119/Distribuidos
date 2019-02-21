#ifndef COORDENADA_H
#define COORDENADA_H

class Coordenada
{
  private:
    double r;
    double an;

  public:
    Coordenada(double = 0, double = 0);
    double obtenerX();
    double obtenerY();
};

#endif