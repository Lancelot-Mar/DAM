#include<stdio.h>
#include<stdlib.h>

/**
 *	Autor: Leonardo Marescutti
 *	Curso: DAM_1
*/

int main(){
	// Son distintas debido al hueco de memoria donde se guarda.
	char str1[20] = "iguales";
	char str2[20] = "iguales";

	if (str1 == str2){
		printf("Son iguales");
	}else{
		printf("Son distintas");
	}

	if (str1 == str2){
		printf("Son iguales");
	}else{
		printf("Son distintas");
	}
	for (int i= 0; i<8; i++){
		if(str1[i] == str2[i]){}
			printf("%s", str[i]);
	}
return 0;
}

