#include <iostream>

using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente
{
protected:
  string _nome, _endereco;
  int _idade;

public:
  Cliente(string nome = " ", int idade = 0, string endereco = " ") : _nome{nome}, _idade{idade}, _endereco{endereco} { }
  ~Cliente() { }

  virtual void imprime();
  virtual float saque (float) { return 0;}
  virtual float deposito (float) {return 0;}
};

#endif

#ifndef CONTA_H
#define CONTA_H

class Conta : public Cliente
{
protected:
  int _numero, _agencia;
  float _saldo;

public:
  Conta(string nome = " ", int idade = 0, string endereco = " ", int numero =0, int agencia = 0, float saldo = 0) : Cliente{nome, idade, endereco}, _numero{numero}, _agencia{agencia}, _saldo{saldo} { }
  ~Conta() { }

  float saque (float);
  float deposito (float);

  void imprime();
};

#endif

#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

class ContaEspecial : public Conta
{
protected:
  float _limite;
public:
  ContaEspecial(string nome = " ", int idade = 0, string endereco = " ", int numero = 0, int agencia = 0, float saldo = 0, float limite = 0) : Conta{nome, idade, endereco, numero, agencia, saldo}, _limite{limite} { }
  ~ContaEspecial() { }

  float saque (float);
  float deposito (float);

  void imprime();
};

#endif
