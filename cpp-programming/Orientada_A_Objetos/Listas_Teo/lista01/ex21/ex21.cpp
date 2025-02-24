#include "tenis.h"
#include "tenis.cpp"

string local, terreno;

int main()
{
  cout << "\n====================== TENIS VIRTUAL ======================";
  cout << "\n\nEntre com o pais que o jogo sera sediado: ";
  getline(cin, local);
  cout << "\nEntre com o terreno do jogo: ";
  getline(cin, terreno);
  cout << "\nInformacoes do jogador 1, tecle enter para continuar . . .";
  tenis jogador1;
  cout << "\nInformacoes do jogador 2";
  tenis jogador2;

if(jogador1.get_ranking() > jogador2.get_ranking())
{
  cout << "O jogador " << jogador1.get_name() << " que representa o " << jogador1.get_pais() << " esta jogando no(a) " << local;
  cout << " jogando no(a) " << terreno << " tem mais chances de ganhar pois ocupa o ranking " << jogador1.get_ranking();
  cout << "enquanto o " << jogador2.get_name() << " ocupa a " << jogador2.get_ranking();
}
else
  {
    cout << "O jogador " << jogador2.get_name() << " que representa o " << jogador2.get_pais() << " esta jogando em " << local;
    cout << " jogando no(a) " << terreno << " tem mais chances de ganhar pois ocupa o ranking " << jogador2.get_ranking();
    cout << "enquanto o " << jogador1.get_name() << " ocupa a " << jogador1.get_ranking();
  }

}
