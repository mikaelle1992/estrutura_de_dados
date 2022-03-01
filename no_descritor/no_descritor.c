#include <stdlib.h>
#include "no_descritor.h"

struct elemento
{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

struct descritor
{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};

Lista *cria_lista()
{
    Lista *li = (Lista *)malloc(sizeof(Lista));
    if (li != NULL)
    {
        li->inicio = NULL;
        li->final = NULL;
        li->qtd = 0;
    }
    return li;
};

void libera_lista(Lista *li)
{
    if (li != NULL)
    {
        Elem *no;
        while ((li->inicio) != NULL)
        {
            no = li->inicio;
            li->inicio = li->inicio->prox;
            free(no);
        }
        free(li);
    }
};

int tamanho_lista(Lista *li)
{
    if (li == NULL)
    {
        return 0;
    }
    return li->qtd;
};

int insere_lista_inicio(Lista *li, struct aluno al)
{
    if (li == NULL)
    {
        return 0;
    }
    Elem *no = (Elem *)malloc(sizeof(Elem));
    if (no == NULL)
    {
        return 0;
    }
    no->dados = al;
    no->prox = li->inicio;
    if (li->inicio == NULL)
    {
        li->final = no;
    }
    li->inicio = no;
    li->qtd++;
    return 1;
}

int insere_lista_final(Lista *li, struct aluno al)
{
    if (li == NULL)
    {
        return 0;
    }
    Elem *no = (Elem *)malloc(sizeof(Elem));// reserva um espaço no memória
    if (no == NULL)
    {
        return 0;
    }
    no->dados = al;
    no->prox = NULL;
    if (li->inicio == NULL)
    {
        li->inicio = no;
    }
    else
    {
        li->final->prox = no;
    }
    li->final = no;
    li->qtd++;
    return 1;
};
