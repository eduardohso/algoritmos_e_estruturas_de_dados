#include "stdio.h"
#include "stdlib.h"

#include "Biblioteca.h"

int main(void){

    int op,controle;
    char c;
    Lista* l;
    l = (Lista*) malloc(sizeof(Lista));

    if(l!=NULL){

        do{
            printf("\nDigite uma opcao:\n");
            printf("1 - Inicializar lista\n");
            printf("2 - Inserir elemento no final da lista\n");
            printf("3 - Imprimir os elementos da lista\n");
            printf("4 - Sair\n");

            scanf("%d", &op);
            fflush(stdin);
            switch (op)
            {
            case 1:
                system("cls");
                inicializarLista(l);
                break;
            case 2:
                system("cls");
                printf("Digite o elemento:\n");
                scanf("%c",&c);
                fflush(stdin);

                controle = inserirNoFinal(l,c);
                break;
            case 3:
                system("cls");
                controle = imprimirElementos(l);
                if (controle==1)
                {
                    printf("Elementos impressos\n");
                }else{
                    printf("Elementos nao impressos\n");
                }
                break;
            default:
                printf("Saindo...");
                break;
            }
        }while(op!=4);
    }else{
        printf("Falha na alocacao\n");
        exit(1);
    }

    free(l);
    l=NULL;
    return 0;
}
