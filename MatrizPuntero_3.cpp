#include <stdio.h>
#include<stdlib.h>
/*Programa que llena una matriz de 3x3 de manera automatica con numeros primos.
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int v[9];
	int *vec=v;
	int x=0;
	int matriz[3][3];
	int *pm=&matriz[0][0];
	for (int j=2;j<=23;j++){
		int a=0;
		for(int i=1;i<=23;i++){
			if(j%i==0){
				a++;
			}				
		}
		if (a==2){
			*(vec+x)=j;
			x++;
		}		
	}
	printf("\nNumeros Primos\n");
	for(int i=0;i<9;i++){
		printf("%d\n",*(vec+i));
	}
	int b=0;
	int f=3,c=3;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			*(pm+i+j * c)=*(vec+b);
			b++;
		}
	}
	printf("Mostrando Matriz con Numeros Primos\n");
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("%d ",*(pm+i+j * c));
		}
		printf("\n");
	}

	return 0;
}

