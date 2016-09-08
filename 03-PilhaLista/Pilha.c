#include<stdlib.h>

#include "h\Pilha.h"
#include "h\Item.h"
#include "h\mallocError.h"
#include "h\Lista.h"


pilha_p Pilha_novo() {
	pilha_p p;
	p = (pilha_p) malloc(sizeof(p));
	VERIFY_MALLOC(p);
	p->lista = Lista_novo();
	return p;
}

void Pilha_empilha(pilha_p p, Item it){
	Lista_insereNoComeco(p->lista,it);
}

Item Pilha_desempilha(pilha_p p){
	if(PilhaVet_vazia(p)){
		printf("A pilha está vazia!");
		exit(1);
	}
	Item it;
	it = Lista_primeiro(p->lista);
	Lista_removePrimeiro(p->lista);
	return it;
}

int Pilha_vazia(pilha_p p){
	return Lista_vazia(p->lista);
}

void Pilha_destroi(pilha_p p){
	Item it;
	while(!PilhaVet_vazia(p)){
		it = PilhaVet_desempilha(p);
		Item_destroi(it);
	}
	Lista_destroi(p->lista);
	free(p);
}
