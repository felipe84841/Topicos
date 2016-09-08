#ifndef __Lista__
#define __Lista__

#include "Item.h"

struct celula {
	Item info;
	struct celula *prox;
};
typedef struct celula celula_t;
typedef struct celula* celula_p;

celula_p Lista_novo();
void Lista_insereNoComeco(celula_p lista, Item it);
void Lista_ImprimeLista(celula_p lista);

void Lista_removePrimeiro(celula_p lista);
void Lista_tamanho(celula_p lista);

Item Lista_primeiro(celula_p lista);
void Lista_removePrimeiro(celula_p lista);



#endif
