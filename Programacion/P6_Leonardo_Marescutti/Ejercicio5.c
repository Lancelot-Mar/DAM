#include<stdio.h>
#include<stdlib.h>

/**
 *
 * Autor: Leonardo Marescutti
 *
*/


int main(){

	int n;	
	int fact = 1;
	
	printf("Dame un numero: \n");
	scanf("%d", &n);

	if(n<0){
		printf("El numero es negativo:ERROR\n");
	} else {
		for (int i = 1 ;i <= n; i++ ){
		fact *= i;
		}
	}
	printf("El factorial de %d es %d\n",n,fact);

	return 0;
}
