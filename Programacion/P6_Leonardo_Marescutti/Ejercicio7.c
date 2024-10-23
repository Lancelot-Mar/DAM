#include<stdio.h>
#include<stdlib.h>

/**
 *
 * Autor: Leonardo Marescutti
 *
*/


int main(){
	
	int n;

	printf("Introduce el tamaño del cuadrado: \n");
	scanf("%d", &n);

	for (int x = 0 ; x < n ; x++ ){
	for (int y = 0 ; y < n ; y++ ){
		printf("* ");
	}
	printf("\n");
	}
	return 0;
}
