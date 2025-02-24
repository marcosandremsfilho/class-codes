#include "primeira.h"
#include "primeira_lista.cpp"

int main ()
{
  while (x != 4)
  {
    system("cls");
    cout << " 1: Converter Graus em Radianos \n 2: Converter Reais em Dolares \n ";
    cout << "3: Entrar com seu endereco completo \n 4: Sair do Programa \n ";
    cout << "Selecione uma opcao(1-4): \n";
    cin >> x;
    switch(x)
    {

      case 1:
      grausRadiano();

      break;

      case 2:
      ConversorDolar();

      break;

      case 3:
      endereco();

      break;

      case 4:
      break;

      default:
      cout << "Escolha incorreta \n";
      system("pause");

    }
  }
}
