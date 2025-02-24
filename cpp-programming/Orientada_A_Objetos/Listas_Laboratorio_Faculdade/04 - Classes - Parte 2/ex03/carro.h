//Marcos Andre Magalhães de Sousa Filho, 2020002875

#include <iostream>
#include <time.h>

using namespace std;

#ifndef CARRO_H
#define CARRO_H


class carro{
  private:
    float dis, comb;

  public:
    carro(float, float);
    ~carro() { }

    float get_dis();
    float get_comb();

    void set_dis(float);
    void set_comb(float);

    float combustivel();
    float distancia();

};


#endif
