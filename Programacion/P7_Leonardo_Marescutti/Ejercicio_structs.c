#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 *
 * Author: Leonardo Marescutti
 *
 *
 */

#define MAX_ITEMS 100

typedef struct{
	char nombre1[20];
	char direccion[20];
	char telefono [20];
} Proveedor;


typedef struct{
	char nombre2[20];
	float precio;
	Proveedor miProveedor;
} Articulo;

typedef struct{
	Articulo miArticulo[MAX_ITEMS];
	int cantidades[MAX_ITEMS];
	int totalArticulos;
} Inventario;

int main() {
    	Inventario miInventario;
    	Articulo miArticulo = {"test",2,{"proveedor","casa1","3432432355"}};

	//Solo se incializa con llaves   	

    	printf("Articulo: %s\n", miInventario.miArticulo[0].nombre2);
    	

    return 0;
}
