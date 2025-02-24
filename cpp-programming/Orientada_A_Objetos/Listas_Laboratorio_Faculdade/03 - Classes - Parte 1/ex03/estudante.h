#include <iostream>

using namespace std;

#ifndef ESTUDANTE_H
#define ESTUDANTE_H

class estudante
{
private:
  string nome = "";
  int nota1, nota2;
public:
  estudante();
  estudante(string, int, int);
  void calcula_media();
  void imprime();

};
#endif
