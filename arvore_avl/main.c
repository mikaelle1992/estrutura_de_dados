#include <stdio.h>
#include <stdlib.h>

#include "arvore_avl.c"

int main()
{
    ArvAVL* avl;
    int res,i;
    int N = 10, dados[10] = {1,2,3,10,4,5,9,7,8,6};

    avl = cria_ArvAVL();

    for(i=0;i<N;i++){
        printf("========================\n");
        printf("Inserindo: %d\n",dados[i]);
        res = insere_ArvAVL(avl,dados[i]);
        printf("\n\nres = %d\n",res);
      
    }

    remove_ArvAVL(avl,6);
    printf("\nAVL tree:\n");

    libera_ArvAVL(avl);


    return 0;

}