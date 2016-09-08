#include<stdlib.h>

#include "h\Fila.h"
#include "h\Item.h"
#include "h\mallocError.h"

fila_p Fila_novo(int tamMax){
	fila_p f;
	f =  (fila_p) malloc(sizeof(*f));
	VERIFY_MALLOC(f);
	f->tamMax = tamMax + 1;
	f->inicio=0;
	f->fim=0;
	f->v = (Item*) malloc(tamMax*sizeof(Item));
	VERIFY_MALLOC(f->v);
	return f;
}

void Fila_enfilera(fila_p f, Item it){
	if( Fila_cheia(f) ){
		printf("Error fila cheia!");
		exit(1);
	}
	f->v[f->fim] = it;
	f->fim = (f->fim + 1) % f->tamMax;
}

Item Fila_desenfilera(fila_p f){
	if(Fila_vazia(f)){
		printf("Error fila vazia!");
		exit(1);
	}
	Item it;
	it = f->v[f->inicio];
	f->inicio = (f->inicio +1) % f->tamMax;
	return it;
}

int Fila_vazia(fila_p f){
	return f->inicio == f->fim;
}

int Fila_cheia(fila_p f){
	return ( f-> fim + 1) % f->tamMax - f->inicio;
}

int Fila_tamanho(fila_p f){
	return ( f->fim - f->inicio + f->tamMax ) % f->tamMax;
}

void Fila_destroi(fila_p f){
	Item it;
	while(!Fila_vazia(f)){
		it = PilhaVet_desempilha(f);
		Item_destroi(it);
	}
	free(f->v);
	free(f);
}