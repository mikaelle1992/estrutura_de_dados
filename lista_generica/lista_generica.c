#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_generica.h" 


struct item{
    int chave;
    void *info;
};

struct lista{
    int qtd, TAMANHO_TIPO;
    struct item dados[MAX];
};

Lista* criaLista(int TAMANHO_TIPO){
    Lista *li;
    li = (Lista*) malloc(sizeof(struct lista));
    if(li != NULL){
        li->qtd = 0;
        li->TAMANHO_TIPO = TAMANHO_TIPO;
    }
    return li;
}

void liberaLista(Lista* li){
    int i;
    for(i=0; i< li->qtd; i++){
        free(li->dados[i].info);
    }
    free(li);
}

int buscaLista(Lista* li, int chave, void *dados){
    if(li == NULL)
        return 0;
    int i = 0;
    while(i < li->qtd && li->dados[i].chave != chave)
        i++;

    if(i == li->qtd)
        return 0;

    memcpy(dados,li->dados[i].info,li->TAMANHO_TIPO);

    return 1;
}
