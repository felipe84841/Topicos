#ifndef __agenda__
#define __agenda__

#include "Lista.h"

struct agenda_info {
	char *nome,*sobrenome,*Endereco,*telefone,*email,*dataNascimento;
};
typedef struct agenda_info agenda_info_t;
typedef struct agenda_info* agenda_info_p;


typedef celula_p agenda;


#endif