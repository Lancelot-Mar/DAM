#include<stdio.h>
#include<stdlib.h>

/**
 *
 * Autor: Leonardo Marescutti
 *
*/

int main() {
	int n = 5;

	for(int i = 1; i <= n; i++) {
		for(int x = 1; x <= i; x++){
		printf("%d", x);
		}
	printf("\n");
	}

	return 0;
}
