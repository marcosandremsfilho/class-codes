//Prova 01 - ECOP03
//Aluno: Marcos Andre Magalhaes de Sousa Filho:
//Matricula: 2020002875

#include "coordenada.h"
#include "coordenada.cpp"

int main()
{
  coordenada c1, c2;
  cout << "\nEntre com os valores da primeiro coordenada: ";
  cin >> c1;
  cout << "\nEntre com os valores da segundo coordenada: ";
  cin >> c2;

  cout << "\nA posicao da primeira coordadenada e " << c1.hemisferio();
  cout << "\nA posicao da segunda coordadenada e " << c2.hemisferio();

  if(c1 == c2)
    cout << "\n\nVoce adicionou as mesmas coordenadas em ambas!";
  else if(c1 != c2)
    cout << "\n\nSuas coordenadas sao diferentes";

    !c1;
    !c2;

    if(c1 == c2)
      cout << "\n\nComo suas coordenadas sao iguais logo a espelhada de ambas sao: " << c1;
    else
    {
      cout << "\n\nA sua primeira coordenada espelhada e " << c1;
      cout << "\n\nA sua segunda coordenada espelhada e " << c2;
    }
}
//----------------------------------------- questao 2 -----------------------------------------
/*
  1. O construtor modela a classe adiconando os valores as variaveis privadas, ja o destrutor
  destroi a classe, liberando assim memória para o usuário.

  2. O ponteiro funciona guardando o endereço de uma variável, podendo ser atribuido um valor
  nulo a ele, já a referencia esta apontando para algum lugar, logo não pode ser atribuido um
  valor nulo.

  3. O encapsulamento permite o programador tornar o programa mais dinamico e protegido, tendo
  variaveis privadas e publicas, podendo proteger os dados atraves das variaveis privadas que so
  podem ser alteradas pela propria classe ou por funções que sejam amigas da classe.

  4. This é um ponteiro que so pode ser acessado dentro da função membro dentro da classe, ele
  aponta para o objeto em que a função membro foi chamada.

*/
