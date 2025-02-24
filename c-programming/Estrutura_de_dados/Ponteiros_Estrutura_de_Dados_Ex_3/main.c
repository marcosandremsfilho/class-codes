#include "exercício_3.h"

int main()
{
    setlocale(LC_ALL, "Portuguese"); //adiciona caracteres especiais ao código
    printf("Você deseja inserir quantos livros? \n");
    scanf("%d", &quanti);
    inicializavetor();
    anota_livro();
    mostra_livro();
    limpa_vetor();
}
