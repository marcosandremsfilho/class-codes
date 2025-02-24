#include "pilha.h"
#include "pilha.cpp"

pilha x(5);

int main()
{

  srand (time(NULL));
  int aux;

  cout << "Pilha esta vazia? " << endl;

  if(x.empty()) cout << "SIM" << endl;
  else cout << "NAO" << endl;

  cout << "Inserindo elementos . . . " << endl;

  while(aux != 5)
  {
    x.push(rand()%101);
    aux++;
    cout << "O topo e: " << x.top() << endl;
  }
  while(!x.empty())
  {
    cout<< "Removendo elemento" << x.pop() << endl;
  }
  cout << "O topo e: " << x.top() << endl;
}
