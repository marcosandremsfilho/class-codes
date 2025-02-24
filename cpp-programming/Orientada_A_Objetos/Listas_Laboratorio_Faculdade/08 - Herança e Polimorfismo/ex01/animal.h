#include <iostream>
#include <string>

using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class animal
{
  protected:
    string _nome;
  public:
    animal(string nome = " ") : _nome{nome} { }
    ~animal() { }

    virtual void nome();
    virtual void carrega_detalhes();
};

#endif
