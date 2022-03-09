#include <stdlib.h>
#include "pilha_dinamica.h"



struct elemento
{
    struct aluno dados;
    struct elemento *prox;
    
};

typedef struct elemento Elem;

Pilha* cria_pilha()
{
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL)// verificar se deu certo a alocação
    {
        *pi = NULL;
    }
    return pi;
};

