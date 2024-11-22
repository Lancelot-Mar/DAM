#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

	int x = 10;
	int *p; //Hacer referencia a donde se guarda el numero entero
	
	p = &x;

	printf("Direccion de x: %p\n", &x); //El andpersan nos deja acceder a la direccion de memoria de x
	printf("Valor de p: %p\n", *p); //El asterisco nos permite acceder al contenido del hueco de la memoria donde esta guardado p 	
	printf("Valor de p: %p\n", &p); //El andpersan nos deja ver la dirreccion de memoria donde esta guardad p 
	printf("Valor de p: %p\n", p); 	
	return 0;
}
