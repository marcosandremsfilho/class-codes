#include "primeira.h"

PrimeiraClasse :: PrimeiraClasse(int x1, int x2)
{
  num1 = x1;
  num2 = x2;
  cout << "numeros inicializados! \n";
}

int PrimeiraClasse :: soma()
{
  return num1 + num2;
}

PrimeiraClasse :: ~PrimeiraClasse()
{
  cout << "\nObjeto destruido!";
}
