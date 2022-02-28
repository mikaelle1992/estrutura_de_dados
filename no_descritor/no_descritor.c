#include <stdlib.h>
#include "no_descritor.h"

struct elemento{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

struct descritor{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};

Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        li->inicio = NULL;
        li->final = NULL;
        li->qtd = 0;
    }
    return li;
};

void libera_lista(Lista* li){
    if(li != NULL){
        Elem* no;
        while((li->inicio) !=NULL){
            no = li->inicio;
            li->inicio = li->inicio->prox;
            free(no);
        }
        free(li);
    }
};

int tamanho_lista(Lista* li){
    if(li == NULL){
        return 0;
    }
    return li->qtd;
};
