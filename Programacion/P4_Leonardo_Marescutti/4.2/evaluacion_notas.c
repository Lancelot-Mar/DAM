#include<stdio.h>
#include<stdlib.h>
/**
 *	Autor: Leonardo Marescutti
 */

int main(){

	int x;
	
	printf("Que nota tiene(0-10): \n");
	scanf("%d",&x); //Recogemos el valor de x en int

	//Declaramos que si x es igual o mayor a 5 devuelva "Aprobado" en caso contrario "Suspenso"

	x == (x >= 5) ? printf("Aprobado\n") : printf("Suspenso\n");

return 0;
}
