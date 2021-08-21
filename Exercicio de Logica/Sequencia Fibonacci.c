#include <stdio.h>

// Elabore um algoritmo que gere a sequencia Fibonacci até o 20° termo
// William Brito

int main(){

int a,x,y,z;

    x = 1;
	y = 1;
	z = 1;
	
	for(a=0; a<=19; a++){
		z = x+y;
		x = y;
	    y = z;
	    z = y-x;
	printf("\n Termo %d\n",z);
   }
}
