#include <iostream>

using namespace std;

#ifndef TENIS_H
#define TENIS_H

class tenis
{
private:

  string _nome = " ", _pais = " ";
  int _ranking;

public:
  tenis();

  string get_name();
  int get_ranking();
  string get_pais();
  void print();
};

#endif
