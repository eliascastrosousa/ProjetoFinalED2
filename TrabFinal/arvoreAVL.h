#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "trabFinal.h"
#include "arvoreAVL.h"
#include "arvoreLLRB.h"

/*
*    Biblioteca Arvore binária de Busca
*
*/
//Arquivo arvoreAVL.h
typedef struct NO *arvoreAVL;

//Arquivo arvoreAVL.h
arvoreAVL *cria_arvoreAVL();

//Arquivo arvoreAVL.h
void liberar_arvoreAVL(arvoreAVL *raiz);

//Arquivo arvoreAVL.h
int vazia_arvoreAVL(arvoreAVL *raiz);

//Arquivo arvoreAVL.h
int altura_arvoreAVL(arvoreAVL *raiz);

//Arquivo arvoreAVL.h
int totalNO_arvoreAVL(arvoreAVL *raiz);

//Arquivo arvoreAVL.h
void preOrdem_arvoreAVL(arvoreAVL *raiz);

//Arquivo arvoreAVL.h
void emOrdem_arvoreAVL(arvoreAVL *raiz);

//Arquivo arvoreAVL.h
void posOrdem_arvoreAVL(arvoreAVL *raiz);

//Arquivo arvoreAVL.h
int insere_arvoreAVL(arvoreAVL *raiz, int valor);

//Arquivo arvoreAVL.h
int remove_arvoreAVL(arvoreAVL *raiz, int valor);

//Arquivo arvoreAVL.h
struct NO *procuramenor(struct NO *atual);

//Arquivo arvoreAVL.h
int consulta_arvoreAVL(arvoreAVL *raiz, int valor);

int alt_no(struct NO *no);

int fatorBalanceamento_NO(struct NO *no);

int maior(int x, int y);

void rotacaoLL(arvoreAVL *raiz);

void rotacaoRR(arvoreAVL *raiz);

void rotacaoLR(arvoreAVL *raiz);

void rotacaoRL(arvoreAVL *raiz);
