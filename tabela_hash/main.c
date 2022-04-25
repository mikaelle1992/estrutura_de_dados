#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.c"

int main(){
    int tamanho = 1024;
    Hash *tabela = criaHash(tamanho);

    struct aluno al, a[4] = {{12352,"Andre",9.5,7.8,8.5},
                        {7894,"Ricardo",7.5,8.7,6.8},
                        {3451,"Bianca",9.7,6.7,8.4},
                        {5293,"Ana",5.7,6.1,7.4}};

    struct aluno all, b[4] = {{12369,"Rico",9.2,2.8,9.5},
                    {9894,"Junior",9.9,6.1,7.1},
                    {4461,"Florinda",5.7,6.7,8.4},
                    {6423,"Chaves",6.7,3.9,9.4}};

    int i;
    for(i=0; i < 4; i++){
        insereHash_SemColisao(tabela,a[i]);
    }
    printf("------------\n\n");

    buscaHash_SemColisao(tabela, 12352, &al);
    printf("%s, %d\n",al.nome,al.matricula);

    buscaHash_SemColisao(tabela, 3451, &al);
    printf("%s, %d\n",al.nome,al.matricula);

    int j;
    for(j=0; j < 4; j++){
        insereHash_EnderAberto(tabela,b[j]);
    }
    buscaHash_SemColisao(tabela, 5293, &al);
    printf("%s, %d\n",al.nome,al.matricula);

    int x = buscaHash_EnderAberto(tabela, 4461, &all);
    printf("%d", x);


    liberaHash(tabela);

    system("pause");
    return 0;

}