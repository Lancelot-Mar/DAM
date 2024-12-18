#include <stdio.h>
#include <stdlib.h>

int main() {

    int tamagno = 0;

    scanf("%d",&tamagno);

    int * num = (int *)malloc(tamgno*sizeof(int));

    if(num == NULL){
        free(num);
        printf("ERROR\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < tamagno; i++) {
        scanf("%d",&num[i]);
    }
    
    for (int i = 0; i < tamagno; i++) {
        printf("p[%d] = %d\n", i+1, num[i]);
    }

    free(num); 
    return 0;
}
