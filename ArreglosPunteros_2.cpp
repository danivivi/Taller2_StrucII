#include <stdio.h>

int main() {
	printf("\nPrograma que muestra en pantalla un array de num1 x num2 con ceros y unos.\n");
	printf("-----------------------------------------------");
	int num1;
	int num2;
	int matriz[100][100];
	int*dm=&matriz[0][0];
	printf("\nIngrese 2 numeros:\n");
	scanf("%d%d",&num1,&num2);
	
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
			if (i==j){
				*(dm+i+j * num2)=1;
			}else{
				*(dm+i+j * num2)=0;				
			}
			printf("%d",*(dm+i+j * num2));
		}
		printf("\n");
	}		
	return 0;
}
