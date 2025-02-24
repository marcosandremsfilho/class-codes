//Marcos Andre Magalhães de Sousa Filho, 2020002875

#include <iostream>
#include <time.h>

using namespace std;

#ifndef PILHA_H
#define PILHA_H


class pilha{
  private:
    int *dados;
    int topo;
    int tamanho;

    void aloca_memoria();
  public:
    pilha();
    pilha(int);
    ~pilha();

    bool empty();
    void push(int);
    int top();
    int pop();

};


#endif
