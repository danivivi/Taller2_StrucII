#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

/*Programa que recibe 4 numeros los ordena de mayor a menor y muestra el mayor y 
el menor de los numeros
Fecha:15 Febrero 2018
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int pn[4];
	int tem;
	printf("Ingrese 4 Numeros: \n");
	for(int i=0;i<4;i++){
		scanf("%d",&pn[i]);
	}
	printf("\nElementos del Vector:\n");
	for(int i=0;i<4;i++){
		printf("%d ",pn[i]);
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(pn[j] < pn[j+1]){
				tem = pn[j];
				pn[j] = pn[j+1];
				pn[j+1] = tem;
			}
		}
	}
	printf("\nMostrando Numeros en Orden:\n");
	for(int i=0;i<4;i++){
		printf("%d",pn[i]);
	}
	printf("\nNumero Mayor==> %d\n",pn[0]);
	printf("Numero Menor==> %d",pn[3]);
	delete[]pn;
	return 0;
}

