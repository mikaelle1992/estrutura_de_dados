#include <stdio.h>
#include <stdlib.h>
#include "arvore_avl.h"

struct NO
{
    int info;
    int alt;
    struct NO *esq;
    struct NO *dir;
}

int
alt_NO(struct NO *no)
{
    if (no == NULL)
    {
        return -1;
    }
    else
    {
        return no->alt;
    }
}

int fatorBalanceamento_NO(struct NO *no)
{
    return labs(alt_NO(no->esq)) - labs(no->dir));
}

int maior(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

void RotacaoLL(ArvAVL *raiz)
{
    printf("RotacaoLL\n");
    struct NO *no;
    no = (*raiz)->esq;
    (*raiz)->esq = no->dir;
    no->dir = *raiz;
    (*raiz)->altura = maior(altura_NO((*raiz)->esq),
                            altura_NO((*raiz)->dir)) +
                      1;
    no->altura = maior(altura_NO(no->esq),
                       (*raiz)->altura) +
                 1;
    *raiz = no;
}

void RotacaoRR(ArvAVL *raiz)
{
    printf("RotacaoRR\n");
    struct NO *no;
    no = (*raiz)->dir;
    (*raiz)->dir = no->esq;
    no->esq = (*raiz);
    (*raiz)->altura = maior(altura_NO((*raiz)->esq),
                            altura_NO((*raiz)->dir))
                            + 1;
    no->altura = maior(altura_NO(no->dir),
                     (*raiz)->altura) + 1;
    (*raiz) = no;
}

void RotacaoLR(ArvAVL *raiz){
    RotacaoRR(&(*raiz)->esq);
    RotacaoLL(raiz);
}

void RotacaoRL(ArvAVL *raiz){//RL
    RotacaoLL(&(*raiz)->dir);
    RotacaoRR(raiz);
}