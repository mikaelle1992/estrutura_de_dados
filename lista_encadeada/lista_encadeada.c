#include <stdlib.h>
#include "lista_encadeada.h"

struct elemento{
    struct aluno dados;
    struct elemento *prox;
}

typedef struct elemento Elem;

Lista* cria_lista()
{
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL)
    {
        *li = NULL;
    }
    return li;
};

void libera_lista(Lista *li)
{
    if(li != NULL)
    {
        Elem* no;
        //*li inicio da lista
        while((*li) != NULL){
            no = *li;
            *li = (*li)-> prox;
            free(no);
        }
        free(li);
    }
};