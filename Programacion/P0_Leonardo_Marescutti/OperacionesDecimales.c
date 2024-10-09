#include <stdio.h>
#include <stdlib.h>

int main() {
	float Y = 2.2;
	float X = 1.25;
	float multiplicacion;
	float division;

	multiplicacion = Y * X;

	division = X/Y;

	printf("La multiplicacion es %.3f\n", multiplicacion);
	printf("La division es %.3f\n", division);
	return 0;
}
