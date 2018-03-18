#include <stdio.h>
#include<stdlib.h>
/*Programa que muestra la sumatoria de los numeros pares e impares del 1 al 100
Fecha:15 Febrero 2018
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int i;
	int *pn;
	int num=100;
	int sumaPares=0;
	int sumaImpar=0;
	pn=new int[num];
	for(i=0;i<num;i++){		
		pn[i]=i;
		if(i%2==0){
			sumaPares=sumaPares+i;
		}else if(i%2==1){
			sumaImpar=sumaImpar+i;
		}
	}
	for(i=0;i<num;i++){
		printf("%d ",*(pn+i));
	}
	printf("\nSuma Pares==> %d",sumaPares);
	printf("\nSuma Impares==> %d",sumaImpar);
	delete[]pn;
	return 0;
}

