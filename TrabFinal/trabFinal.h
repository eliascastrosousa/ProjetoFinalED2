#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "trabFinal.h"
#include "arvoreAVL.h"
#include "arvoreLLRB.h"

/*
typedef struct funcionario{
    int id;
    char *nome;
    int idade;
    char *dpto;
    float sal;
}Funcionario; //verificar, provavelmente remover
*/

typedef struct FUNCIONARIO{
    int codigo;
    char nome[50];
    int idade;
    char empresa[50];
    char departamento[100];
    float salario;
}Funcionario;

int Escolha_ordenacao(int opc);

int Aloca_memoria(int *vetorElem, int totElem);

Funcionario entraDados();

