#include  "carro.h"

carro::carro(float b, float a)
{
  dis = a;
  comb = b;
}

float carro::get_dis()
{
  return dis;
}

float carro::get_comb()
{
  return comb;
}

void carro::set_dis(float a)
{
  dis = a;
}

void carro::set_comb(float b)
{
  comb = b;
}

float carro::combustivel()
{
  return comb - dis/15;
}

float carro::distancia()
{
  float aux = comb - dis/15;
  return aux*15;
}
