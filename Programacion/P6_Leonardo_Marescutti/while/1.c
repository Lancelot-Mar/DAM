#include<stdio.h>
#include<stdlib.h>

/**
 *
 * Autor: Leonardo Marescutti
 *
*/


int main(){
	
	int numero;
	int digito;
	int suma = 0;


	printf("Introduce un Numero: \n");	
	scanf("%d", &numero);
	
	do{
		digito = numero / 10;
		suma += numero % 10;
		numero = digito;
	}while(numero != 0);

	printf("%d", suma);

	return 0;
}
