#include <iostream>
#include <windows.h>

using namespace std;

int i,j;

struct estudante
{
  string nome = "" ;
  int matricula;
  float desempenho;
};

estudante salvadados(estudante x)
{
  cout << "\nDigite o nome do(a) estudante: ";
  if(j > 0)  cin.ignore();
  getline(cin, x.nome);
  cout << "\nEntre com a matricula do mesmo: ";
  cin >> x.matricula;
  cout << "\nEntre com seu desempenho: ";
  cin >> x.desempenho;
  j++;
  return x;
}

void imprimedados(estudante x)
{
  cout << "Estudante " << i << ": " << x.nome << "(" << x.matricula << ") - Index: " << x.desempenho << "\n";
  i++;
}

int main()
{
  estudante a;
  estudante b;

  i = 1;

  a = salvadados(a);
  b = salvadados(b);
  cout << "Lista de desempenho:\n";
  imprimedados(a);
  imprimedados(b);

  system("pause");
  system("cls");
}
