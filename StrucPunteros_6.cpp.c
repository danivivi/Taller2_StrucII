#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct Representar{
	char nombre[20];
    char discapacidad[10];
}personas[100],*pt=personas,vec1[100],vec2[100];

int main() {
	int num,dato;
	char disca='F';
	int conta=0;
	int contb=0;
	printf("Ingrese Cantidad de Personas: ");
	scanf("%d",&num);
	printf("Ingrese Datos: \n");
	for(int i=0;i<num;i++){
		printf("\nPersona %i\n",i+1);
		printf("Nombre: ");
		fflush stdin;
		gets((pt+i)->nombre);
		printf("Ingrese Opcion:");
		printf("\nTiene Alguna Discapacidad\n");
		printf("1.Si\n");
		printf("2.No\n");
		scanf("%d",&dato);
		switch(dato){
		case 1:
			disca='V';			
			break;
		case 2:
			disca='F';			
			break;
		default:
			printf("Opcion Invalida.\n");
		}
		if(disca=='V'){
			strcpy((pt+i)->discapacidad,"Discapacitado");
			strcpy(vec1[conta].nombre,(pt+i)->nombre);
			conta++;
		}
		if(disca=='F'){
			strcpy((pt+i)->discapacidad," No Discapacitado");
			strcpy(vec2[contb].nombre,(pt+i)->nombre);
			contb++;
		}
	}
	printf("\n\nPersonas Con Discapacidad: \n");
	for(int i=0;i<conta;i++){
		printf("\nNombre: %s",vec1[i].nombre);
	}
	printf("\n\nPersonas Sin Discapacidad: \n");
	for(int i=0;i<contb;i++){
		printf("\nNombre: %s",vec2[i].nombre);
	}
	return 0;
}

