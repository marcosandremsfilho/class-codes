#include <iostream>

using namespace std;

#ifndef RETANGULO_H
#define RETANGULO_H

class retangulo
{
private:
  float altura, largura;

public:
  retangulo();
  retangulo(float, float);
  void imprimeArea();
  void imprimePerimetro();
};

#endif
