#include "animal.h"
#include "cavalo.h"

void cavalo :: nome()
{
  cout << "\nEntre com o nome do cavalo: ";
  cin >> _nome;
}

void cavalo :: carrega_detalhes()
{
  cout << "\n\nCarregando detalhes do cavalo.";
  cout << "\nNome do cavalo: " << _nome;
}
