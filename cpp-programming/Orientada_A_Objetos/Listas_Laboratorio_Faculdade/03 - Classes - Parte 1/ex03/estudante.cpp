#include "estudante.h"

int media;

estudante :: estudante(string a, int b, int c)
{
  nome = a;
  nota1 = b;
  nota2 = c;
}

void estudante :: calcula_media()
{
  media = (nota1 + nota2)/2;
}

void estudante :: imprime()
{
  cout << "O aluno " << nome << " tem notas " << nota1 << " e " << nota2 << ", com media " << media << ".";
}
