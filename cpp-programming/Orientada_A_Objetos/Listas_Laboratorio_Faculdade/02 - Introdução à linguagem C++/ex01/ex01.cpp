//Marcos André Magalhães de Sousa Filho, 2020002875

#include <iostream>
#include <windows.h>

using namespace std;

int a;
int *b = nullptr;

inline int cube (int a)
{
  return a*a*a;
}

int main()
{
  cout << "Entre um numero inteiro: ";
  cin >> a;
  b = &a;
  cout << "\nValor apontado pelo ponteiro: " << *b << "\n";
  cout << "Endereco de memoria apontado: " << &a << "\n";
  cout << "Endereco de memoria do ponteiro: " << b << "\n";

  cout << "\nO cubo de " << a << " e: " << cube(a) << "\n";
  system("pause");
  system("cls");
}
