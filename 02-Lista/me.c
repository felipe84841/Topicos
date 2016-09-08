#include<stdlib.h>
#include<stdio.h>

#include "h\mallocError.h"

int main(){
	int *c,*e;
	c = malloc(sizeof(int));
	*c = 1;
	e = NULL;
	printf("Starting...\n");
	VERIFY_MALLOC(c);
	printf("V1 sucess\n");
	//
	VERIFY_MALLOC(e);
	printf("v2 fail\n");
	return 0;
}
