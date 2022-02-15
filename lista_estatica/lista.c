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
    printf("tamanho da lista %d\n", x);

    int x1 = lista_cheia(a);
    printf("Lista cheia %d\n", x1);

    int x2 = lista_vazia(li);
    printf("tamanho da vazia %d\n", x2);

    // remove_lista_final(3);
    
    // remove_lista(li, li->dados[i].matricula);

    // int x = insere_lista_final(li, dados_aluno);

    // int x = insere_lista_inicio(li, dados_aluno);

    int x3 = consulta_lista_pos(li, 2, a);
    printf("consulta %d\n", x3);

    int x4 = consulta_lista_pos(li, 4, a);
    printf("consulta da %d\n\n", x4);

    imprime_lista(a);
    printf("\n\n\n\n");

    libera_lista(li);
    system("pause");
    return 0;
}

