#include<stdio.h>
#include<stdlib.h>

/**
 *	Autor: Leonardo Marescutti
 *	Curso: DAM_1
*/

int main(){

	char str1[20];
	int numero_letra;
	char nueva_letra;

	printf("Introduzca una Palabra:\n");
	scanf("%s\n",str1);
	
	printf("Que posicion desea modificar?\n");
	scanf("%d\n", numero_letra);
	
	printf("Que caracter desea poner?\n");
	scanf("%c\n", nueva_letra);

	str1[numero_letra] = nueva_letra;

	printf("La nueva palabra es:%s"str1);

return 0;
}

