#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

	float x = 10.7;
	int *p; //Hacer referencia a donde se guarda el numero entero
	
	p = &x;

	printf("Valor de x: %f\n", x); //El asterisco nos permite acceder al contenido del hueco de la memoria donde esta guardado p 	
	printf("Direccion de x: %p\n", &x); //El andpersan nos deja acceder a la direccion de memoria de x
	printf("Valor de p: %f\n", *p); //El asterisco nos permite acceder al contenido del hueco de la memoria donde esta guardado p 	
	printf("Direccion de p: %p\n", &p); //El andpersan nos deja ver la dirreccion de memoria donde esta guardad p	
	return 0;
}
