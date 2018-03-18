#include <stdio.h>
#include<stdlib.h>
/*programa que usa una funcion para almacenar numeros en un arrglo dinamico
posteriormente en otra funcion buscar un numero en particular*/
void leer_arreglo();
void buscar();
int *v1;
int num;
int main() {
	leer_arreglo();
	return 0;
}
void leer_arreglo(){	
	printf("Ingrese Tamaño del Arreglo: ");
	scanf("%d",&num);
	v1=new int[num];
	printf("\nIngrese Elementos del Arreglo: \n");
	for(int i=0;i<num;i++){
		scanf("%d",&v1[i]);
	}
	printf("\nMostrando Arreglo: \n");
	for(int i=0;i<num;i++){
		printf("%d ",*(v1+i));
	}
	buscar();
	delete[]v1;
}

void buscar(){
	int inf,sup,dato,mitad;
	char band = 'F';	
	printf ("\nIngrese Elemento a buscar: \n");
	scanf ("%d",&dato);	
	inf = 0;
	sup = num;	
	while((inf <= sup) && (band == 'F')) {
		mitad =((inf+sup)/2);
		if(v1[mitad]==dato){
			band = 'V';
		}
		else 
		   if(v1[mitad]>dato){
			sup = mitad - 1;
		}
		   else{
			   inf = mitad + 1;
		   }
	}	
	if(band == 'F'){
		printf("\nEl Elemento no esta en el Arreglo.\n");
	} 
	else if(band=='V'){
		printf("\nElemento encontrado, en la pos: %i",mitad+1);
	}
}
