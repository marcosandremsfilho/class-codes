#include "animal.h"
#include "girafa.h"

void girafa :: nome()
{
  cout << "\nEntre com o nome da girafa: ";
  cin >> _nome;
}

void girafa :: carrega_detalhes()
{
  cout << "\n\nCarregando detalhes da girafa.";
  cout << "\nNome da girafa: " << _nome;
}
