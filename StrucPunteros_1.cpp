#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/*Hacer una estructura llamada competidor la cual tendra los siguientes campos
nombre, edad, sexo, club, pedir los datos al usuario y asignarles una categoria
Posteriormente imprimir todos los datos del competidor incluida su categoria.
Elaborado por: Viviana Rojas Ruiz*/

struct Competidor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[30];
	char categoria[30];
}competidorsito[100],*pcom=competidorsito;

int main() {
	int tam;
	printf("Ingrese cantidad de Competidores: ");
	scanf("%d",&tam);
	printf("Ingrese Datos de los Competidores\n");
	for(int i=0;i<tam;i++){
		fflush stdin;
		printf(">>Competidor: %i\n",i+1);
		printf("Nombre: ");
		gets((pcom+i)->nombre);
		printf("\nEdad: ");
		scanf("%d",&(pcom+i)->edad);
		fflush stdin;
		printf("\nSexo: ");
		gets((pcom+i)->sexo);
		fflush stdin;
		printf("\nClub: ");
		gets((pcom+i)->club);
		if((pcom+i)->edad <= 15){
			strcpy((pcom+i)->categoria,"Infantil");
		}
		if((pcom+i)->edad <= 30){
			strcpy((pcom+i)->categoria,"Joven");
		}
		if((pcom+i)->edad > 30){
			strcpy((pcom+i)->categoria,"Mayor");
		}
		printf("\n");
	}
	
	printf("Mostrando Datos de los Competidores:\n");
	for(int j=0;j<tam;j++){
		printf(">>>Competidor %i\n",j+1);
		printf("Nombre: %s\n",(pcom+j)->nombre);
		printf("Edad: %d\n",(pcom+j)->edad);
		printf("Sexo: %s\n",(pcom+j)->sexo);
		printf("Club: %s\n",(pcom+j)->club);
		printf("Categoria: %s\n",(pcom+j)->categoria);
	}
	
	return 0;
}

