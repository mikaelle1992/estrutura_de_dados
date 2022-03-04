#include <stdlib.h>
#include "fila_dinamica.h"

struct fila
{
    struct elemento *inicio;
    struct elemento *final;
};

struct elemento{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Fila* cria_fila(){
    Fila *fi = (Fila*)malloc(sizeof(Fila)); // alocar memório do ponteiro Fila
    if(fi != NULL){
        fi->inicio =NULL;
        fi->final =NULL;
    }
    return fi;
};

void libera_fila(Fila* fi){
    if (li != NULL){
        Elem* no;
        while(fi->inicio != NULL){
            no = fi->inicio;
            fi->inicio = fi->inicio->prox;
            free(no);
        }
        free(fi);
    }
};

