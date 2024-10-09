#include <stdio.h>
#include <stdlib.h>
/**
 *	Autor: Leonardo Marescutti
 */

int main(){

	float y;
	float x;

	printf("Dame un numero: \n");
	scanf(" %f", &x); //Recogemos el valor de x en float

	printf("Dame Otro numero: \n");
	scanf(" %f", &y); //Recogemos el valor de y en float

	char calc;

	printf("Tipo de calculo (+,-,*,/) : \n");
	scanf(" %c", &calc); //Recogemos el valor de calc en char

	//Declaramos que si calc sea igual a los simbolos matematicos ejecute el simbolo elegido:

	switch (calc) {
	case '+':
		printf("%f+%f=%f\n",x,y,x+y);
		break;

	case '-':
		printf("%f-%f=%f\n",x,y,x-y);
		break;
	
	case '*':
		printf("%f*%f=%f\n",x,y,x*y);
		break;

	case '/':
		printf("%f/%f=%f\n",x,y,x/y);
		break;

	//Declaramos que en caso contrario devuelva error

	default:
		printf("error\n");
	
	}


return 0;
}
