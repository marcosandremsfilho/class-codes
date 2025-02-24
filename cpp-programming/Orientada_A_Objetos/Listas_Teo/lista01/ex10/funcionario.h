#include <iostream>
#include <iomanip>

using namespace std;

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class funcionario
{
private:
  string _nome;
  float _hora, _valor, _salario;

public:
  funcionario(string, float, float);

  void calcula_salario();
  void imprime_informacoes();
  void imprime_salario();

};

#endif
