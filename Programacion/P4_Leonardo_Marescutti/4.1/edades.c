#include <stdio.h>
#include <stdlib.h>
/**
 *	Autor: Leonardo Marescutti
 */

int main (){
	int x;

	printf("Cuantos años tienes: ");
	scanf("%d", &x);

	if (x < 12){
		printf("Niño \n");

	} else if (x < 18){
	       printf("Adolescente \n");

	} else if (x < 65){
	       printf("Adulto \n");

	} else {
	       printf("Mayor \n");}

return 0;
}
