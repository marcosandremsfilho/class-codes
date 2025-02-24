#include "DivisaoErro.h"

int conta(int numerador, int denominador){
  if (denominador == 0)
    throw DivisaoErro();
  else
    return numerador/denominador;
}
