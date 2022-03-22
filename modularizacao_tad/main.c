#include <stdio.h>
#include <stdlib.h>

#include "Ponto.c"


int main(){
	float d;
	Ponto *p,*q;
	
	
	p = pto_cria(10.0,27.0);
	q = pto_cria(7.0,23.0);
	// q->x = 2;  //ERRO
	
	d = pto_distancia(p,q);
	printf("Distancia entre pontos: %f \n",d);
	pto_libera(q);
	pto_libera(p);
	
	system("pause");
	return 0;
}