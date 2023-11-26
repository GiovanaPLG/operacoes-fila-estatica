#include <stdio.h>
#include <stdlib.h>
#define tamArray 10

struct fila{
    int qtd;
    int inicio;
    int fim;
    int num[tamArray];
};
typedef struct fila Fila;

void main(){
    Fila *fi = NULL;
    fi = (Fila *) malloc(sizeof(Fila));
    if (fi != NULL){
        fi->qtd = 0;
        fi->inicio = 0;
        fi->fim = 0;
    }

    int opcao, numInserido = 0;
    scanf("%d", &opcao);

    while (opcao != 4){
        if (opcao == 1){
            if (fi->qtd == tamArray){
                printf("Fila Cheia!\n");
            }
            else{
                scanf("%d", &numInserido);
                fi->num[fi->fim] = numInserido;
                fi->fim = fi->fim + 1;
                fi->qtd++;
            }
        }
        else if (opcao == 2){
            if (fi->qtd == 0){
                printf("Fila Vazia!\n");
            }
            else{
                fi->inicio = fi->inicio + 1;
                fi->qtd--;
            }
        }
        else if (opcao == 3){
            if (fi->qtd == 0){
                printf("Fila Vazia!\n");
            }
            else{
                for (int i = fi->inicio; i < fi->fim; i++){
                    printf("%d ", fi->num[i]);
                }
                printf("\n");
            }
        }

        scanf("%d", &opcao);
    }

}