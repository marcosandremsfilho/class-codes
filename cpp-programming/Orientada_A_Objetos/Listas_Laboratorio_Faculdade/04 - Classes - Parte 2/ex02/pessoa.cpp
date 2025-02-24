#include "pessoa.h"

pessoa::pessoa()
{
  nome = "indefinido";
  idade = 0;
  altura = 0.0;
}

pessoa::pessoa(string a, int b, float c)
{
  nome = a;
  idade = b;
  altura = c;
}
string pessoa::get_nome()
{
  return nome;
}

int pessoa::get_idade()
{
  return idade;
}

float pessoa::get_altura()
{
  return altura;
}

void pessoa::set_nome(string a)
{
  nome = a;
}

void pessoa::set_idade(int b)
{
  idade = b;
}

void pessoa::set_altura(float c)
{
  altura = c;
}
