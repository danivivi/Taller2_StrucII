#include <stdio.h>
#include<stdlib.h>
/*Programa que comprueba si un numero es par o impar y muestra la diresccion de 
memoria.
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int num;
	int *n=&num;
	printf("Ingrese un Numero:\n");
	scanf("%d",&*n);
	if(*n%2==0){
		printf("El Numero Ingresado es Par\n");
		printf("Direccion de Memoria==> %p",&n);
	}else{
		printf("El Numero Ingresado es Impar\n");
		printf("Direccion de Memoria==> %p",&n);
	}
	return 0;
}

