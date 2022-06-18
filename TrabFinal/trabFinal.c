#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "trabFinal.h"
#include "arvoreAVL.h"
#include "arvoreLLRB.h"


int Escolha_ordenacao(int opc){
    printf("Escolha um metodo de ordenacao:\n");
    printf("1 - Arvore AVL sem Ordenacao\t\t 2 - Arvore AVL com Ordenacao\n");
    printf("3 - Arvore Rubro-Negra sem Ordenacao\t 4 - Arvore Rubro-Negra com Ordenacao\n");
    printf("5 - Sair\n\n");
    scanf("%d", &opc);
    getchar();
    return opc;
}

int Aloca_memoria(int *vetorElem, int totElem){
    vetorElem = (int*) malloc(totElem * sizeof(int));
            if(vetorElem == NULL){
                printf("Erro: Sem memória!");
                exit(1);
            }
    return vetorElem;
}

Funcionario entraDados(){
    Funcionario func;
    while(fgets(texto, 150, f)){
            func.codigo= atoi(strtok(texto, ";");
            strcpy(func.nome, strtok(NULL, ";"));
            func.idade = atoi(strtok(NULL, ";");
            strcpy(func.empresa, strtok(NULL, ";"));
            strcpy(func.departamento, strtok(NULL, ";"));
            func.salario = atof(strtok(NULL, "\n");

            return func;
    }
}
