#include <stdio.h>
#include<stdlib.h>

/*Estructura llamada Promedio que tendra nota1 nota2 y nota3 otra llamada alumno
que tendra nombre edad y sexo. anidar la estructura promedio y mostrar los datos
de N alumno incluido su promedio.
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
}alumno[100],*palum=alumno;

int main() {
	int num,pmay,pmen;
	float mayor=0.0,menor=9999999;
	printf("Ingrese Cantidad de Estudiantes: ");
	scanf("%d",&num);
	printf("Ingrese datos de los estudiantes:\n");
	for(int i=0;i<num;i++){
		printf("\nAlumno: %i\n",i+1);
		printf("Nombre: ");
		fflush stdin;
		gets((palum+i)->nombre);
		printf("\nEdad: ");
		scanf("%d",&(palum+i)->edad);
		printf("\nSexo: ");
		fflush stdin;
		gets((palum+i)->sexo);
		printf("\nNota 1: ");
		scanf("%f",&(palum+i)->promedio.nota1);
		printf("\nNota 2: ");
		scanf("%f",&(palum+i)->promedio.nota2);
		printf("\nNota 3: ");
		scanf("%f",&(palum+i)->promedio.nota3);
		(palum+i)->totalPromedio=((palum+i)->promedio.nota1+(palum+i)->promedio.nota2+(palum+i)->promedio.nota3)/3;
	}
	
	for(int i=0;i<num;i++){
		if((palum+i)->totalPromedio > mayor){ 
			mayor = (palum+i)->totalPromedio;
			pmay = i;
		}
		if((palum+i)->totalPromedio < menor){
			menor = (palum+i)->totalPromedio;
			pmen = i;
		}
	}

	printf(">>>>>>>Mostrando Datos Mayor Promedio<<<<<<<< \n");
	printf("Nombre: %s",(palum+pmay)->nombre);
	printf("\nEdad: %d",(palum+pmay)->edad);
	printf("\nSexo: %s",(palum+pmay)->sexo);
	printf("\nPromedio: %.1f\n",(palum+pmay)->totalPromedio);	
	
	printf(">>>>>>>Mostrando Datos Menor Promedio<<<<<<<< \n");
	printf("Nombre: %s",(palum+pmen)->nombre);
	printf("\nEdad: %d",(palum+pmen)->edad);
	printf("\nSexo: %s",(palum+pmen)->sexo);
	printf("\nPromedio: %.1f\n",(palum+pmen)->totalPromedio);	
	return 0;
}



