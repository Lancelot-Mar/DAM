#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *	Autor: Leonardo Marescutti
 */

int main(){

	const int LIMITE = 100;

	int * x = &LIMITE

	printf("El valor de LIMITE es: %d\n", LIMITE);

	//LIMITE = 200;

	*x = 200

	printf("El valor de LIMITE es: %d\n",*x);

	return 0;
}
