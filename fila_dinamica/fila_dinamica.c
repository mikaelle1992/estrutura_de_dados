#include <stdlib.h>
#include "fila_dinamica.h"

struct fila
{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};

struct elemento
{
    struct aluno dados;
    struct elemento *prox;
    
};

typedef struct elemento Elem;

Fila *cria_fila()
{
    Fila *fi = (Fila *)malloc(sizeof(Fila)); // alocar memório do ponteiro Fila
    if (fi != NULL)
    {
        fi->inicio = NULL;
        fi->final = NULL;
        fi->qtd = 0;
    }
    return fi;
};

void libera_fila(Fila *fi)
{
    if (fi != NULL)
    {
        Elem *no;
        while (fi->inicio != NULL)
        {
            no = fi->inicio;
            fi->inicio = fi->inicio->prox;
            free(no);
        }
        free(fi);
    }
};

int tamanho_fila(Fila* fi){
    if(fi == NULL)
        return 0;
    return fi->qtd;
}

int fila_cheia(Fila *fi)
{
    return 0;
}

int fila_vazia(Fila *fi)
{
    if (fi == NULL)
    {
        return 1;
    }
    if (fi->inicio == NULL)
    {
        return 1;
    }
    return 0;
};

int insere_fila(Fila *fi, struct aluno al)
{
    if (fi == NULL)
    {
        return 0;
    }
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if (no == NULL)
    {
        return 0;
    }
    no->dados = al;
    no->prox = NULL;
    if (fi->final == NULL)
    {
        fi->inicio = no;
    }
    else
    {
        fi->final-> prox = no;
    }
    fi->final = no;
    fi->qtd ++;
    return 1;
};


int remove_fila(Fila* fi){
    if(fi == NULL) {
        return 0;
    }
    if(fi-> inicio == NULL) {
        return 0;
    }
    Elem *no = fi-> inicio;
    fi-> inicio = fi-> inicio->prox;
    if(fi->inicio ==  NULL) {
        fi->final = NULL;

    }
    free(no);
    return 1;
};

int consulta_fila(Fila* fi, struct aluno *al){
     if(fi == NULL) {
        return 0;
    }
    if(fi-> inicio == NULL) {
        return 0;
    }
    *al = fi-> inicio->dados;
    return 1;
};


void imprime_fila(Fila* fi){
    if(fi == NULL)
        return;
    Elem* no = fi->inicio;
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