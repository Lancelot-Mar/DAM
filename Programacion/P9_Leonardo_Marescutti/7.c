#include <stdio.h>
#include <stdlib.h>

int main() {

    int tamagno = 0;


    scanf("%d ",&tamagno);

    char *palabra = (char *)malloc(tamagno*sizeof(char));

    if(palabra == NULL){
        free(palabra);
        printf("ERROR\n");
        return EXIT_FAILURE;
    }

    fgets(palabra,tamagno+1,stdin);

    printf("%s\n",palabra);

    free(palabra); 
    return 0;
}
