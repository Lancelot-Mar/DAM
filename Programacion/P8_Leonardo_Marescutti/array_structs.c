#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *	Autor: Leonardo Marescutti
 */

#define MAX_NOMBRE 20 
#define MAX_ESTUDIANTES 20

typedef struct{
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;
}Estudiante;

/*									Las variables solo se inicializan en local
Estudiante inicializar(char * nombre, int edad, float nota){
	//Creo Variable de tipo estudiante
	Estudiante estudiante_nuevo;
	//Inicializo el estudiante e = edad, e....
	return estudiante_nuevo;
}
*/

/*									Valido pero posee cosas que no se
Estudiante * inicializar(char * nombre, int edad, float nota){
	Estudiante * estudiante_nuevo = malloc; //malloc o memory allocation es la memoria dinamica
	// La Variable de tipo a puntero estudiante, no posee una memoria reservada por lo cual los datos que guardemos no se salvaran
	return estudiante_nuevo;
}



	Mostrar datos estudiante

*/

void inicializar(Estudiante * estudiante_rellenar, char * nombre, int edad, float nota){
	
	estudiante_rellenar->edad = edad; //Estudiante_rellenar es un puntero por lo cual habria que acceder al contenido usando la flecha ->
	estudiante_rellenar->nota = nota; //Tambien con esta ultima
	
	//estudiante_rellenar.nombre = nombre; No funciona porque estamos igualando la direccion de memoria y no el contenido de esta
	strcpy(estudiante_rellenar.nombre, nombre)
	
}

void cumpleagnos(Estudiante * cump){//es un puntero debido a que modifica la funcion

	cump->edad++;

}

int main(){
	
	int num_estudiante = 0, edad = 0;
	float nota;
	char nombre[MAX_NOMBRE];

	Estudiante lista[MAX_ESTUDIANTES]; //Reserva de memoria para los estudiantes
	
	printf("%p\n", lista);
	printf("Sizeof lista %lu\n",sizeof(lista));
	printf("Sizeof estudiante %lu\n", sizeof(Estudiante));

	printf("Cuantos estudiantes desea inicializar\n");
	scanf("%d", &num_estudiante);

	// Le damos los datos a la direccion de memoria asignada al struct dentro de un bucle para que vaya estudiante a estudiante
	
	for(int i = 0; i < num_estudiantes; i++){

		printf("Introduce la edad\n");
		scanf("%d", &edad);

		printf("Introduce la nota\n");
		scanf("%f", &nota);

		printf("Introduce el nombre\n");
		scanf("%s", nombre);
		
		inicializar(/*direccion de memoria del estudiante*/&lista[i],nombre,edad,nota);

	}

	printf("Edad antigua %s: %d\n",lista[0].nombre,lista->edad);
	cumpleagno(&lista[0]);
	printf("Edad nueva: %d\n",listado[0].edad);

	return 0;
}
