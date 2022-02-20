#include <stdio.h>
#include <stdlib.h>

#include "lista_encadeada.c"

int main(){

    struct aluno al, a[4] = {{1,"Ana",5.5,9.5,7.0},
                         {4,"João",6.2,9.2,8.8},
                         {3,"Pedro",6.1,9.5,7.2},
                         {5,"Bia",8.5,9.1,5.9}};

    struct aluno  b = {2,"bianca",8.4,8.5,6.0};
    struct aluno  c = {7,"Ricardo",5.5,5.5,1.0};

    Lista* li = cria_lista();
    int i;

    for(i=0; i < 4; i++)
        insere_lista_ordenada(li,a[i]);

    insere_lista_inicio(li, b);

    insere_lista_final(li, c);

    int x = tamanho_lista(li);
    printf("tamanho: %d\n", x);

    
    int x0 =lista_cheia(li);
    printf("lista cheia: %d\n", x0);

    int x1 =lista_vazia(li);
    printf("lista vazia: %d\n", x1);

    int pos = 7;
    int x2 =consulta_lista_pos(li, pos, a);
    if (x2){
        printf("Posição %d encontrada na lista.\n\n ",pos);
    }
    else{
        printf("Posição %d não foi encontrada na lista.\n\n",pos);
    }


    int mat = 7;
    int x3 =consulta_lista_mat(li, mat, a);
    if (x3){
        printf("Matricula %d encontrada na lista.\n\n ",mat);
    }
    else{
        printf("Matricula %d não foi encontrada na lista.\n\n ",mat);
    }

    imprime_lista(li);
    printf("\n\n\n\n");

    remove_lista_inicio(li);
    remove_lista(li, 5);
    imprime_lista(li);

    libera_lista(li);
    system("pause");
    return 0;
}
