#include "jogo.h"

void inicializa_Mapa (char campo[21][21])
{
    int i=0,j=0, pos1=0, pos2=0, m=0;
    srand(time(NULL));

    for(i=0; i<21; i++)
    {
        for(j=0; j<21; j++)
        {

            campo[i][j] = VAZIO;

            if ( (i==0) ||(i==20))
            {
                campo [i][j] = PAREDE1;
            }
            if ((j == 0) || (j == 20) )
            {
                campo [i][j] = PAREDE2;
            }
            campo[0][0] = PAREDE3;
            campo[20][0] = PAREDE3;
            campo[0][20] = PAREDE3;
            campo[20][20] = PAREDE3;

        }
    }
    for(m=0; m<5; m++)
    {
        i= (rand()%19)+1;
        j=(rand()%19)+1;
        campo[i][j]=TREINADOR;
    }
}

void inicializa_Bioma (char campo[21][21])
{
    int i=0,j=0, pos_Pok=0;

    for(i=0; i<20; i++)
    {
        for(j=0; j<20; j++)
        {

            campo[i][j] = (rand() % 5) + 1;

            if (campo[i][j] == 1)
            {
                campo[i][j]=AGUA;
            }
            else if (campo[i][j] == 2)
            {
                campo[i][j]=AR;
            }
            else if (campo[i][j] == 3)
            {
                campo[i][j]=TERRA;
            }
            else if (campo[i][j] == 4)
            {
                campo[i][j]=FOGO;
            }
            else if (campo[i][j] == 5)
            {
                campo[i][j]=ELETRICIDADE;
            }
        }
    }
    for(i=0; i<20; i++)
    {
        for(j=0; j<20; j++)
        {
            printf("%c ", campo[i][j]);
        }
        printf("\n");
    }
}

void desenha_Mapa(char campo[21][21], int col_jogador,int lin_jogador)
{

    int i=0,j=0;

    for(i=0; i<21; i++)
    {
        for(j=0; j<21; j++)
        {
            if ((j==col_jogador) && (i==lin_jogador))
            {
                printf("A ");
            }
            else
            {
                printf("%c ", campo[i][j]);
            }
        }
        printf("\n");
    }
}
