#include "calculador.h"

template<typename T>
void calculadora<T>::print() {
  cout << "Adicao: " << adicao() << "\n";
  cout << "Subtracao: " << subtracao() << "\n";
  cout << "Multiplicacao: " << multiplicacao() << "\n";
  cout << "Divisao: " << divisao() << "\n";
}

template<typename T>
T calculadora<T>::adicao() {
  return _operador_A + _operador_B;
}

template<typename T>
T calculadora<T>::subtracao() {
  return _operador_A - _operador_B;
}

template<typename T>
T calculadora<T>::multiplicacao() {
  return _operador_A * _operador_B;
}

template<typename T>
T calculadora<T>::divisao() {
  return _operador_A / _operador_B;
}
