#include <stdio.h>
#include <stdlib.h>

#include "deque_estatico.c"


int main(){
    struct aluno a[4] = {{2,"Ana",5.5,9.5,7.0},
                         {3,"João",6.2,9.2,8.8},
                         {4,"Pedro",6.1,9.5,7.2},
                         {5,"Bia",8.5,9.1,5.9}};

    struct aluno b = {7,"Ricardo",9.7,9.5,8.0};
    struct aluno c = {8,"Bruno",6.7,8.4,4.9};
   
    Deque* dq = cria_Deque();



    int x1 =  Deque_cheia(dq);
    printf("Deque cheia %d\n", x1);

    int y = insereInicio_Deque(dq, b);
    printf("inserio no inicio deque %d\n", y);

    int y2 = insereFinal_Deque(dq, c);
    printf("inserio no final deque %d\n", y2);

    int x2 = Deque_vazio(dq);
    printf("Deque vazio %d\n", x2);


    int x = tamanho_Deque(dq);
    printf("tamanho do Deque %d\n", x);

    libera_Deque(dq);
    system("pause");
    return 0;
}