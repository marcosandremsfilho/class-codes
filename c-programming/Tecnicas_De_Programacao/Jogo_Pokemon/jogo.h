#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define PAREDE1 '-'
#define PAREDE2 '|'
#define PAREDE3 '+'
#define JOGADOR 'A'
#define VAZIO ' '
#define AGUA '/'
#define AR '~'
#define TERRA '#'
#define FOGO '*'
#define ELETRICIDADE '$'
#define TREINADOR 'X'


typedef struct pokemon
{
    char nome[50];
    int level;
    int tipo;
} pokemon_t;
