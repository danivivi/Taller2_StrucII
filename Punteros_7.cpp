#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/*Programa que pide el nombre al usuario y devuelve la cantidad de vocales que 
contiene.
Elaborado por:Viviana Rojas Ruiz*/

int main() {
	char vec[20];
	char *nombre=vec;	
	printf("Ingrese su Nombre: ");
	gets(nombre);
	int cont=0;
	for(int x=0;x<20;x++){
		switch(nombre[x]){
		case 'a': cont++; break;
		case 'e': cont++; break;
		case 'i': cont++; break;
		case 'o': cont++; break;
		case 'u': cont++; break;
	    }
	}
	printf("\nCantidad de Vocales que contiene en Nombre==> %d",cont);
	return 0;
}

