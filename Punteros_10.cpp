#include <stdio.h>
#include<stdlib.h>
/*Programa que lee una matriz dinamica de NxM y cree su matriz transpuesta
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int **pt_matriz,fila,col;
	printf("Ingrese Fila y Columna\n");
	scanf("%d",&fila);
	scanf("%d",&col);
	
	pt_matriz=new int *[fila];
	
	for(int i=0;i<fila;i++){
		pt_matriz[i]=new int[col]; 
	}	
	printf("Ingrese elementos de la matriz\n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&*(*(pt_matriz+i)+j));
		}
	}	
	printf("Mostrando Matriz:\n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			printf("%d ",*(*(pt_matriz+i)+j));
		}
		printf("\n");
	}
	printf("Matriz Transpuesta: \n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			printf("%d ",*(*(pt_matriz+j)+i));
		}
		printf("\n");
	}
	for(int i=0;i<fila;i++){
		delete[] pt_matriz[i]; 
	}
	delete[] pt_matriz; 
	return 0;
}

