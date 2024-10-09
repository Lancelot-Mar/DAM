#include <stdio.h>
#include <stdlib.h>
/**
 *	Autor: Leonardo Marescutti
 */
 
int main(){
	int x;

	printf("Dame un numero:\n");
	scanf("%d",&x); //Recogemos el valor de x en int

	//Declaramos que si el resto de x/2 es igual a 0 devuelva par

	if(x % 2 == 0){
		printf("Es Par\n");
	}
	
	//Declaramos que en caso contrario devuelva impar

	else{
		printf("Es Impar\n");
	}

return 0;
}
