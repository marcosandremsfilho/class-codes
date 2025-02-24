#include <iostream>

using namespace std;

#ifndef CALCULADORA_H
#define CALCULADORA_H

template<typename T>
class calculadora{
private:
  T _operador_A, _operador_B;

public:
  calculadora(T operador_A, T operador_B) : _operador_A{operador_A}, _operador_B{operador_B} { }
  ~calculadora() { }

  void print();

  T adicao();
  T subtracao();
  T multiplicacao();
  T divisao();
};

#endif
