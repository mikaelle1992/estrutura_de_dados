#include <stdlib.h>
#include "fila_estatica.h"

struct fila
{
    int inicio, final;
    struct aluno dados[MAX];
};

Fila *cria_fila()
{
    Fila *fi = (Fila *)malloc(sizeof(struct fila));
    if (fi != NULL)
    {
        fi->inicio = 0;
        fi->final = 0;
    }
    return fi;
}

void libera_fila(Fila *fi)
{
    free(fi);
};

int tamanho_fila(Fila *fi)
{
    if (fi == NULL)
    {
        return -1;
    }
    int qtd = abs(fi->final - fi->inicio);
    return qtd;
};

int fila_cheia(Fila *fi)
{
    if (fi == NULL)
    {
        return -1;
    }
    if (fi->inicio == (fi->final + 1) % MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

int fila_vazia(Fila *fi)
{
    if (fi == NULL)
    {
        return -1;
    }
    return (fi->inicio == fi->final);
}

int insere_fila(Fila *fi, struct aluno al)
{
    if (fi == NULL)
    {
        return -1;
    }
    if (fila_cheia(fi))
    {
        return 0;
    }
    fi->final = (fi->final + 1) % MAX;
    fi->dados[fi->final] = al;
    return 1;
};

int remove_fila(Fila *fi)
{
    if (fi == NULL || fila_vazia(fi))
    {
        return 0;
    }
    fi->inicio = (fi->inicio + 1) % MAX;
    return 1;
};

int consulta_fila(Fila *fi, struct aluno *al)
{
    if (fi == NULL || fila_vazia(fi))
    {
        return 0;
    }
    int pos = (fi->inicio + 1) % MAX;
    *al = fi->dados[pos];
    return 1;
};

void imprime_fila(Fila *fi)
{
    if (fi == NULL)
        return;
    int i = fi->inicio;
    while (i != fi->final)
    {
        i = (i + 1) % MAX;
        printf("Matricula: %d\n", fi->dados[i].matricula);
        printf("Nome: %s\n", fi->dados[i].nome);
        printf("Notas: %f %f %f\n", fi->dados[i].n1,
               fi->dados[i].n2,
               fi->dados[i].n3);
        printf("-------------------------------\n");
    }
}