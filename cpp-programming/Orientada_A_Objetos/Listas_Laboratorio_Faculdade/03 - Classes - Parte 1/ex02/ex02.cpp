#include "retangulo.h"
#include "retangulo.cpp"

float x, y;

int main()
{
  cout << "Entre com a altura: ";
  cin >> x;
  cout << "Entre com a largura: ";
  cin >> y;

  retangulo retangulo(x, y);
  retangulo.imprimeArea();
  retangulo.imprimePerimetro();
}
