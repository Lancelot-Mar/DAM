#include <stdio.h>
#include <stdlib.h>

int main() {

    int tamagno = 0,cantidad = 0, tamagno_nuevo;

    printf("Dame la cantidad a inicial:");
    scanf("%d",&tamagno);

    int * arr = (int *)malloc(tamagno*sizeof(int));
    if(arr == NULL){
        free(arr);
        printf("ERROR\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < tamagno; i++) {
        arr[i] = i+1;
        printf("%d\n", arr[i]);
    }

    printf("Dame la cantidad a aumentar:");
    scanf("%d",&cantidad);

    tamagno_nuevo = (tamagno + cantidad);

    int * arr_new = realloc(arr,(tamagno_nuevo)*sizeof(int));

    arr_new = arr;

    if(arr == NULL){
        free(arr); 
        printf("ERROR\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < tamagno_nuevo; i++) {
        arr[i] = i+1;
        printf("%d\n", arr[i]);
    }

    free(arr); 
    return 0;
}


