#include "projeto_organizador_de_vetor.h"

void inicializa_vetor(int vet[25]){
int i;
for(i=0;i<25;i++){
  vet[i]= rand()%100+1;
}
}

void imprime_vetor(int vet[25]){
int i;
for(i=0;i<25;i++){
  printf("%d ", vet[i]);
}
}

void bubble(int vet[], int tam)
{
    int i, j, aux;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam - 1 - i; j++)
        {
            if(vet[j+1] < vet[j])
            {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}

int busca(int vet[], int chave, int ini, int fin){
  int meio;
  meio = (ini+fin)/2;
 if(vet[meio]==chave){
      return meio;
    }
  if(ini>=fin){
    return -1;
  }
    else if(vet[meio]<chave){
       return busca(vet, chave, meio+1, fin);
    }
    else{
       return busca(vet, chave, ini, meio-1);
    }
  }
