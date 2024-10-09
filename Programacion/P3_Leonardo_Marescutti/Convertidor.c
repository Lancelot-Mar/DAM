#include <stdio.h>
#include <stdlib.h>

char converter(char n1){
		return n1-32;	
}


int main(){

	char n1;
	
	printf("Dame un numero: ");
	scanf("%c", &n1);

	printf("Total suma: %c\n", converter(n1));

	return 0;

}
