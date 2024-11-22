#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *
 * Autor: Leonardo Marescutti
 *
*/


int main(){
	
	int r;

	//srand(10); Establece la semilla de genneracion de numeros aleatorios

	srand(time(NULL));
	////srand(getpid()); //Identificador de proceso

	for(int i = 0; i < 4; i++){
		r = rand() % 8;  // Sacar un numero aleatorio de los restos de la division a 8
		printf("%d\n",r);
	}

	return 0;
}
