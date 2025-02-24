//Marcos Andre Magalhães de Sousa Filho, 2020002875

#include <iostream>
#include <time.h>

using namespace std;

#ifndef PESSOA_H
#define PESSOA_H


class pessoa{
  private:
    string nome = " ";
    int idade;
    float altura;

  public:
    pessoa();
    pessoa(string, int, float);
    ~pessoa() { };

    string get_nome();
    int get_idade();
    float get_altura();

    void set_nome(string);
    void set_idade(int);
    void set_altura(float);
};


#endif
