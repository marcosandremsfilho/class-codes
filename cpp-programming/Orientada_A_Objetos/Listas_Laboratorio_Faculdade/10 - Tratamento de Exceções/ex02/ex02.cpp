#include "Range.h"
#include "Range.cpp"

int main (){
  int numero;

  cout << "Insira um numero de 0 a 9: ";
  cin >> numero;
  try {
    testa_valores(numero);
  } catch (out_of_range &ex2) {
    cout << ex2.what();
  }
}
