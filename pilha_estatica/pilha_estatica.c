#include <stdlib.h>
#include "pilha_estatica.h"

struct pilha
{
    int qtd;
    struct aluno dados[MAX];
};

Pilha* cria_pilha()
{
    Pilha *pi = (Pilha*) malloc(sizeof(struct pilha));
    if(pi !=NULL){
        pi->qtd = 0;
    }
    return pi;
};

void libera_pilha(Pilha *pi)
{
    free(pi);
};

int tamanho_pilha(Pilha *pi)
{
    if (pi == NULL)
    {
        return -1;
    }
    else
    {
        return pi->qtd;
    }
};

int pilha_cheia(Pilha *pi)
{
    if (pi == NULL)
    {
        return -1;
    }
    if (pi->qtd == MAX)
    {
        return 1;
    }
};

int pilha_vazia(Pilha *pi)
{
    if (pi == NULL)
    {
        return -1;
    }
    if (pi->qtd == 0)
    {
        return 1;
    }
};

int insere_pilha(Pilha *pi, struct aluno al)
{
    if (pi == NULL)
    {
        return 0;
    }
    if(pi->qtd == MAX)
    {
        return 0;
    }
    pi->dados[pi->qtd] = al;
    pi->qtd++;
    return 1;
};

int remove_pilha(Pilha *pi)
{
    if (pi == NULL || pi->qtd == 0)
    {
        return 0;
    }
    pi->qtd--;

    return 1;
};

int consulta_pilha(Pilha* pi, struct aluno *al){
    if (pi == NULL || pi->qtd == 0)
    {
        return 0;
    }
    *al = pi->dados[pi->qtd-1];
    return 1;
};

void imprime_pilha(Pilha* pi){
    if(pi == NULL)
        return;
    int i;
    for(i=pi->qtd-1; i >=0; i--){
        printf("Matricula: %d\n",pi->dados[i].matricula);
        printf("Nome: %s\n",pi->dados[i].nome);
        printf("Notas: %f %f %f\n",pi->dados[i].n1,
                                   pi->dados[i].n2,
                                   pi->dados[i].n3);
        printf("-------------------------------\n");
    }
}