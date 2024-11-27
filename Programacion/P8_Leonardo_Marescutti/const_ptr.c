#include <stdio.h>

int main() {

    int a = 10,
    int *const ptr = &a;  // El puntero es constante

    // const int *const ptr = &a;  // El puntero es constante y el contenido de este tambien es constante


    printf("Valor: %d\n", *ptr);

    *ptr = 30;   // Esto es válido porque el valor no es constante el contenido

    printf("Nuevo valor: %d\n", *ptr);

    return 0;
}