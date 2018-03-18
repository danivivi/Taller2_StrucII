#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

/*Programa que recibe 4 numeros los ordena de mayor a menor y muestra el mayor y 
el menor de los numeros
Fecha:15 Febrero 2018
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int *pn;
	int tem=0;
	pn=new int[3];
	printf("Ingrese 4 Numeros: \n");
	for(int i=0;i<4;i++){
		scanf("%d",&pn[i]);
	}
	printf("\nElementos del Vector:\n");
	for(int i=0;i<4;i++){
		printf("%d ",pn[i]);
	}
	
	for(int i=0;i<4 ;i++){
		int a=1;
		for(int j=0;j<4;j++){
			if(pn[j] < pn[a]){
				tem = pn[j];
				pn[j] = pn[a];
				pn[a] = tem;
				//printf("%d [%d] \n",pn[i],i);
				//system("pause");
				//printf("%d [%d] \n",pn[a],a);
				a++;
			}
		}
	}
	printf("\nMostrando Numeros en Orden:\n");
	for(int i=0;i<4;i++){
		printf("%d \n",pn[i]);
		
	}
	printf("\nNumero Mayor==> %d\n",pn[0]);
	printf("Numero Menor==> %d",pn[3]);
	delete[] pn;
	return 0;
}
