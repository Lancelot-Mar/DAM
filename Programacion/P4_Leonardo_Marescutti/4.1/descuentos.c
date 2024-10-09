#include <stdio.h>
#include <stdlib.h>
/**
 *	Autor: Leonardo Marescutti
 */

int main(){

	float y; //Recogemos el valor de y en float 

	printf("Precio unitario del producto: \n");
	scanf("%f", &y);

	char x; //Recogemos el valor de x en char

	printf("Rol: Estudinate(E), Profesor(P), u Otro(O): \n");
	scanf(" %c", &x);

	//Declaramos que si x es igual a E devuelva y*0.90

	if (x == 'E'){ 
		printf("El precio final: %f\n", y*0.90);

	//Declaramos que si x es igual a P devuelva y*0.85

	} else if (x == 'P'){
	       printf("El precio final: %f\n", y*0.85);

	//Si el valor de x no es uno de los anteriores devolvera y

	} else {
	       printf("No aplicas a descuento, el precio es %f \n",y);}

		
return 0;
}
