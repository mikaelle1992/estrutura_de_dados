#include <stdio.h>
#include <stdlib.h>
#include "arvore_rubro_negro.h"


#define RED 1 //define as cores
#define BLACK 0


struct NO{
    int info;
    struct NO *esq;
    struct NO *dir;
    int cor;
};

int cor (struct NO* H){
    if(H == NULL){
        return BLACK;
    }
    else{
        return H->cor;
    }
}

int TrocarCor(struct NO* H){
    H->cor = !H->cor;
    if(H->esq == NULL){
        H->esq->cor = !H->esq->cor;
    }
    if(H->dir == NULL){
        H->dir->cor = !H->dir->cor;
    }
}

struct NO* rotacionaEsquerda(struct NO* A){
    struct NO* B = A->dir;
    A->dir = B->esq;
    B->esq = A;
    B->cor = A->cor;
    A->cor = RED;
    return B;
}


struct NO* rotacionaDireita(struct NO* A){
    struct NO* B = A->esq;
    A->esq = B->dir;
    B->dir = A;
    B->cor = A->cor;
    A->cor = RED;
    return B;
}


struct NO* move2EsqRED(struct NO* H){
    trocarCor(H);
    if(cor(H->dir->esq) == RED){
        H->dir = rotacionaDireita(H->dir);
        H = rotacionaEsquerda(H->dir);
        trocarCor(H);
    }
    return H;
}

struct NO* move2EsqESQ(struct NO* H){
    trocarCor(H);
    if(cor(H->esq->esq) == RED){
        H = rotacionaEsquerda(H->dir);
        trocarCor(H);
    }
    return H;
}


struct NO* balancear(struct NO* H){

    if(cor(H->dir) == RED)
        H = rotacionaEsquerda(H);

    if(H->esq != NULL && cor(H->esq) == RED && cor(H->esq->esq) == RED)
        H = rotacionaDireita(H);

    
    if(cor(H->esq) == RED && cor(H->dir) == RED)
        trocaCor(H);

    return H;
}