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
    if(pi != NULL){
        Elem* no;
        while((*pi) != NULL){
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

int pilha_cheia(Pilha* pi){
    return 0;
};


int pilha_vazia(Pilha* pi){
    if(pi == NULL) // pi , representação da pilha
    {
        return 1;
    }
    if(*pi == NULL)// *pi , representação do topo
    {
        return 1;
    }
    return 0;
};

int insere_pilha(Pilha* pi, struct aluno al){
    if(pi == NULL) 
    {
        return 0;
    }
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL){
        return 0;
    }
    no->dados = al;
    no->prox = (*pi);
    *pi = no;
    return 1;
};

int remove_pilha(Pilha* pi){
      if(pi == NULL) // pi , representação da pilha
    {
        return 0;
    }
    if(*pi == NULL)// *pi , representação do topo
    {
        return 0;
    }
    Elem *no = *pi;
    *pi = no->prox;
    free(no);
    return 1;
};

int consulta_pilha(Pilha* pi, struct aluno *al){
    if(pi == NULL) // pi , representação da pilha
    {
        return 0;
    }
    if((*pi) == NULL)// *pi , representação do topo
    {
        return 0;
    }
    *al = (*pi)->dados;
    return 1;
};

void imprime_pilha(Pilha* pi){
    if(pi == NULL)
        return;
    Elem* no = *pi;
    while(no != NULL){
        printf("Matricula: %d\n",no->dados.matricula);
        printf("Nome: %s\n",no->dados.nome);
        printf("Notas: %f %f %f\n",no->dados.n1,
                                   no->dados.n2,
                                   no->dados.n3);
        printf("-------------------------------\n");
        no = no->prox;
    }
}