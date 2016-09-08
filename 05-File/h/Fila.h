#ifndef __Fila__
#define __Fila__

#include "Item.h"

struct fila {
	Item *v;
	int tamMax, inicio, fim;
};

typedef struct fila fila_t;
typedef struct fila* fila_p;

fila_p Fila_novo(int tamMax);
void Fila_enfilera(fila_p f, Item it);
Item Fila_desenfilera(fila_p f);
int Fila_vazia(fila_p f);
int Fila_cheia(fila_p f);
int Fila_tamanho(fila_p f);
void Fila_destroi(fila_p f);


#endif