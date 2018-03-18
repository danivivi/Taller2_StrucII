#include <stdio.h>
#include<stdlib.h>
/*Programa donde se muestra la suma de una matriz de 3x3
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int f=3,c=3;
	int matriz[3][3];	
	int sumatoria[3][3];
	int *suma=&sumatoria[0][0];
	int *ma=&matriz[0][0];
	printf("\nIngrese los elementos de la Matriz:\n");
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			scanf("%d ",&*(ma+i+j * c));
		}
	}
	printf("\nMostrando Matriz:\n");
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("%d ",*(ma+i+j * c));
		}
		printf("\n");
	}
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			*(suma+i+j * c)=*(ma+i+j * c)+*(ma+i+j * c);
		}
	}
	printf("\nMostrando Sumatoria de la Matriz:\n");
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("%d ",*(suma+i+j * c));
		}
		printf("\n");
	}
	return 0;
}

