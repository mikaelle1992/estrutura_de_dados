#include <stdlib.h>
#include "fila_estatica.h"

struct fila
{
    int inicio, final, qtd;
    struct aluno dados[MAX];
    
};

Fila* cria_fila(){
    Fila *fi = (Fila*)malloc(sizeof(Fila));
    if(fi != NULL){
        fi->inicio = 0;
        fi->final = 0;
        fi->qtd = 0;
    }
    return fi;
}

void libera_fila(Fila* fi){
    free(fi);
};

int tamanho_fila(Fila* fi){
    if(fi == NULL){
        return -1;
    }
    return fi->qtd;
};

int fila_cheia(Fila* fi){
    if(fi == NULL){
        return -1;
    }
    if(fi->qtd == MAX){
        return 1;
    }
    else{
        return 0;
    }
};

int fila_vazia(Fila* fi){
    if(fi == NULL){
        return -1;
    }
    if(fi->qtd == 0){
        return 1;
    }
    else{
        return 0;
    }
    
}