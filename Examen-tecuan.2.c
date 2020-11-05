#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	float a;
	system("cls");
	
	printf("Introducir el ingreso mensual:");
	scanf("%f", &a);
	
	if (a<=10000){
		printf("Impuesto por el 5 porciento\n");
		printf("Valor del ingreso menos los impuestos: $%.2f\n", a-(a*.05));
	}
	if (a > 10000 && a<=15000){
		printf("Impuesto por el 10 porciento\n");
		printf("Valor del ingreso menos los impuestos: $%.2f\n", a-(a*.10));
	}
	if( a > 15000 && a<=20000){
		printf("Impuesto por el 15 porciento\n");
		printf("Valor del ingreos menos lso impuestos: $%.2f\n", a-(a*.15));
	}
	if (a > 20000){
		printf("Impuesto por el 18 porciento\n");
		printf("Valor del ingreso meso los impuestos: $%.2f\n", a-(a*.18));
	}
	system("pause");
	return 0;
}

