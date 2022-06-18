#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "trabFinal.h"
#include "arvoreAVL.h"
#include "arvoreLLRB.h"

int main(){
    int esc, *vet, elem=2300;
    char *texto;

    FILE *f;
    f = fopen("massaDados.txt", "r");
    if(f == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }else{
        printf("abertura efetuada!\n");
    }

    esc = Escolha_ordenacao(esc);

    //alocar memoria
    vet = Aloca_memoria(vet, elem);

    struct Funcionario dados_func;
    *texto =

    switch(esc){
        case 1:
            printf("\nEscolha 1\n1 - Arvore AVL sem Ordenacao\n");
            dados_func = entraDados();
            x = insere_arvoreAVL(arvoreAVL *raiz, int valor);
            x = insere_lista_ordenada(li,dados_func );
            if(x){
            printf("\nInserido de forma ordenada com sucesso!\n\n");
            }else{
            printf("\nNão foi possivel inserir o Funcionario!\n");
            }
            break;

        break;
        case 2:
            printf("\nEscolha 2\n\n");
        break;
        case 3:
            printf("\nEscolha 3\n\n");
        break;
        case 4:
            printf("\nEscolha 4\n\n");
        break;
        case 5:
            printf("\nAte a proxima!\n\n");
        break;
        default:
            printf("\nOpcao invalida!\n");
    }

    fclose(f);

    return 0;
}
