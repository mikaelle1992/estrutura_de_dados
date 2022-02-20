#include <stdlib.h>
#include "lista_din_encad_dupla.h"

struct elemento{
    struct elemento *ant;
    struct aluno dados;
    struct elemento *prox;
};

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
       
        while((*li) != NULL){
            no = *li;
            *li = (*li)-> prox;
            free(no);
        }
        free(li);
    }
}

int tamanho_lista(Lista *li){
    if (li == NULL){
       return 0; 
    } 
    int cont = 0;
    Elem* no = *li;

    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

int lista_cheia(Lista *li){
    return 0;
    // A lista não tem uma tamanho determinado. Por isso estou assumindo que a lista nunca esta cheia e retorna sempre Zero"
}

int lista_vazia(Lista *li){
    if(li == NULL)
    {
        return 1;
    }
    if(*li == NULL)
    {
        return 1;
    }
    return 0;
}

int insere_lista_inicio(Lista *li, struct aluno al)
{
    if(li == NULL){
        return 0;
    }
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL){
        return 0;
    }
    no->dados = al;
    no->prox = (*li);
    no->ant = NULL;
    if(*li != NULL){
        (*li)->ant = no;
    }
    *li = no;
    return 1;
}

int insere_lista_final(Lista *li, struct aluno al){
    if(li == NULL) 
    {
        return 0;
    }
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL){
        return 0;
    }
    no->dados = al;
    no->prox =NULL;
    if((*li) == NULL){
        no->ant = NULL;
        *li = no;

    }
    else{
        Elem *aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux ->prox = no;
        no->ant = aux;
    }
    return 1;

}

int insere_lista_ordenada(Lista *li, struct aluno al){
    if(li == NULL) 
    {
        return 0;
    }
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL){
        return 0;
    }
    no->dados = al;
    if(lista_vazia(li)){
        no->prox = NULL;
        no->ant = NULL;
        *li = no;
        return 1;
    }
    else
    {
        Elem *ante, *atual = *li;
        while(atual != NULL && atual-> dados.matricula < al.matricula){
            ante = atual;
            atual = atual->prox;
        }
        if (atual == *li){
            no->ant = NULL;
            (*li)->ant = no;
            no->prox = (*li);
            *li = no;
        }
        else{
            no->prox = ante->prox;
            no->ant = ante;
            ante->prox = no;
            if(atual != NULL){
                atual->ant = no;
            }
        }
        return 1;
    }
}



void imprime_lista(Lista* li){
    if(li == NULL)
        return;
    Elem* no = *li;
    while(no != NULL){
        printf("Matricula: %d\n",no->dados.matricula);
        printf("Nome: %s\n",no->dados.nome);
        printf("Notas: %f %f %f\n",no->dados.n1,
                                   no->dados.n2,
                                   no->dados.n3);
        printf("-------------------------------\n");

        no = no->prox;
    }
}