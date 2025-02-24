#include "primeira.h"
#include "primeira.cpp"

int x1, x2;

int main()
{
  cout << "Entre com o primeiro numero: ";
  cin >> x1;
  cout << "\nEntre com o segundo numero: ";
  cin >> x2;
  PrimeiraClasse PrimeiraClasse(x1, x2);

  cout << "O teste de adicao e: " << PrimeiraClasse.soma() << endl;

  return 0;

}
