#include <stdio.h>
#include <stdlib.h>

#include "deque_dinamico.c"


int main(){
    struct aluno a[4] = {{2,"Ana",5.5,9.5,7.0},
                         {3,"João",6.2,9.2,8.8},
                         {4,"Pedro",6.1,9.5,7.2},
                         {5,"Bia",8.5,9.1,5.9}};

    struct aluno b = {7,"Ricardo",9.7,9.5,8.0};
    struct aluno c = {8,"Bruno",6.7,8.4,4.9};
   
    Deque* dq = cria_Deque();

    libera_Deque(dq);
    system("pause");

    return 0;

}