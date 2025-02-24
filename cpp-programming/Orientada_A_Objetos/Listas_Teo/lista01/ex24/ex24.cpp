#include "fracao.h"
#include "fracao.cpp"

int main()
{
  fracao fracao1, fracao2;
  cout << "Para inserir, insira primeiro o numerador, tecle enter e depois insira o denominador e aperte enter novamente. ";
  cout << "\nPrimeira fracao: ";
  cin >> fracao1;

  cout << "\nSegunda fracao: ";
  cin >> fracao2;

  cout << "\n------------------------------ OPERACOES ------------------------------ ";
  cout << "\nSoma das fracoes: " << fracao1 + fracao2;
  cout << "\nSubtracao das fracoes: " << fracao1 - fracao2;
  cout << "\nMultiplicacao das fracoes: " << fracao1 * fracao2;
  cout << "\nDivisao das fracoes: " << fracao1 / fracao2;
  cout << "\n------------------------------------------------------------------------";
  cout << "\n\n----------------------------- COMPARACOES ----------------------------- ";
  if(fracao1 > fracao2)
    cout << "\n\nA primeira fracao e maior que a segunda!";
  else if(fracao1 < fracao2)
    cout << "\n\nA primeira fracao e menor que a segunda!";
  else
    cout << "\n\nAs duas equacoes sao iguais!";
  cout << "\n\n------------------------------------------------------------------------";

}
