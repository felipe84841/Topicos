#include<stdlib.h>

#include "h\Item.h"
#include "h\Lista.h"

int main(){
	celula_p lista;
	lista = Lista_novo();
	Lista_insereNoComeco(lista,'c');
	Lista_insereNoComeco(lista,'b');
	Lista_insereNoComeco(lista,'a');
	Lista_ImprimeLista(lista);
	return 0;
}
