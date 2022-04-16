#include <stdio.h>
#include <stdlib.h>


typedef struct NO* ArvAVL;

ArvAVL* cria_ArvAVL();

int insere_ArvAVL(ArvAVL *raiz, int valor);

void libera_ArvAVL(ArvAVL *raiz);

int remove_ArvAVL(ArvAVL *raiz, int valor);