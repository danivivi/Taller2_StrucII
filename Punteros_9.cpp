#include <stdio.h>
#include<stdlib.h>
/*Programa que calcula la suma de dos matrices dinamicas
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int **pt_matriz,fila,col;
	int **p_suma;
	int **p_matriz2;
	printf("Ingrese 2 numeros\n");
	scanf("%d",&fila);
	scanf("%d",&col);
	
	pt_matriz=new int *[fila];
	
	for(int i=0;i<fila;i++){
		pt_matriz[i]=new int[col]; 
	}
	
	p_suma=new int *[fila];
	
	for(int i=0;i<fila;i++){
		p_suma[i]=new int[col]; 
	}
	p_matriz2=new int *[fila];
	
	for(int i=0;i<fila;i++){
		p_matriz2[i]=new int[col]; 
	}
	printf("Ingrese elementos de la matriz 1\n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&*(*(pt_matriz+i)+j));
		}
	}
	printf("\nIngrese elementos de la matriz 2\n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&*(*(p_matriz2+i)+j));
		}
	}
	
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			*(*(p_suma+i)+j)=*(*(pt_matriz+i)+j)+*(*(p_matriz2+i)+j);
		}
	}
	printf("Matriz 1: \n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			printf("%d ",*(*(pt_matriz+i)+j));
		}
		printf("\n");
	}
	printf("Matriz 2: \n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			printf("%d ",*(*(p_matriz2+i)+j));
		}
		printf("\n");
	}
	
	printf("El Resultado de la Suma de la Matriz es: \n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			printf("%d ",*(*(p_suma+i)+j));
		}
		printf("\n");
	}
	for(int i=0;i<fila;i++){
		delete[] pt_matriz[i]; 
	}
	delete[] pt_matriz;
	
	for(int i=0;i<fila;i++){
		delete[] p_matriz2[i]; 
	}
	delete[] p_matriz2;
	
	for(int i=0;i<fila;i++){
		delete[] p_suma[i]; 
	}
	delete[] p_suma;
	return 0;
}

