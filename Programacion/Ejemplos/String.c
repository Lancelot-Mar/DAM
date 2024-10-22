#include<stdio.h>
#include<stdlib.h>

/**
 *
 * Autor: Leonardo Marescutti
 *
*/


int main(){
	char str1[5]="hola";
	printf("%s\n",str1);
	printf("%c\n",str1[3]);//Imprime la cuarta letra de la candena de caracteres.
			      
	printf("%c\n",str1[4]);
	str1[4] = '$';

	printf("%s\n",str1);
			       
	return 0;

}
