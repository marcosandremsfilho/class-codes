#include "teste.h"

bool insereItens(int valor){
    int i = dispo;
    if(dispo > MAX){
        return false;
    }
    else{
        while((i>0)&&(strcmp(Lista[i-1],Prod)>0)){
            strcpy(Lista[i],Lista[i-1]);
            i--;
        }
        strcpy(Lista[i],Prod);
        dispo++;
        return true;
    }
}

bool removeprod(char* Prod){

    int i=0;

    while((i < dispo)&&(strcmp(Lista[i],Prod) < 0)){
        i++;
    }
    if((i<dispo)&&(strcmp(Lista[i],Prod)==0)){
        while(i<dispo-1){
            strcpy(Lista[i],Lista[i+1]);
            i++;
        }
        dispo--;
        printf("Removido com sucesso. \n");
        return true;
    }
    else{
        return false;
    }
}

int busca(int chave){
    int i=0;
    for(i=0;i<dispo;i++){
        if(strcmp(Lista[i],Prod)==0){
            return true;
        }
    }
    return false;
}

void mostraLista(){
    int i=0;
    for(i=0;i<dispo;i++){
        printf("%d Item: %s\n",i+1,Lista[i]);
    }
}