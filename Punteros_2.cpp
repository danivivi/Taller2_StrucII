#include <stdio.h>
#include<stdlib.h>
/*Programa que determina si un numero es primo o no y muestra la direccion de
memoria.
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int num;
	int *p=&num;
	int a=0;
	printf("Ingrese un Numero:\n");
	scanf("%d",&*p);
	for(int i=1;i<=*p;i++){
		if(*p%i==0){
			a++;
		}		
	}
	if(a==2){
		printf("El Numero Ingresado es Primo.\n");			
		printf("Direccion de Memoria ==> %p",&p);			
	}else{
		printf("El Numero Ingresado No es Primo.\n");
		printf("Direccion de Memoria ==> %p",&p);
	}
	return 0;
}

