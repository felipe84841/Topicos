#include<stdio.h>

#include "h\Point.h"

int main(){
	Point p1,p2;
	p1.x = p1.y = 0;
	p2.x = p2.y = 2;
	printf("%d", distancia(p1,p2) );
}
