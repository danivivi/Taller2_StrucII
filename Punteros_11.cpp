#include <stdio.h>
#include<stdlib.h>
/*Estructura llamada alumno para los dato de 3 alumnos y mostrar cual tiene el 
mejor promedio
Elaborado por: Viviana Rojas Ruiz*/

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
}estudiantes[3],*pestu=estudiantes,aux[3],*paux=aux;

int main() {
	
	printf("Ingrese Datos de los Estudiantes:\n");
	for(int i=0;i<3;i++){
		fflush stdin;
		printf("\n%i.Nombre: ",i+1);
		gets((pestu+i)->nombre);
		printf("%i.Edad: ",i+1);
		scanf("%d",&(pestu+i)->edad);
		printf("%i.Promedio: ",i+1);
		scanf("%f",&(pestu+i)->promedio);
	}

	printf("\n<<<<<<<Mostrando datos del alumno Mejor Promedio>>>>>>>\n");
	if(((pestu+0)->promedio > (pestu+1)->promedio)&&((pestu+0)->promedio > (pestu+2)->promedio)){
		printf("Nombre: %s",(pestu+0)->nombre);
		printf("\nEdad: %d",(pestu+0)->edad);
		printf("\nPromedio: %.1f",(pestu+0)->promedio);
	}
	if(((pestu+1)->promedio > (pestu+2)->promedio) && ((pestu+1)->promedio > (pestu+0)->promedio)){
		printf("Nombre: %s",(pestu+1)->nombre);
		printf("\nEdad: %d",(pestu+1)->edad);
		printf("\nPromedio: %.1f",(pestu+1)->promedio);
	}
	if (((pestu+2)->promedio > (pestu+1)->promedio)&&((pestu+2)->promedio > (pestu+0)->promedio)){
		printf("Nombre: %s",(pestu+2)->nombre);
		printf("\nEdad: %d",(pestu+2)->edad);
		printf("\nPromedio: %.1f",(pestu+2)->promedio);
	}
	
	


	
	return 0;
}

