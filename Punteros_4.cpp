#include <stdio.h>
#include<stdlib.h>
/*Programa que llena un vector con n numeros y muestra cual es menor con punteros
Elaborado por:Viviana Rojas Ruiz*/

int main() {
	int vec[100];
	int *direc=vec;
	int num,tem;
	printf("Ingrese Cantidad de numeros: ");
	scanf("%d",&num);
	printf("\nIngrese Elementos del Vector:\n");
	for(int i=0;i<num;i++){
		scanf("%d",&direc[i]);
	}
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(direc[j]>direc[j+1]){
				tem=direc[j];
				direc[j]=direc[j+1];
				direc[j+1]=tem;
			}
		}
	}
	printf("El numero menor es: %d",*(direc));
	return 0;
}

