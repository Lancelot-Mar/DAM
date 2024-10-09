#include <stdio.h>
#include <stdlib.h>

float suma(
	float n1,
	float n2
	){
	return n1+n2;	
}

float resta(
	float n1,
	float n2
	){
	return n1-n2;
}

float multiplicacion(
	float n1,
	float n2
	){
	return n1*n2;
}

float division(
	float n1,
	float n2
	){
	return n1/n2;
}

int main(){

	float n1;
	float n2;

	printf("Dame un numero: ");
	scanf("%f", &n1);
	printf("Dame otro Numero: ");
	scanf("%f", &n2);

	printf("Total suma: %f\n", suma(n1,n2));
	printf("Total division: %f\n", division(n1,n2));
	printf("Total multiplicacion: %f\n", multiplicacion(n1,n2));
	printf("Total resta: %f\n", resta(n1,n2));

	return 0;

}
