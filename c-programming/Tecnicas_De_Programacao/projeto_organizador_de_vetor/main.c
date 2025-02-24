#include "projeto_organizador_de_vetor.h"

int main(void) {
 int vet[25], chave, posicao;

  srand(time(NULL));
  inicializa_vetor(vet);
  printf("Vetor Gerado: \n");
  imprime_vetor(vet);
  printf(" \n");
  bubble(vet, 25);
  printf("Vetor Ordenado: \n");
  imprime_vetor(vet);
  printf(" \n");
do
{
  printf("Insira o valor a ser buscado ou digite -1 para sair: ");
  scanf("%d", &chave);
  if(chave>-1)
   posicao = busca(vet,chave,0,24);

   if(posicao==-1){
     printf("Elemento não encontrado. \n");
   }else{
     printf("Elemento encontrado na posição %d. \n", posicao);
   }
}while(chave!=-1);
  return 0;
}
