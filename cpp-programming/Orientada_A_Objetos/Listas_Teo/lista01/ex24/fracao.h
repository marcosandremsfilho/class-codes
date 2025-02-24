#include <iostream>

using namespace std;

#ifndef FRACAO_H
#define FRACAO_H

class fracao
{
private:
  int _numerador, _denominador;
public:
  fracao(int n = 1, int d = 1) : _numerador{n}, _denominador{d} { }

  fracao operator +(fracao&);
  fracao operator -(fracao&);
  fracao operator /(fracao&);
  fracao operator *(fracao&);

  bool operator >(fracao&);
  bool operator <(fracao&);
  bool operator ==(fracao&);

  friend ostream& operator<<(ostream& out, const fracao& fracao);
  friend istream& operator>>(istream& in, fracao& fracao);

};

#endif
