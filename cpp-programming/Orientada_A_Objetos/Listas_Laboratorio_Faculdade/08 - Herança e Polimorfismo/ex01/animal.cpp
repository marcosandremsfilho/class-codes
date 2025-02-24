#include "animal.h"

void animal :: nome()
{
  cout << "\nEntre com o nome do animal: ";
  cin >> _nome;
}

void animal :: carrega_detalhes()
{
  cout << "\n\nCarregando detalhes do animal.";
  cout << "\nNome do animal: " << _nome;
}
