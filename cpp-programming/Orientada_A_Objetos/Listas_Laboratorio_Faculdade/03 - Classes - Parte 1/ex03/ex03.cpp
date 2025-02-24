#include "estudante.h"
#include "estudante.cpp"

string n = "";
int n1, n2;

int main()
{
  cout << "Nome do aluno: ";
  getline(cin, n);
  cout << "Nota 1: ";
  cin >> n1;
  cout << "Nota 2: ";
  cin >> n2;
  estudante estudante(n , n1, n2);
  estudante.calcula_media();
  estudante.imprime();
}
