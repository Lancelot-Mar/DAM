#include<stdio.h>
#include<stdlib.h>

/**
 *
 * Autor: Leonardo Marescutti
 *
*/

int main() {
    int n, x = 0;

    printf("Introduce un número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            x++;
        }
    }

    printf("El número %d tiene %d divisores.\n", n, x);

    return 0;
}
