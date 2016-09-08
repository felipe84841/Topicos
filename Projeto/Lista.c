#include<stdlib.h>

#include "h\agenda.h"
#include "h\Lista.h"
#include "h\mallocError.h"

celula_p Lista_novo(){
	celula_p cabeca;
	cabeca = (celula_p) malloc(sizeof(*cabeca));
	VERIFY_MALLOC(cabeca);
	cabeca->prox = NULL;
	return cabeca;
}

void Lista_insereNoComeco(celula_p lista, Item it) {
	celula_p prox;
	prox = lista->prox;
	lista->prox = (celula_p) malloc(sizeof(celula_t));
	VERIFY_MALLOC(lista->prox);
	lista->prox->info = it;
	lista->prox->prox = prox;
}
void Lista_ImprimeLista(celula_p lista){
	celula_p l1;
	l1 = lista->prox;
	while( l1 != NULL ) {
		printf("%c \n", l1->info);
		l1 = l1 -> prox;
	}
}

