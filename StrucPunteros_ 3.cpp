#include <stdio.h>
#include<stdlib.h>

/*Realizar un programa que lea un arreglo de estructuras los datos de N trabajadores
de la empresa y que imprima los datos del trabajador de mayor y menor salario.
Elaborado por: Viviana Rojas Ruiz*/

struct Trabajadores{
	char nombre[20];
	int edad;
	char sexo[10];
	float salario;
}traba[100],*ptra=traba;

int main() {
	int i,n,pmay,pmen;
	float mayor = 0.0, menor = 9999999;
	printf("Ingrese Cantidad de Empleados: ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("%i.Nombre: ",i+1);
		gets((ptra+i)->nombre);
		fflush(stdin);
		printf("Sexo: ");
		gets((ptra+i)->sexo);
		printf("Salario: ");
		scanf("%f",&(ptra+i)->salario);
		printf("\n");
	}
	for(i=0;i<n;i++){
		if((ptra+i)->salario > mayor){ 
			mayor = (ptra+i)->salario;
			pmay = i;
		}
		else if((ptra+i)->salario < menor){
			menor = (ptra+i)->salario;
			pmen = i;
		}
	}	
	printf("\nEl Mayor Salario es: \n");
	printf("\nNombre: %s",(ptra+pmay)->nombre);
	printf("\nSexo: %s",(ptra+pmay)->sexo);
	printf("\nSalario: %.2f",(ptra+pmay)->salario);
	
	printf("\n\nEl Menor Salario es: \n");
	printf("\nNombre: %s",(ptra+pmen)->nombre);
	printf("\nSexo: %s",(ptra+pmen)->sexo);
	printf("\nSalario: %.2f\n",(ptra+pmen)->salario);
	return 0;
}

