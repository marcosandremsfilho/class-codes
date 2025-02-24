#include "cliente.h"

void Cliente :: imprime()
{
  cout << "\nNome do cliente: " << _nome;
  cout << "\nIdade do cliente: " << _idade;
  cout << "\nEndereco do cliente: " << _endereco;
}

float Conta :: saque (float saque)
{
  float novoSaldo;
  if (_saldo < saque )
    cout << "\nSaldo insuficiente";
  else
  {
    novoSaldo = _saldo - saque;
    _saldo = novoSaldo;
  }
  return _saldo;
}

float Conta :: deposito (float deposito)
{
  float novoSaldo;
  novoSaldo = _saldo + deposito;
  _saldo = novoSaldo;
  return _saldo;
}

void Conta :: imprime()
{
  cout << "\n----------------------------";
  cout << "\nNumero da conta: " << _numero;
  cout << "\nAgencia: " << _agencia;
  cout << "\nSaldo (R$): " << _saldo;
  cout << "\n----------------------------";
}

float ContaEspecial :: saque (float saque)
{
  float novoSaldo;
  if ((_saldo + _limite) < saque )
    cout << "\nSaldo insuficiente";
  else
  {
    novoSaldo = _saldo - saque;
    _saldo = novoSaldo;
    return _saldo;
  }
}

float ContaEspecial :: deposito (float deposito)
{
  float novoSaldo;
  novoSaldo = _saldo + deposito;
  _saldo = novoSaldo;
  return _saldo;
}

void ContaEspecial :: imprime()
{
  cout << "\nLimite: " << _limite << "\n\n";
  Conta :: imprime();

}
