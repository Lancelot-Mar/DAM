#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1;
	int numero2;

	float resultado_suma;
	float resultado_resta;
	float resultado_multiplicacion;
	float resultado_division;

	printf("Dame un numero: ");
	scanf("%d", &numero1);
	printf("Dame otro Numero: ");
	scanf("%d", &numero2);

	resultado_suma = numero1+numero2;
	resultado_resta = numero1-numero2;
	resultado_multiplicacion = numero1*numero2;
	resultado_division = numero1/numero2;

	printf("Total suma: %f\n", resultado_suma);
	printf("Total division: %f\n", resultado_division);
	printf("Total multiplicacion: %f\n", resultado_multiplicacion);
	printf("Total resta: %f\n", resultado_resta);

	return 0;

}
