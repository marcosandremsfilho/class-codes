#include "aviao.h"

int main()
{
    int op,cod;
    char aviao[MAX];
    do
    {
        printf(" >> Digite o numero para decidir a acao correspondente: \n >> 1 - Mostrar quantos avioes estao esperando \n >> 2 - Autoriza decolagem \n >> 3 - Adicionar mais um aviao a fila \n >> 4 - Lista todos os avioes que estao aguardando \n >> 5 - Sair do programa\n >>");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            imprimeQuant();
            break;
        case 2:
            retiraAviao();
            break;
        case 3:
            printf(">> Digite o nome da empresa do avião a ser adicionado: \n >>");
            scanf("%s", aviao);
            insereAviao(aviao);
            break;
        case 4:
            imprimeAviao();
            break;
        }
    }
    while(op!=5);
}
