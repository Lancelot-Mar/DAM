#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, n2;

	//Primer array

	printf("Intrduce el tamaño del primer array:");
	scanf("%d",&n);

	if(n < 1){
		printf("Introduce un valor valido\n");
		return 1;
	}

	int * arr = (int *)malloc(n*(sizeof(int)));

	if(arr == NULL){
		printf("ERROR\n");
		return 1;
	}

	for (int i = 0; i < n; ++i){
		printf("Introduce los numeros en el primer array: ");
		scanf("%d", &arr[i]);
	}

	//Segundo array

	printf("Intrduce el tamaño del segundo array: ");
	scanf("%d", &n2);

	if(n2 < 1){
		printf("Introduce un valor valido\n");
		return 1;
	}

	int * arr2 = (int *)malloc(n2*(sizeof(int)));

	if(arr2 == NULL){
		printf("ERROR\n");
		return 1;
	}

	for (int i = 0; i < n2; ++i){
		printf("Introduce los numeros en el segundo array: ");
		scanf("%d", &arr2[i]);
	}

	//Menu:

	int opcion;

	printf("Selecciona:\n");
	printf("Sumar [1]\n");
	printf("Concatenar [2]\n");
	printf("Salir\n");

	printf("Introduce un valor del menu:");
	scanf("%d", &opcion);
	
	switch(opcion){

	case 1:

		if(n > n2){

		int *arr3 = (int*)malloc(n * sizeof(int));

		if(arr3 == NULL){
			printf("ERROR\n");
			return 1;
		}

			for (int i = 0; i < n; ++i){
				arr3[i] = arr[i] + arr2[i];
				printf("%d + %d: %d\n",arr[i], arr2[i], arr3[i]);
			}	

		free(arr3);

		}else{

		int *arr3 = (int*)malloc(n2 * sizeof(int));

		if(arr3 == NULL){
			printf("ERROR\n");
			return 1;
		}

			for (int i = 0; i < n2; ++i){
				arr3[i] = arr[i] + arr2[i];
				printf("%d + %d: %d\n",arr[i], arr2[i], arr3[i]);
			}

		free(arr3);

		}

	break;

	case 2:

		int *arr4 = (int*)malloc((n + n2) * sizeof(int));

		if(arr4 == NULL){
			printf("ERROR\n");
			return 1;
		}

		for (int i = 0; i < n; ++i){
	        arr4[i] = arr[i];
	        printf("posicion[%d]: %d\n", i + 1, arr4[i]);
	    }

	    for (int i = 0; i < n2; ++i){
	        arr4[n + i] = arr2[i];  
	        printf("posicion[%d]: %d\n", n + i + 1, arr4[n + i]);
	    }

		free(arr4);

	break;

	default: 

		printf("Introduce otro valor\n");

	break;
	}

	free(arr);
	free(arr2);


	return 0;
}
