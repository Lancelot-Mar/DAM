#include <stdio.h>
#include <stdlib.h>

/*
 *
 *
 * Author: Leonardo Marescutti
 *
 *
 */

struct cuenta {

	int num_cuenta;
	char tipo_cuenta;
	char nombre[20];
	float saldo;
	struct fecha ultimopago;
};

int main(){

	struct cuenta cliente[100];
	//Declaramos hueco para 100 cuentas

	struct cuenta usuario = {12345, 'R', "Jose", 586.30,5,24,1990};

	printf("Num cuenta:%d\n", usuario.num_cuenta);
	printf("Num cuenta:%c\n", usuario.tipo_cuenta);
	printf("Num cuenta:%d\n", usuario.ultimopago.dia);

	return 0;

}
