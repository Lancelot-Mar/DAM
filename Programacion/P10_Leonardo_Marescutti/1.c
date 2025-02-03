#include <stdio.h>
#include <stdlib.h>

int busquedabinaria(int * array, int n, int buscar, int ini, int fin){

	int mitad=(ini+fin)/2;

	if(buscar == array[mitad]){
		return 1;
	}else if (buscar < array[mitad]){
		return busquedabinaria(array, 10, buscar, array[ini], array[mitad]);
	}else{
		return busquedabinaria(array, 10, buscar, array[mitad], array[fin]);
	}
}

int main() {

	int array[10] = {-5,1,9,10,11,12,17,120,150,1500};
	int buscar = 120;
	int encontrado = busquedabinaria(array, 10, buscar, array[0], array[9]);

	return 0;
}