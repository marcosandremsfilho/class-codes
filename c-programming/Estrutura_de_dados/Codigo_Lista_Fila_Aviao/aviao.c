#include "aviao.h"

noAviao *prim = NULL;
noAviao *ult = NULL;

int quant=0;

void insereAviao(char *aviao)
{

    noAviao *novo = (noAviao *)malloc(sizeof(noAviao));
    noAviao *aux = ult;
    strcpy(novo->aviao, aviao);
    quant++;
    novo->prox=NULL;
    printf("\n");
    if(ult == NULL)
    {
        ult = novo;
    }

    else if(aux == novo)
    {
        return;
    }
    else
    {
        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
        return;
    }
}

bool retiraAviao()
{
   noAviao *aux = ult;

    if(ult != NULL)
    {
        ult = aux->prox;
        free(aux);
        printf(">> Aviao decolou\n");
        printf("\n");
        quant--;
    }
    else
    {
       printf(">> Sem avioes esperando\n");
        printf("\n");
    }

}

void imprimeAviao()
{

    noAviao *atual = ult;
    while (atual != NULL)
    {
        printf(">> %s \n", atual->aviao);
        printf("\n\n");
        atual = atual->prox;

    }
}

void imprimeQuant()
{
    printf(">> Tem %d avioes esperando\n", quant);
    printf("\n\n");
}

