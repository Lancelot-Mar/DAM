#include <stdio.h>
#include <stdlib.h>

int main() {
	float Y = 2;
	float X = 7;
	int resta,multiplicacion;
	float division;

	resta = X - Y;

	multiplicacion = Y * X;

	division = X/Y;

	printf("La resta es %d\n", resta);
	printf("La multiplicacion es %d\n", multiplicacion);
	printf("La division es %.2f\n", division);
	return 0;
}
