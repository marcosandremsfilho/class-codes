#include "pessoa.h"
#include "pessoa.cpp"

int main()
{
  pessoa a;
  pessoa b ("Manuel", 33, 1.75);
  pessoa c ("Maria", 18, 1.65);

  cout << a.get_nome() << " tem " << a.get_idade() << " ano(s) e mede " << a.get_altura() << "m" << endl;
  cout << b.get_nome() << " tem " << b.get_idade() << " ano(s) e mede " << b.get_altura() << "m" << endl;
  cout << c.get_nome() << " tem " << c.get_idade() << " ano(s) e mede " << c.get_altura() << "m" << endl;
}
