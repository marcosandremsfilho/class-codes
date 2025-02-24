#include "funcionario.h"

funcionario :: funcionario(string nome, float hora, float valor)
{
  _nome = nome;
  _hora = hora;
  _valor = valor;
}


void funcionario :: calcula_salario()
{
  _salario = _hora * _valor;
}

void funcionario :: imprime_informacoes()
{
  cout << "\n" << _nome << " trabalhou ";
  cout << _hora << " horas a R$";
  cout << _valor << " por hora\n";
}

void funcionario :: imprime_salario()
{
  cout << "\nO salario de " << _nome << " foi de R$" << _salario;
}
