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


int insere_lista_final(Lista *li, struct aluno al)
{
    if (li == NULL)
    {
        return 0;
    }
    if(lista_cheia(li)){
        return 0;
    }
    li->dados[li->qtd] = al
    li->qtd++;
    return 1;
};

int insere_lista_inicio(Lista *li, struct aluno al)
{
    if(li == NULL)
    {
        return 0;
    }
    if(lista_cheia(li))
    {
        return 0;
    }
    int i;
    for (i=li->qtd-1; i>=0; i--)
    {
        li->dados[i+1] = li ->dados[i];    
    }
    li->dados[0] = al;
    li->qtd++; 
    return 1;

};
