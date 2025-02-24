#include <iostream>
#include <math.h>

using namespace std;

#ifndef QUADRATICA_H
#define QUADRATICA_H

class quadratica
{
private:
  float _a, _b, _c, _delta, _x1, _x2;
public:
  quadratica();
  quadratica(float, float, float);
  ~quadratica() { }

  void delta();
  void equacao();
  void print();
};

#endif
