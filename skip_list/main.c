#include <stdio.h>
#include <stdlib.h>

#include "skip_list.c"


int main(){

    SkipList* sk = criaSkipList(3, 0.5);

        
    liberaSkipList(sk);

    system("pause");
    return 0;
}