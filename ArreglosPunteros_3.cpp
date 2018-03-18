#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main() {
	printf("\nArreglo de 4 x 4 en la primera columna muestra el numero ingresado en la segunda\n");
	printf ("el numero elevado al cuadrado en la tercera elevado al cubo y en la cuarta elevado a la cuarta\n");
	printf("-----------------------------------------------");
	int matriz[4][4];
	int*dm = &matriz[0][0];
	int a,b,x,num;
	num=4;
	printf("\nIngrese 4 numeros\n");
	for(a=0;a<num;a++){		
		scanf("%d",&x);
		for (b=0;b<num;b++){
			*(dm+a+b * num)=x;					
		}
	}
	for(a=0;a<num;a++){
		printf("\n");
		for (b=0;b<num;b++){
			printf("  ");    
			if(b==1){
				*(dm+a+b * num)=pow(*(dm+a+b * num),2);        
			}
			if(b==2){
				*(dm+a+b * num)=pow(*(dm+a+b * num),3);        
			}
			if(b==3){
				*(dm+a+b * num)=pow(*(dm+a+b * num),4);        
			}			
			printf("%d ",*(dm+a+b * num));			
		}  
	}	
	return 0;
}

