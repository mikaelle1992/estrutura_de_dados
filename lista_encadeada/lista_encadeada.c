#include <stdio.h>
#include <stdlib.h>

struct ponto{
    float x;
    float y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos;

void add(float x, float y){
    Ponto *p = (Ponto*)malloc(sizeof(Ponto));
    p->x= x;
    p->y= y; 
    p->prox = listaPontos;
    listaPontos = p;
}

int main(){
    add(4,9);
    add(6,7);

    printf("Ponto = (%.0f)",listaPontos->prox->x);
    printf("Ponto = (%.0f)",listaPontos->x);
    
    return 0;
}