#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef enum {false, true} bool;

typedef struct no
{
    char aviao[MAX];

    struct no *prox;
} noAviao;

