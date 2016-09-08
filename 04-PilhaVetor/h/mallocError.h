#ifndef __mallocError__
#define __mallocError__

#include<stdio.h>
#include<stdlib.h>

#define VERIFY_MALLOC(p) \
							do { \
								if( p == NULL ) { \
									printf("Error on malloc!"); \
									exit(1); \
								} \
							} while(0)

#endif
