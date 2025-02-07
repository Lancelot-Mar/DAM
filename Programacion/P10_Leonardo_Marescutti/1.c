#include <stdio.h>
#include <stdlib.h>

int busquedabinaria(int * array, int buscar, int ini, int fin){

	int mitad=(ini+fin)/2;

	if(buscar == array[mitad]){
		return mitad;
	}
	if (ini > fin){
		return -1;
	}

	//////////////////////////////////////////////////

	if (buscar < array[mitad]){
		return busquedabinaria(array, buscar, ini, mitad-1);
	}else{
		return busquedabinaria(array, buscar, mitad+1, fin);
	}
}

int main() {

	int array[10] = {-5,1,9,10,11,12,17,120,150,1500};
	int buscar = 120;
	int encontrado = busquedabinaria(array, buscar, array[0], array[9]);

	printf("%d\n", encontrado );

	return 0;
}