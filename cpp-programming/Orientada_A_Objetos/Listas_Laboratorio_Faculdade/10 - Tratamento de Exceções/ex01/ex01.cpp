#include "DivisaoErro.h"
#include "DivisaoErro.cpp"

int main() {
  for (int i = 0; i < 2; i++) {
    int numerador, denominador;
    cout << "Dividindo inteiros: \n --------------------\n" << "Forneca o dividendo: ";
    cin >> numerador;
    cout << "\nForneca o divisor: ";
    cin >> denominador;
    try{
      cout << "\nResultado: " << conta(numerador, denominador);
    } catch(runtime_error &ex1) {
        cout << ex1.what();
    }
  }
}
