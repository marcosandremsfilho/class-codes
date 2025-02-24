#include "funcionario.h"
#include "funcionario.cpp"

funcionario func1("Marcos", 20, 3.50), func2("Mateus", 40, 5.50), func3("Lucas", 40, 13.50);

int main()
{
  func1.calcula_salario();
  func2.calcula_salario();
  func3.calcula_salario();

  func1.imprime_informacoes();
  func2.imprime_informacoes();
  func3.imprime_informacoes();
  cout << "\n";
  func1.imprime_salario();
  func2.imprime_salario();
  func3.imprime_salario();
}
