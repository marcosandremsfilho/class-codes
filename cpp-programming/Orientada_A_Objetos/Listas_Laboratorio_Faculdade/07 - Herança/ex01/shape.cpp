#include "shape.h"

ostream& operator << (ostream& out, const shape& s)
{
  out << " possui largura " << s._largura << " e altura " << s._altura;
  return out;
}

istream& operator >> (istream& in, shape& s)
{
  cin >> s._largura >> s._altura;
  return cin;
}
