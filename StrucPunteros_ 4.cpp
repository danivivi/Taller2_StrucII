#include <stdio.h>
#include<stdlib.h>

/*Estructura llamada Promedio que tendra nota1 nota2 y nota3 otra llamada alumno
que tendra nombre edad y sexo. anidar la estructura promedio y mostrar los datos
de un alumno incluido su promedio.
Elaborado por: Viviana Rojas Ruiz*/

struct Prom{
	float nota1;
	float nota2;
	float nota3;
};
struct Estudiante{
	struct Prom promedio;
	char nombre[20];
	int edad;
	char sexo[10];
	float totalPromedio;
}alumno,*palum=&alumno;

int main() {
	printf("Ingrese datos de los estudiantes:\n");
	printf("Nombre: ");
	fflush stdin;
	gets((palum)->nombre);
	printf("\nEdad: ");
	scanf("%d",&(palum)->edad);
	printf("\nSexo: ");
	fflush stdin;
	gets((palum)->sexo);
	printf("\nNota 1: ");
	scanf("%f",&(palum)->promedio.nota1);
	printf("\nNota 2: ");
	scanf("%f",&(palum)->promedio.nota2);
	printf("\nNota 3: ");
	scanf("%f",&(palum)->promedio.nota3);
	(palum)->totalPromedio=((palum)->promedio.nota1+(palum)->promedio.nota2+(palum)->promedio.nota3)/3;
	
	printf(">>>>>>>Mostrando Datos<<<<<<<< \n");
	printf("Nombre: %s",(palum)->nombre);
	printf("\nEdad: %d",(palum)->edad);
	printf("\nSexo: %s",(palum)->sexo);
	printf("\nPromedio: %.1f\n",(palum)->totalPromedio);	
	return 0;
}

