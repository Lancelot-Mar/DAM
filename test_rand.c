#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    int min, max, randomvida, vueltas = 3;

    // Inicializar el generador de números aleatorios
    srand(time(0));

    // Definir el rango
    min = 1;  // Cambia este valor según tu necesidad
    max = 100;  // Cambia este valor según tu necesidad

for (int i = 0; i < vueltas; ++i){
    // Generar el número aleatorio
    randomvida = (rand() % (max - min + 1)) + min;
    printf("%d \n", randomvida);
}

return 0;

}