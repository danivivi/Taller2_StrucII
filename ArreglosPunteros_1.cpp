#include <stdio.h>
#include<stdlib.h>
/*Programa que muestra los elementos de un vector con punteros.
Fecha:26 Febrero 2018
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	printf("\nPrograma que muestra en Pantalla los elementos de un Array.\n");
	printf("-----------------------------------------------");
	int i;
	float vec [4]={32.583,11.239,45.781,22.237};
	float*direccion=vec;
	printf("\nElementos que contiene el Vector\n");
	for(i=0;i<4;i++){
		printf("%.3f\n",*(direccion+i));
	}	
	return 0;
}

