#include "animal.h"
#include "baleia.h"

void baleia :: nome()
{
  cout << "\nEntre com o nome da baleia: ";
  cin >> _nome;
}

void baleia :: carrega_detalhes()
{
  cout << "\n\nCarregando detalhes da baleia.";
  cout << "\nNome da baleia: " << _nome;
}
