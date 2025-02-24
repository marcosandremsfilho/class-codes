#include <iostream>
#include <stdexcept>

using namespace std;

#ifndef DIVISAOERRO_H
#define DIVISAOERRO_H

class DivisaoErro : public runtime_error {
public:
  DivisaoErro() : runtime_error("\nDivisao por zero!\n") { }
};

#endif
