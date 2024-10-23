#include<stdio.h>
#include<stdlib.h>

/**
 *	Autor: Leonardo Marescutti
 *	Curso: DAM_1
*/

int main(){

	char str1[20];
	char str2[20];

	printf("Introduzca una Palabra:\n");
	scanf(" %s", str1);
	
	printf("Introduce otra Palabra:\n");
	scanf(" %s", str2);
	
	str1['\n'] = '_';

	printf("La nueva palabra es:%s%s\n",str1,str2);

return 0;
}

