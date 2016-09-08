#include<stdlib.h>

#include "h\PilhaVet.h"
#include "h\Item.h"
#include "h\mallocError.h"


pilha_v_p PilhaVet_novo(int tam) {
	pilha_v_p p;
	p = (pilha_v_p) malloc(sizeof(p));
	VERIFY_MALLOC(p);
	p->topo = 0;
	p->tamMax = tam;
	p->v = (Item*) malloc(tam  * sizeof(Item));
	VERIFY_MALLOC(p->v);
	return p;
}

void PilhaVet_empilha(pilha_v_p p, Item it){
	if(p->topo == p->tamMax){
		printf("Pilha Cheia!");
		exit(1);
	}
	(p->v)[(p->topo) ++] = it;
}

Item PilhaVet_desempilha(pilha_v_p p){
	Item it;
	if(PilhaVet_vazia(p)){
		printf("Pilha Vazia!");
		exit(1);
	}
	it = (p->v)[--(p->topo)];
	return it;
}

int PilhaVet_vazia(pilha_v_p p){
	if(p->topo==0) return 1;
	else return 0;
}

void PilhaVet_destroi(pilha_v_p p){
	Item it;
	while(!PilhaVet_vazia(p)){
		it = PilhaVet_desempilha(p);
		Item_destroi(it);
	}
	free(p->v);
	free(p);
}
