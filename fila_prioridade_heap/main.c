#include <stdio.h>
#include <stdlib.h>
#include "fila_prioridade_heap.c"


int main(){
    struct paciente itens[6] = {{"Andre",1},
                                {"Bianca",2},
                                {"Carlos",5},
                                {"Nilza",8},
                                {"Inacio",6},
                                {"Edu",4}};

    FilaPrioHeap* fp;
    fp = cria_FilaPrioHeap();

    int i;
    for (i=0; i< 6; i++){
        printf("%d) %d %s\n",i,itens[i].prio, itens[i].nome);
        insere_FilaPrioHeap(fp, itens[i].nome,itens[i].prio);
    }

    printf("=================================\n");

    imprime_FilaPrioHeap(fp);

    //teste
    printf("=================================\n");
    insere_FilaPrioHeap(fp, "Teste",9);
    imprime_FilaPrioHeap(fp);

    printf("=================================\n");
    remove_FilaPrioHeap(fp);
    imprime_FilaPrioHeap(fp);

    printf("=================================\n");
    for (i=0; i< 6; i++){
        char nome[30];
        consulta_FilaPrioHeap(fp, nome);
        printf("%d) %s\n",i,nome);
        remove_FilaPrioHeap(fp);
    }

    libera_FilaPrioHeap(fp);

    system("pause");
    return 0;
}