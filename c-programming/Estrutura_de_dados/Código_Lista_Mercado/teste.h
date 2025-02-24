#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

#define MAX 20 

typedef enum{false, true } bool;

char Lista[MAX][MAX];
char op, Prod[MAX];

int dispo=0;

bool insereItens();
void mostraLista();
bool removeprod();
int busca(); 