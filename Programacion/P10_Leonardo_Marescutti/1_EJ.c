#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palabra(char * pal, int n, int cons){

	if (pal[n] == '\0'){		
		return cons;
	}

	//////////////////////////////////////////////////////

	if (pal[n] == 'a' || pal[n] == 'e' || pal[n] == 'i' || pal[n] == 'o' || pal[n] == 'u'){
		return palabra(pal, n+1, cons);
	}else{ 
		return palabra(pal, n+1, cons+1);
	}

}

int main(){

	char str[100] = "iuewrgvoh";
	int encontrado = palabra(str,0,0);

	printf("La palabra %s tiene %d consonantes.\n",str, encontrado);

	return 0;
}