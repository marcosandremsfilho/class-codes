#include "calculador.cpp"

int main(){
  int a, b;
  float c, d;

  cout << "calculadora de inteiros: \n";
  cout << "-----------------------------\n";
  cout << "entre com os operandos: \n";
  cout << "Operando 1: ";
  cin >> a;
  cout << "\nOperando 2: ";
  cin >> b;

  cout << "[Resultados]\n";

  calculadora<int> inteiros(a, b);
  inteiros.print();

  cout << "\n\ncalculadora de floats: \n";
  cout << "-----------------------------\n";
  cout << "entre com os operandos: \n";
  cout << "Operando 1: ";
  cin >> c;
  cout << "\nOperando 2: ";
  cin >> d;

  cout << "[Resultados]\n";

  calculadora<float> decimais(c, d);
  decimais.print();

}
