#include "carro.h"
#include "carro.cpp"

int main()
{
  carro c1(20, 200);
  carro c2(30, 400);
  cout << fixed;
  cout.precision(2);

  cout << "Carro 1 abastecido com " << c1.get_comb() << " litros" << endl;
  cout << "Carro 2 abastecido com " << c2.get_comb() << " litros" << endl;
  cout << "Carro 1 percorreu " << c1.get_dis() << " km" << endl;
  cout << "Carro 2 percorreu " << c2.get_dis() << " km" << endl;
  cout << "Carro 1 com " << c1.combustivel() << "  litros ainda percorreu mais " << c1.distancia() << " km" << endl;
  cout << "Carro 2 com " << c2.combustivel() << " litros ainda percorreu mais " << c2.distancia() << " km" << endl;
}
