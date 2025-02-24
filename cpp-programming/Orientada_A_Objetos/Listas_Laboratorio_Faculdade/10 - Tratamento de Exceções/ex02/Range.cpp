#include "Range.h"

void testa_valores(int valor) {
  if (valor > -1 && valor < 10)
    cout << "\nEste e um numero simples, no intervalo ideal.\n";
  else
    throw std :: out_of_range("\nErro: Numero fora dos limites.\n");
}
