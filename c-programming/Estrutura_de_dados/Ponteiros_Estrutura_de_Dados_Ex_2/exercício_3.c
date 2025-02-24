#include "exercício_3.h"

void aloca_matrizes()
{
    int i=0;
    matrizA = (int **) malloc(lin*sizeof(int*));
    matrizB = (int **) malloc(lin*sizeof(int*));
    matrizSoma = (int **) malloc(lin*sizeof(int*));
    for(i=0; i<lin; i++)
    {
        matrizA[i] = (int*) malloc(col*sizeof(int*));
        matrizB[i] = (int*) malloc(col*sizeof(int*));
        matrizSoma[i] = (int *) malloc(col*sizeof(int*));
    }
}

void aleatoriza()
{
    int i, j;
    srand(time(NULL));

    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            matrizA[i][j] = rand() % 100;
            matrizB[i][j] = rand() % 100;

        }
        printf("\n");
    }

}

int soma_matrizes()
{
    int i=0, j=0;
    for (i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void mostra_matrizes()
{
    int i=0, j=0,k=0;

    if(k==0)
    {
        printf("Matriz A: \n");

        for(i=0; i<lin; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("|%4.d|", matrizA[i][j]);
            }
            printf("\n");
        }
    }

    printf("\n");
    printf(" + \n");
    printf("\n");

    k=1;

    if(k==1)
    {
        printf("Matriz B: \n");
        for(i=0; i<lin; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("|%4.d|", matrizB[i][j]);
            }
            printf("\n");
        }
    }

    printf("\n");
    printf("\n");

    k=2;
    if(k==2)
    {
        printf("Matriz C: \n");
        for(i=0; i<lin; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("|%4.d|", matrizSoma[i][j]);
            }
            printf("\n");
        }
    }
}

void limpa_matriz()
{
    int i=0,j=0,z=0;
    for(i=0; i<10; i++) //limpando matriz A, B e C
    {
        free(matrizA[i]);
        free(matrizB[i]);
        free(matrizSoma[i]);
    }
    free(matrizA);
    free(matrizB);
    free(matrizSoma);
}
