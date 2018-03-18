#include <stdio.h>
#include<stdlib.h>
/*Programa que muestra una matriz de 3x3 llenada automaticamente por el sistema.
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int f=3,c=3;
	int matriz[3][3];
	int*dma=&matriz[0][0];
	int i,j;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			*(dma+i+j * c)=rand()%100;
		}
	}
	printf("Mostrando Matriz:\n");
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
		   printf("%d ",*(dma+i+j * c));
		}
		printf("\n");
	}
	
	return 0;
}

