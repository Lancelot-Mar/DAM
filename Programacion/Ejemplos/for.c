#include<stdio.h>
#include<stdlib.h>

/**
 *
 * Autor: Leonardo Marescutti
 *
 *
 * 1)inicializo i = 0
 * 2)check valor i
 * 3)printf
 * 4)ejecutamos el interior del bucle i = i + 1 valor de i es 2
 * 5)repito punto 2
 * 6)printf
 * 7)Repetimos asta llegar a mayor o igual a 5
 * 8)Termina Bucle
 *
*/


int main(){
	
	int i = 0;

	for (/*valor_inicial*/ i = 0 ;/*Condicion*/ i < 5; i = i + 1 /*Codigo a ejecutar entre vueltas*/){

		printf("%d",i);
	}

	printf("Terminado\n");

	return 0;
}
