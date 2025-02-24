#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>

typedef struct{
  char nome[30];
  char autor [30];
  int lancamento;
  char editora[30];
  char classificacao[30];
}st_livros;

st_livros *vetor;

int quanti;
