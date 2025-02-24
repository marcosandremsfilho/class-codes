#include "animal.h"

#ifndef CAVALO_H
#define CAVALO_H

class cavalo : public animal
{
  public:
    cavalo(string nome = " ") : animal{nome} { }
    ~cavalo() { }

    void nome();
    void carrega_detalhes();
};

#endif
