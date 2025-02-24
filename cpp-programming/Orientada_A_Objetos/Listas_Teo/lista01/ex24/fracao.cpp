#include "fracao.h"

fracao fracao :: operator +(fracao& d)
{
  int denominador, numerador;

  denominador = _denominador * d._denominador;
  numerador = _numerador*(denominador/_denominador) + d._numerador*(denominador/d._denominador);

  return fracao(numerador, denominador);
}

fracao fracao :: operator -(fracao& d)
{
  int denominador, numerador;

  denominador = _denominador * d._denominador;
  numerador = _numerador*(denominador/_denominador) - d._numerador*(denominador/d._denominador);

  return fracao(numerador, denominador);
}

fracao fracao :: operator *(fracao& d)
{
  int denominador, numerador;

  denominador = _denominador * d._denominador;
  numerador = _numerador * d._numerador;

  return fracao(numerador, denominador);
}

fracao fracao :: operator /(fracao& d)
{
  int denominador, numerador;

  denominador =  _denominador * d._numerador;
  numerador = _numerador * d._denominador;

  return fracao(numerador, denominador);
}

bool fracao :: operator >(fracao& d)
{
  float aux = _numerador/_denominador;
  float aux2 = d._numerador/d._denominador;
  if (aux > aux2)
    return true;
  else
    return false;
}

bool fracao :: operator <(fracao& d)
{
  float aux = _numerador/_denominador;
  float aux2 = d._numerador/d._denominador;
  if (aux < aux2)
    return true;
  else
    return false;
}

bool fracao :: operator ==(fracao& d)
{
  float aux = _numerador/_denominador;
  float aux2 = d._numerador/d._denominador;
  if (aux == aux2)
    return true;
  else
    return false;
}

ostream& operator << (ostream& out, const fracao& d)
{
  out << d._numerador << "/" << d._denominador;
  return out;
}
istream& operator >> (istream& in, fracao& d)
{
  cin >> d._numerador >> d._denominador;
  return in;
}
