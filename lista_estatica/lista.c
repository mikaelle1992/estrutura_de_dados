#include <stdio.h>
#include <stdlib.h>

#include "lista_sequencial.c"


int main(){
    struct aluno a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};

    Lista* li = cria_lista();
    int i;
    for(i=0; i < 4; i++)
        insere_lista_ordenada(li,a[i]);
        
    int x = tamanho_lista(li);

    int x = lista_cheia(li);
    if(lista_cheia(li));

    int x = lista_vazia(Lista* li);
    if(lista_vazia(li));


    int x = insere_lista_final(li, dados_aluno);

    int x = insere_lista_inicio(li, dados_aluno);



}

