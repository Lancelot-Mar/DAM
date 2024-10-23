#include<stdio.h>
#include<stdlib.h>

/**
 *
 * Autor: Leonardo Marescutti
 *
*/


int main(){
	
	int n;	
	int suma = 0;

	printf("Dame un numero: \n");
	scanf("%d", &n);

	for (int i = 1 ; i <= n ; i++ ){
		suma += i;
	}
	printf("La suma es: %d\n ",suma);

	return 0;
}
