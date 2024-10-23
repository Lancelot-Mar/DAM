#include<stdio.h>
#include<stdlib.h>

/**
 *
 * Autor: Leonardo Marescutti
 *
*/

int main() {
	int n = 10;
	int x = 0 , y = 1, z;

	printf("Serie de Fibonacci\n");

	for(int i = 1; i <= n; i++) {
		printf("%d\n", x);
		z = x + y;
		x = y;
		y = z;
	}

	return 0;
}
