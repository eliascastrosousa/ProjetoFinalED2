#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "trabFinal.h"
#include "arvoreAVL.h"
#include "arvoreLLRB.h"

typedef struct NO *arvoreLLRB;

int cor(struct NO *H);

void trocaCor(struct NO *H);

struct NO *insereNO(struct NO *H, int valor, int *resp);

int insere_arvoreLLRB(arvoreLLRB *raiz, int valor);

int remove_arvoreLLRB(arvoreLLRB *raiz, int valor);

int consulta_arvoreLLRB(arvoreLLRB *raiz, int valor);

struct NO *removeNO(struct NO *H, int valor);

struct NO *removeMenor(struct NO *H);

struct NO *procuraMenor(struct NO *atual);

arvoreLLRB *cria_arvoreLLRB();
