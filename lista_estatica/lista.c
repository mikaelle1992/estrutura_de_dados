#include <stdio.h>
#include <stdlib.h>

#include "lista_sequencial.c"


int main(){
    struct aluno a[4] = {{3,"Ana",5.5,9.5,7.0},
                         {2,"João",6.2,9.2,8.8},
                         {4,"Pedro",6.1,9.5,7.2},
                         {1,"Bia",8.5,9.1,5.9}};

    Lista* li = cria_lista();
    int i;
    for(i=0; i < 4; i++)
        insere_lista_ordenada(li,a[i]);
        
    int x = tamanho_lista(li);
    print("tamanho da lista %d", x);

    int x1 = lista_cheia(li);
    if(lista_cheia(li));

    int x2 = lista_vazia(Lista* li);
    if(lista_vazia(li));

    remove_lista_final(a[4]);
    
    int x2 = remove_lista(li, a[1]->matricula);

    // int x = insere_lista_final(li, dados_aluno);

    // int x = insere_lista_inicio(li, dados_aluno);



}

