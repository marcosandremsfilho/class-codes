#include "cliente.h"
#include "cliente.cpp"

int main()
{
  Cliente* vet[2];
  vet[0] = new Conta("marcos", 20, "joao nunes", 37, 997515503, 500);
  vet[1] = new ContaEspecial("joao", 25, "joao cleber", 20, 3217637, 200, 20);

  for(auto x : vet)
  {
    x->imprime();
  }

vet[0] -> saque(600);
vet[1] -> deposito(200);

  for(auto x : vet)
  {
    x->imprime();
  }
}
