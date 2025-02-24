#include "quadratica.h"

quadratica :: quadratica(float a, float b, float c)
{
  _a = a;
  _b = b;
  _c = c;
}

void quadratica :: delta()
{
 _delta = _b*_b - 4*_a*_c;
}

void quadratica :: equacao()
{
  if (_delta > 0)
  {
    _x1 = (-_b + sqrt(_delta))/2*_a;
    _x2 = (-_b - sqrt(_delta))/2*_a;
  }

  else if(_delta == 0)
  {
    _x1 = ((-_b) / (2*_a));
  }

}

void quadratica :: print()
{
  if (_delta > 0)
  {
    cout << "O valor de delta e " << _delta;
    cout << "\nComo delta e maior que 0 temos duas solucoes para a equacao, sendo elas\n X1 = ";
    cout << _x1 <<"\n X2 = " << _x2;
  }

  else if(_delta == 0)
  {
    cout << "O valor de delta e " << _delta;
    cout << "\nComo delta e igual a 0 temos somente uma solucao, logo X1 = X2 = ";
    cout << _x1;
  }

  else
  {
    cout << "O valor de delta e " << _delta;
    cout << "\nComo delta e negativo entao nao temos solucao reais para a equacao! ";
  }
}
