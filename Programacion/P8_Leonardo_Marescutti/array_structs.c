#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *	Autor: Leonardo Marescutti
 */

#define MAX_NOMBRE 20 
#define MAX_ESTUDIANTES 20
#define MAX_BUFFER 200

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
	strcpy(estudiante_rellenar->nombre, nombre);
	
}


void cumpleagnos(Estudiante * cump){//es un puntero debido a que modifica la funcion

	cump->edad++;

}

void imprimir_Estudiante(const Estudiante * estudiante_a_imprimr){

	printf("Nombre: %s\n", estudiante_a_imprimr->nombre);
	printf("\tEdad: %d\n", estudiante_a_imprimr->edad);
	printf("\tNota: %f\n", estudiante_a_imprimr->nota);

}

void estudiante_string(const Estudiante * datos,char * retval){

	// snprintf(donde,cuando,porque)
	snprintf(retval,MAX_BUFFER,"El estudiante %s de %d años ha sacado un: %f\n",datos->nombre,datos->edad,datos->nota);

}

void cambiar_nombre(Estudiante * NombreACambiar, char * nombre_nuevo){

	strcpy(NombreACambiar ->nombre, nombre_nuevo);

}

int main(){
	
	char retval[MAX_BUFFER];
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
	
	for(int i = 0; i < num_estudiante; i++){

		printf("Introduce la edad\n");
		scanf("%d", &edad);

		printf("Introduce la nota\n");
		scanf("%f", &nota);

		printf("Introduce el nombre\n");
		scanf("%s", nombre);
		
		inicializar(/*direccion de memoria del estudiante*/&lista[i],nombre,edad,nota);

	}

	printf("Edad antigua %s: %d\n",lista[0].nombre,lista->edad);
	cumpleagnos(&lista[0]);
	printf("Edad nueva: %d\n",lista[0].edad);

	// Imprimir estudiantes

	imprimir_Estudiante(&lista[0]);

	char StrinARellenar[MAX_BUFFER];
	estudiante_string(&lista[0], StrinARellenar);
	printf("%s\n",StrinARellenar);

	char nombre_nuevo[MAX_NOMBRE];
	printf("Dame un nuevo nombre:");
	scanf("%s",nombre_nuevo);

	cambiar_nombre(&lista[0],nombre_nuevo);

	estudiante_string(&lista[0], StrinARellenar);
	printf("%s\n",StrinARellenar);


	return 0;
}
