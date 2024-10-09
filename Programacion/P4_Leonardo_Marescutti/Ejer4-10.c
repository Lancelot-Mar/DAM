 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 /**
  *      Autor: Leonardo Marescutti
  */

 int main(){

        int n_m;

        printf("Selleciona una opcion: \n 1. Verificar si una letra es una vocal.\n 2. Calcular el área de una figura (círculo o cuadrado).\n 3. Calcular el promedio de 3 o 4 números.\n 4. Convertir una hora en formato de 24 horas a 12 horas.\n 5. Verificar si un número menor de 10 es primo.\n 6. Comparar tres números.\n 7. Salir.\n");
        scanf("%d" &n_m);

    	switch (n_m) {
		case 1 :
        		es_vocal();
            		break;

		case 2 :
			calcular_area_figura();
			break;

		case 3 :
			printf("error");
			break;
 
		case 4 :
			convertir_hora_24_a_12();
			break;

		case 5 :
			es_primo ();
			break;
 
		case 6 :
			comparar_3_numeros ();
			break;

		default:
			printf("Porfavor escoja un valor del 1-7");}

	return 0;
 }


	void es_vocal (){

	char letra;

	printf("Dame una letra: \n");
		scanf(" %c",&letra);

	if (letra == 'a' | letra == 'A' | letra == 'e' | letra == 'E' | letra == 'i' | letra == 'I' | letra == 'o' | letra == 'O' | letra == 'u' | letra == 'U'){ printf("Tu letra %c es una vocal\n", letra);}
				 
	else{printf("Tu letra %c no es una vocal\n", letra);}
 	}


	void calcular_area_figura(){

	double area,radio;
		

        printf("Introduzca el radio del circulo para calcular el area\n");
        	scanf("%lf",&radio);

        area = M_PI * radio * radio;

        printf("El area del ciruclo es %lf\n",area);
	
	}


	void convertir_hora_24_a_12 (){

	int hora;

	printf("Dame un numero: \n");
		scanf(" %d",&hora);

	if (hora > 0 && hora <= 12){
             printf("La hora en ya esta formato de 12: %d AM\n.", hora);}

	else if(hora >= 12 && hora <= 23 ){
             printf("La hora en formato de 12 horas es %d PM.\n", hora-12);}
				 
	else{printf("Error:Hora no válida.\n");}
 	}


	void es_primo (){

	int primo;

	printf("Dame un numero: \n");
		scanf(" %d",&primo);

	if (primo > 10){
        	(primo == 2 | primo == 5 | primo == 7 ) ? printf("El numero %d es primo.\n") : printf("El numero %d no es primo\n");}

	else{printf("El número es menor de 10.\n");}

 	}


	void comparar_3_numeros (){

	int comp1,comp2,comp3,max;

	printf("Dame el 1@ numero: \n");
	scanf(" %d",&comp1);
	
	printf("Dame el 2@ numero: \n");
	scanf(" %d",&comp2);

	printf("Dame el 3@ numero: \n");
	scanf(" %d",&comp3);

	max = largest(comp1,comp2,comp3);

	printf("El mayor número es %d. \n",max);

	if (comp1 == comp2 | comp2 == comp3 | comp3 == comp1){
             	printf("Los numeros son iguales \n");}

	else{printf("Los numeros no son iguales.\n");}
 	}

