#include<math.h>

#include "h\Point.h"

float distancia(Point p1, Point p2){
	return sqrt( (p1.x - p2.x)^2 + (p1.y - p2.y)^2 );
}
