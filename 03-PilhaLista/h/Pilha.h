#ifndef __Pilha__
#define __Pilha__

#include "Item.h"
#include "Lista.h"


struct pilha {
	celula_p lista;
};

typedef struct pilha pilha_t;
typedef struct pilha* pilha_p;

pilha_p Pilha_novo();
void Pilha_empilha(pilha_p p, Item it);
Item Pilha_desempilha(pilha_p p);
int Pilha_vazia(pilha_p p);
void Pilha_destroi(pilha_p p);


#endif