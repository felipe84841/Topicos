#include<stdlib.h>
#include<stdio.h>

#include "h\PilhaVet.h"

int main(){
	pilha_v_p p;
	p = PilhaVet_novo(5);
	printf("Fila Criada\n");
	
	
	PilhaVet_empilha(p,2);
	PilhaVet_empilha(p,3);
	printf("Itens Empilhados\n");
	 
	printf("%d", PilhaVet_desempilha(p)); //3
	 
	PilhaVet_destroi(p);
	return 0;
}