#include <stdio.h>
#include<stdlib.h>
int main() {
	int matriz[100][100];
	int *direccion=&matriz[0][0];
	int filas,columnas;
	int i,j,x,b;
	int num1,num2;
	printf("Ingrese tamaño de la matriz\n");
	printf("Filas: ");
	scanf("%d",&filas);
	printf("\nColumnas: ");
	scanf("%d",&columnas);
	printf("\nIngrese elementos de la matriz: \n");
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			scanf("%d",&*(direccion+i+j * columnas));
		}
	}
	printf("\nMostrando matriz:\n");
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%d ",*(direccion+i+j * columnas));
		}
		printf("\n");
	}
	printf("\nModificar Matriz\n");
	printf("Ingrese cuantos elementos desea Modificar: ");
	scanf("%d",&x);
	for(i=0;i<x;i++){
		printf("\n Numero Fila a Modificar: ");
		scanf("%d",&num1);
		printf("\n Numero Columna a Modificar: ");
		scanf("%d",&num2);
		printf("\nIngrese nuevo elemento:");
		scanf("%d",&b);
		for(i=0;i<filas;i++){
			for(j=0;j<columnas;j++){
				if(i==num1 && j==num2){
					*(direccion+i+j *columnas)=b;
				}
			}
		}
	}
	printf("\nMostrando matriz con nuevos elementos:\n");
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%d ",*(direccion+i+j * columnas));
		}
		printf("\n");
	}
	return 0;
}

