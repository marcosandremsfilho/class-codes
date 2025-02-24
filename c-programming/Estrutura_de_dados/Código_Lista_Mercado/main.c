#include "teste.h"

int main(){
int j=0;
    for(j=0;j<20;j++){
    printf("Digite os produtos a serem inseridos a lista: ");
    scanf("%s",Prod);
    if(busca(Prod)==true){
      printf("Digite outro produto, já adicionado \n");
      printf("\n");
    }
    else{
    insereItens(Prod);
    }
    }
while('op'!='s') {

printf("-------------------\n");
printf(" I-Insere novos produtos: \n R-Remove produto; \n B-Busca: \n L- Lista \n S-Sair: \n");
printf("-------------------\n");
scanf("%s", &op);

switch(op){

        case 'i':

        printf("Digite o produto a ser inserido: ");
        scanf("%s", Prod);
            if(busca(Prod)==true){

            printf("Produto ja inserido\n");

            }
            else if (insereItens( Prod)==true){

            printf("Produto inserido com sucesso\n");

            }
            else{

            printf("Limite Atingido\n");

            }

        break;

        case 'I':

        printf("Digite o produto para ser inserido: ");
        scanf("%s", Prod);
            if(busca(Prod)==true){

            printf("Produto ja inserido\n");

            }
            else if (insereItens( Prod)==true){

            printf("Produto inserido com sucesso\n");

            }
            else{

            printf("Limite Atingido\n");

            }

        break;
  
        case 'r':

        printf("Digite o produto a ser removido:");
        scanf("%s", Prod);

            if(busca(Prod)==true)
            {

              removeprod(Prod);
              printf("Produto removido com sucesso \n");
            }

            else
            {

              printf("Produto não disponível.\n");

            }

        break;

        case 'R':

            printf("Digite o produto a ser removido:");
            scanf("%s",Prod);
            
            if(busca(Prod)==true)
            {

              removeprod(Prod);
              printf("Produto removido com sucesso \n");

            }

            else
            {

              printf("Produto não disponível.\n");

            }

        break;
   
        case 'b':

        printf("Digite o produto: ");
        scanf("%s", Prod);
            if(busca(Prod)==true){

              printf("Produto localizado\n");

            }
            else{

              printf("Produto ainda não adicionado.");

            }
            break;
 
        case 'B':

        printf("Digite o produto: ");
        scanf("%s", Prod);
            if(busca(Prod)==true){

              printf("Produto localizado\n");

            }
            else{

              printf("Produto ainda não adicionado.\n");

            }
            break;

        case 'l':
            mostraLista();
            break;
 
        case 'L':
            mostraLista();
            break;

        case 's':
         return 0;

         case 'S':
         return 0;
        }
    }

}