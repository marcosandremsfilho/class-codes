#include "animal.h"

#ifndef BALEIA_H
#define BALEIA_H

class baleia : public animal
{
  public:
    baleia(string nome = " ") : animal{nome} { }
    ~baleia() { }

    void nome();
    void carrega_detalhes();
};

#endif
