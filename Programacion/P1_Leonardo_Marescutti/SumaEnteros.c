#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1;
	int numero2;

	int resultado_suma;
	int resultado_resta;
	int resultado_multiplicacion;
	int resultado_division;

	printf("Dame un numero: ");
	scanf("%d", &numero1);
	printf("Dame otro Numero: ");
	scanf("%d", &numero2);

	resultado_suma = numero1+numero2;
	resultado_resta = numero1-numero2;
	resultado_multiplicacion = numero1*numero2;
	resultado_division = numero1/numero2;

	printf("Total suma: %d\n", resultado_suma);
	printf("Total division: %d\n", resultado_division);
	printf("Total multiplicacion: %d\n", resultado_multiplicacion);
	printf("Total resta: %d\n", resultado_resta);

	return 0;

}
