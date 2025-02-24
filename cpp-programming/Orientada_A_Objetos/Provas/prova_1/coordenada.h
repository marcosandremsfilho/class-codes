//Prova 01 - ECOP03
//Aluno: Marcos Andre Magalhaes de Sousa Filho:
//Matricula: 2020002875

#include <iostream>

using namespace std;

#ifndef COORDENADA_H
#define COORDENADA_H

class coordenada
{
private:
  float _lat, _lon;

public:
  coordenada(float lat = 0, float lon = 0) : _lat{lat}, _lon{lon} { }
  ~coordenada() { }

  coordenada operator !();
  bool operator !=(coordenada&);
  bool operator ==(coordenada&);

  void set_lat(float);
  void set_long(float);

  float get_lat();
  float get_long();

  string hemisferio();

  friend ostream& operator<<(ostream& out, const coordenada& c);
  friend istream& operator>>(istream& in, coordenada& c);
};

#endif
