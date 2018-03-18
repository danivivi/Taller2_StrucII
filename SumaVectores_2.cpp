#include <stdio.h>
#include<stdlib.h>
/*Programa que lee dos vectores y muestra la suma con punteros
Fecha:26 febrero 2018
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int cant;
	int i;
	int vec1[100];
	int *v1=vec1;
	int vec2[100];
	int *v2=vec2;
	int sumatoria[100];
	int *suma=sumatoria;
	printf("Ingrese Tamaño de los Vectores: ");
	scanf("%d",&cant);
	printf("\nIngrese Elementos del primer Vector:\n");
	for(i=0;i<cant;i++){
		scanf("%d",&v1[i]);
	}
	printf("\nIngrese Elementos del Segundo Vector:\n");
	for(i=0;i<cant;i++){
		scanf("%d",&v2[i]);
	}
	for(i=0;i<cant;i++){
		suma[i]=v1[i]+v2[i];
	}
	printf("Resultado de la Sumatoria:\n");
	for(i=0;i<cant;i++){
		printf("Posicion %i. Suma ==> %d\n",i+1,*(suma+i));
	}
	return 0;
}

