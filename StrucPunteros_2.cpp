#include <stdio.h>
#include<stdlib.h>

/*Estructura llamada Estudiante que tenga los campos nombre, edad, grado, promedio
pedir los datos al usuario para 3 alumnos mostrar cual es mejor promedio.
Elaborado por: Viviana Rojas Ruiz*/

struct Estudiante{
	char nombre[20];
	int edad;
	char grado[10];	
	float promedio;
}alumnos[3],*palum=alumnos;

int main() {
	printf("Ingrese datos de los estudiantes:\n");
	for(int i=0;i<3;i++){
		printf("\n\nEstudiante %i\n",i+1);
		printf("Nombre: ");
		fflush stdin;
		gets((palum+i)->nombre);
		printf("\nEdad: ");
		scanf("%d",&(palum+i)->edad);
		printf("\nGrado: ");
		fflush stdin;
		gets((palum+i)->grado);
		printf("\nPromedio: ");
		scanf("%f",&(palum+i)->promedio);
	}
	
	printf("\nMejor Promedio: \n");
	if(((palum+0)->promedio > (palum+1)->promedio)&&((palum+0)->promedio > (palum+2)->promedio)){
		printf("Nombre: %s",(palum+0)->nombre);
		printf("\nEdad: %d",(palum+0)->edad);
		printf("\nGrado: %s",(palum+0)->grado);
		printf("\nPromedio: %.1f\n",(palum+0)->promedio);
	}
	if(((palum+1)->promedio > (palum+0)->promedio)&&((palum+1)->promedio > (palum+2)->promedio)){
		printf("Nombre: %s",(palum+1)->nombre);
		printf("\nEdad: %d",(palum+1)->edad);
		printf("\nGrado: %s",(palum+1)->grado);
		printf("\nPromedio: %.1f\n",(palum+1)->promedio);
	}
	if(((palum+2)->promedio > (palum+0)->promedio)&&((palum+2)->promedio > (palum+1)->promedio)){
		printf("Nombre: %s",(palum+2)->nombre);
		printf("\nEdad: %d",(palum+2)->edad);
		printf("\nGrado: %s",(palum+2)->grado);
		printf("\nPromedio: %.1f\n",(palum+2)->promedio);
	}
	return 0;
}

