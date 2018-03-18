#include <stdio.h>
#include<stdlib.h>

int main() {
	int pares[10];
	int *p=pares;
	printf("Ingrese 10 Numeros:\n");
	for(int i=0;i<10;i++){
		scanf("%d",&*(p+i));	
	}
	printf("Numeros Pares   Direccion de Memoria\n");
	for(int i=0;i<10;i++){
		if(*(p+i)%2==0){
			printf("\n %d          ==>%p",*(p+i),&p);			
		}
	}	
	return 0;
}

