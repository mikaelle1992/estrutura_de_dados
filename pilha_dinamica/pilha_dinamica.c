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

void libera_pilha(Pilha* pi){
    if(pi !=NULL){
        Elem* no;
        while((pi*) !=NULL){
            no = *pi;
            *pi = (*pi)->prox;
            free(no);
        }
        free(pi);
    }
};

int tamanho_pilha(Pilha* pi){
    if(pi == NULL)
    {
         return 0;
    }
    int cont = 0;
    Elem* no = *pi;
    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
};

int Pilha_cheia(Pilha* pi){
    return 0;
};