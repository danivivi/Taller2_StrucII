#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/*Progama que pide una cadena de caracteres al usuario y muestra cuantas veces 
aparece cada una de las vocales.
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	char vec[100];
	char *frase=vec;	
	printf("Ingrese una frase:\n");
	gets(frase);
	int a=0,e=0,i=0,o=0,u=0;
	for(int j=0;j<100;j++){
		switch(frase[j]){
		case 'a': 
			a++;
			break;
		case 'e':
			e++;
			break;
		case 'i':
			i++;
			break;
		case 'o':
			o++;
		case 'u':
			u++;
			break;
		}
	}
	printf("Cantidad de Vocales 'a'%d\n",a);
	printf("Cantidad de Vocales 'e'%d\n",e);
	printf("Cantidad de Vocales 'i'%d\n",i);
	printf("Cantidad de Vocales 'o'%d\n",o);
	printf("Cantidad de Vocales 'u'%d\n",u);
	return 0;
}

