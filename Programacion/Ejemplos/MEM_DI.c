#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr = 0;

    scanf("%d",&arr);

    int * p = (int *)malloc(arr*sizeof(int));
    if(p == NULL){
        free(p);
        printf("ERROR\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < arr; i++) {
        p[i] = 2*i;
        printf("p[%d] = %d\n", i+1, p[i]);
    }

    int * p_new = realloc(p,(arr*2)*sizeof(int));

    p_new = p;

    if(p == NULL){
        free(p); 
        printf("ERROR\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < (arr*2); i++) {
        p[i] = 2*i+1;
        printf("p[%d] = %d\n", i+1, p[i]);
    }

    free(p); 
    return 0;
}

