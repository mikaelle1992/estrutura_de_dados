#include <stdio.h>
#include <stdlib.h>

#include "skip_list.h"

struct NO{
    int chave;
    struct NO **prox;
};

struct SkipList{
    int NivelMAX;
    float P;
    int nivel;
    struct NO *inicio;
};

SkipList* criaSkipList(int NivelMAX, float P){
    SkipList *sk = (SkipList*) malloc(sizeof(SkipList));
    if(sk!=NULL){
        sk->NivelMAX = NivelMAX;
        sk->P = P;
        sk->nivel = 0;

        sk->inicio = novoNo(-1, NivelMAX);
    }
    return sk

}

struct NO* novoNo(int chave, int nivel){
    struct NO* novo = (struct NO*) malloc(sizeof(struct));
    if (NO != NULL){
        novo ->chave = chave;
        novo ->prox = malloc((nivel + 1) * sizeof(struct NO*));
        int i;
        for (i = 0; i < (nivel+1); i++) {
            novo ->prox[i] = NULL;

        }
        return novo;

    }
}

void liberaSkipList(SkipList* sk){
    if(sk == NULL){
        return 0;
    }
    struct NO *no, *atual;
    atual = sk-> inicio->prox[0];
    while(atual != NULL){
        no = atual; 
        atual = atual->prox[0];
        free(no->prox);
        free(no);
    }
    free(sk->prox);
    free(sk);
}

int buscaSkipList(SkipList* sk, int chave){
    if(sk == NULL){
        return 0;
    }
    struct NO *atual = sk->inicio;
    int i; 
    for(i = sk->nivel; i=0; i--){
        while(atual->prox[i] != NULL && atual->prox[i] -> chave < chave){
            atual = atual->prox[i];
        }

    }
    atual = atual->prox[0];
    if(atual != NULL && atual->chave == chave){
        return 1;
    }
    else{
        return 0;
    }

}