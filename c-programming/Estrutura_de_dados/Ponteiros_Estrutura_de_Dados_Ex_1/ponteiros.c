#include "ponteiros.h"

void inicializavetor()
{
    srand(time(NULL));
    vetor=(int *) malloc(valor);
    for(i=0; i<valor; i++)
    {
        vetor[i]= rand()%100;

    }
}
void printavetor()
{
    int j=0;
    for(j=0; j<valor; j++)
    {
        printf(" %d \n", vetor[j]);
    }
}

void limpaespaco()
{
    free(vetor);
}
