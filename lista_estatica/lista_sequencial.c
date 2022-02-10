#include <stdlib.h>
#include "lista_sequencial.h"


struct lista
{   
    
    int qtd;
    struct aluno dados[MAX];
};

Lista *cria_lista()
{
    Lista *li;
    li = (Lista *)malloc(sizeof(struct lista));
    if (li != NULL)
    {
        li->qtd = 0;
    }
    return li;
};

void libera_lista(Lista *li)
{
    free(li);
};

int tamanho_lista(Lista *li)
{
    if (li == NULL)
    {
        return -1;
    }
    else
    {
        return li->qtd;
    }
};

int lista_cheia(Lista *li){
    if (li == NULL)
    {
        return -1;
    }
    else
    {
        return (li->qtd == MAX)
    }
}

int lista_vazia(Lista *li)
{
    if (li == NULL)
    {
        return -1;
    }
    else
    {
        return (li->qtd == 0);
    }
};