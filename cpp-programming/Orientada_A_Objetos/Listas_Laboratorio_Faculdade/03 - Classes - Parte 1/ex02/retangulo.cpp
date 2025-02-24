#include "retangulo.h"

retangulo :: retangulo(float a, float b)
{
  altura = a;
  largura = b;
}
void retangulo :: imprimeArea()
{
  float area;
  area =  altura*largura;
  cout << "\nArea: " <<area;
}
void retangulo :: imprimePerimetro()
{
  float perimetro;
  perimetro = 2*altura + 2*largura;
  cout << "\nPerimetro: " << perimetro;
}
