#include "tenis.h"

tenis :: tenis()
{
  cin.ignore();
  cout << "\nEntre com o nome do jogador: ";
  getline(cin, _nome);
  cout << "\nEntre com o pais do jogador: ";
  getline(cin, _pais);
  cout << "\nEntre com o ranking do jogador: ";
  cin >> _ranking;
}

string tenis :: get_name()
{
  return _nome;
}

int tenis :: get_ranking()
{
  return _ranking;
}

string tenis :: get_pais()
{
  return _pais;
}
