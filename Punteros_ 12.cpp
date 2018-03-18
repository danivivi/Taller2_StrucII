#include <stdio.h>
#include<stdlib.h>

/*Estructura que indica el tiempo empleado por un ciclista en recorrer 3 etapas
Elaborado por: Viviana Rojas Ruiz*/

struct tiempo{
	int horas;
	int minutos;
	int segundos;
}etapas[3],*petapas=etapas;

int main() {
	int sumaHoras=0,sumaMinutos=0,sumaSegundos=0;
	printf("Ingrese Horas Minutos y Segundos de las tres Etapas\n");
	for(int i=0;i<3;i++){
		printf("-->Etapa %i",i+1);
		printf("\nHoras: ");
		scanf("%d",&(petapas+i)->horas);
		printf("Minutos: ");
		scanf("%d",&(petapas+i)->minutos);
		printf("Segundos: ");
		scanf("%d",&(petapas+i)->segundos);
		
		sumaHoras=sumaHoras+(petapas+i)->horas;
		sumaMinutos=sumaMinutos+(petapas+i)->minutos;		
		if(sumaMinutos>=60){
			sumaMinutos-=60;
			sumaHoras++;
		}
		sumaSegundos=sumaSegundos+(petapas+i)->segundos;
		if(sumaSegundos>=60){
			sumaSegundos-=60;
			sumaMinutos++;
		}
		printf("\n");
	}
	printf("\n<<<<<<<<<Tiempo Empleado en las tres Etapas>>>>>>>>>>>>>>>\n");
	printf("\nHoras:%d \nMinutos:%d \nSegundos:%d",sumaHoras,sumaMinutos,sumaSegundos);	
	return 0;
}

