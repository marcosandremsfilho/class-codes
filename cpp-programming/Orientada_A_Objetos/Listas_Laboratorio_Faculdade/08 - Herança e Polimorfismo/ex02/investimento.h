#include <iostream>
#include <string>

using namespace std;

#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H

class investimento
{
  protected:
    float _valor, _taxa;
  public:
    investimento(float valor = 0, float taxa = 0) : _valor{valor}, _taxa{taxa} { }
    ~investimento( ) { }

    void retornaValores();
    virtual float retorno( int );
};

#endif

#ifndef PAPELBOLSA_H
#define PAPELBOLSA_H

class PapelBolsa : public investimento
{
  public:
    PapelBolsa(float valor = 0, float taxa = 0) : investimento{valor, taxa} { }
    ~PapelBolsa( ) { }

    float retorno( int );
};

#endif

#ifndef RENDAFIXA_H
#define RENDAFIXA_H

class RendaFixa : public investimento
{
  public:
    RendaFixa(float valor = 0, float taxa = 0) : investimento{valor, taxa} { }
    ~RendaFixa( ) { }

    float retorno( int );
};

#endif

#ifndef IMOBILIARIO_H
#define IMOBILIARIO_H

class Imobiliario : public investimento
{
  public:
    Imobiliario(float valor = 0, float taxa = 0) : investimento{valor, taxa} { }
    ~Imobiliario( ) { }

    float retorno( int );
};

#endif
