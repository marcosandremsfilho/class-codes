#include "pilha.h"

void pilha::aloca_memoria()
{
  if(tamanho > 0)                           /*Aloca a memoria criando assim a pilha */
    dados = new int[tamanho];
  else
    dados = nullptr;
}

pilha::pilha()
{
  tamanho = 5;
  topo = -1;                                /*Faz as configurações da pilha*/
  aloca_memoria();
}

pilha::pilha(int t)
{
  if ( t< 0 ) t = 0;
  tamanho = t;
  topo = -1;                                  /*Controi a pilha*/
  aloca_memoria();
  cout << "Construindo . . . " << endl;
}

pilha::~pilha()
{
  if(dados != nullptr)
    delete[] dados;                             /*Destroi a pilha*/
  cout << "destruindo . . . " << endl;
}

bool pilha::empty()
{
  return (topo == -1 ? true : false);           /*Verifica se a pilha está vazia ou não*/
}

void pilha::push(int v)
{
  if(dados != nullptr && topo != tamanho - 1)
  {
    topo++;                                      /*Insere um elemento a pilha*/
    dados[topo] = v;
  }
}
int pilha::top()
{
  if(!empty())
    return dados[topo];                       /*Mostra o valor do item que está inserido no topo da pilha*/
}

int pilha::pop()
{
  if(!empty())                                      /*Remove o valor da item */
    return dados[topo--];
}
