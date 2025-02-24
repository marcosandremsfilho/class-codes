#include "animal.h"

#ifndef GIRAFA_H
#define GIRAFA_H

class girafa : public animal
{
  public:
    girafa(string nome = " ") : animal{nome} { }
    ~girafa() { }

    void nome();
    void carrega_detalhes();
};

#endif
