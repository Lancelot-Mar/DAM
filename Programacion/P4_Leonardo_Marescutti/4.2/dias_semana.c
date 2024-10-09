#include <stdio.h>
#include <stdlib.h>
/**
 *	Autor: Leonardo Marescutti
 */

int main(){

	int dia;

	printf("Di el numero del dia(1-7) : \n");
	scanf(" %d", &dia); //Recogemos el valor de dia en int

	//Declaramos que dia devuelva el nombre del dia en base al numero del dia.

	switch (dia) {
	case 1:
		printf("Lunes\n");
		break;

	case 2:
		printf("Martes\n");
		break;
	
	case 3:
		printf("Miercoles\n");
		break;

	case 4:
		printf("Jueves\n");
		break;

	case 5:
		printf("Viernes\n");
		break;

	case 6:
		printf("Sabado\n");
		break;

	case 7:
		printf("Domingo\n");
		break;

	//Declaramos que en caso contrario devuelva error

	default:
		printf("error\n");
	
	}


return 0;
}
