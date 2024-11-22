#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void intercambiar(int *n1,int *n2){
	int p;

	*n1 = p;
	*n2 = *n1;
	p = *n2;
}
int main(){
	
	int x = 10;
	int y = 5;

	intercambiar(x, y);
	printf("Valor: %d\n", x);
	printf("Valor: %d\n", y);
	return 0;	
}
