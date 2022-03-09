#include <stdio.h>
#include <stdlib.h>


struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
    
};

typedef struct elemento* Pilha;

Pilha* cria_pilha();

void libera_pilha(Pilha* fi);

int tamanho_pilha(Pilha* fi);

int Pilha_cheia(Pilha* fi);

int Pilha_vazia(Pilha* fi);

int insere_pilha(Pilha* fi, struct aluno al);

int remove_pilha(Pilha* fi);

int consulta_pilha(Pilha* fi, struct aluno *al);

void imprime_pilha(Pilha* fi);