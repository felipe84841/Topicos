#ifndef __PilhaVet__
#define __PilhaVet__

#include "Item.h"

struct pilha_v {
	Item *v;
	int topo, tamMax;
};

typedef struct pilha_v pilha_v_t;
typedef struct pilha_v* pilha_v_p;

pilha_v_p PilhaVet_novo(int tam);
void PilhaVet_empilha(pilha_v_p p, Item it);
Item PilhaVet_desempilha(pilha_v_p p);
int PilhaVet_vazia(pilha_v_p p);
void PilhaVet_destroi(pilha_v_p p);


#endif