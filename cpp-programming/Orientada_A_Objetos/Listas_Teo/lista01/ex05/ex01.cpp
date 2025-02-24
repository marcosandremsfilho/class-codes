#include "quadratica.h"
#include "quadratica.cpp"


float a, b, c;

int main()
{
  cout << "Entre com os valores A, B, C para a sua equacao do segundo grau: \n";
  cout << "Entre com o valor de: \n A = ";
  cin >> a;

  while(a == 0)
  {
    cout << "\nValor invalido para 'A' por favor inserir outro:  ";
    cin >> a;
  }

  cout << "\n B = ";
  cin >> b;
  cout << "\n C = ";
  cin >> c;

  quadratica quadratica(a, b, c);
  quadratica.delta();
  quadratica.equacao();
  quadratica.print();
}
