#include "shape.h"
#include "shape.cpp"

int main()
{
  Triangle t(0, 0);
  Rectangle r(0, 0);
  cout << "Entre com a base e altura do triangulo: ";
  cin >> t;
  cout << "\nEntre com a largura e altura do retangulo: ";
  cin >> r;

  cout << "\n\nO triangulo" << t << ".";
  cout << "\nO Retangulo" << r << ".";

  cout << "\n\nTringulo(area): " << t.area();
  cout << "\nRetangulo(area): " << r.area();
}
