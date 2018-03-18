#include <stdio.h>
#include<stdlib.h>
/*Programa que pide al usuario n numeros y llena un vector los organiza en orden
ascendente y los muestra con punteros*/

int main() {
	int tam,aux;
	int *vec;
	printf("Ingrese tamaño del Vector: ");
	scanf("%d",&tam);
	vec=new int[tam];
	printf("Ingrese Elementos del vector:\n");
	for(int i=0;i<tam;i++){
		scanf("%d",&vec[i]);
	}
	printf("\nMostrando Vector:\n");
	for(int i=0;i<tam;i++){
		printf("%d ",*(vec+i));
	}
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if(vec[j] > vec[j+1]){
				aux=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=aux;
			}
		}
	}
	printf("\nMostrando Vector en orden ascendente:\n");
	for(int i=0;i<tam;i++){
		printf("%d ",*(vec+i));
	}
	delete[]vec;
	return 0;
}

