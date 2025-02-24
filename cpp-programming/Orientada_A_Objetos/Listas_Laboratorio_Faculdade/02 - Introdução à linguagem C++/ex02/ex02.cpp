//Marcos André Magalhães de Sousa Filho, 2020002875

#include <iostream>

using namespace std;

const int m = 34;
int p = 1;

int main()
{
  int i = 0;
  for(i=0; i < m; i+=p)
  {
    cout << i << " ";
    p++;
  }
  return 0;
}

// O erro está no fato do código inicial ter colocado p como uma constante, isto é, um valor
// imutável, logo ao tentar adicionar um valor em p na linha 17 ocorrerá um erro que para
// resolve-lo basta definir p como uma variável.
