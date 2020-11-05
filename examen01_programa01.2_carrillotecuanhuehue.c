#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("El costo de cada payaso es de $200\n");
	printf("El costo de cada juego de mesa es de $180\n");
	printf("Valor de envio: $2000\n");
	printf("La cantidad minima de peso es de 10kg.\n Se le conbrar un %c10 del envio por cada kilo que se pase.\n");
	
	
	printf("-----------------------------------------------\n");
	//Payaso=p//  // juego de mesa=m//	

int p, m;

	//payasos//
	printf("Introducir la cantidad de payasos que se ordenaran: \n");
	scanf("%d", &p);
			
	//juegos de mesa//
	printf("Introducir la cantidad dejuegos de mesa que se ordenaran: \n");
	scanf("%d", &m);

int costo_de_payasos = p*200;
int costo_juego_de_mesa = m*180;
int costo_de_envio = 2000;
int costo_de_ambos = (costo_de_payasos)+(costo_juego_de_mesa);

	printf("Costo total de los payasos: $%d. \n", costo_de_payasos);
	printf("Costo total de los juegos de mesa: $%d. \n", costo_juego_de_mesa );
	printf("Costo total por la compra de ambos: $%d. \n", costo_de_ambos);
	
float peso_de_payasos = p*150;
float peso_juego_de_mesa = m*170;
float peso_de_ambos = (peso_de_payasos + peso_juego_de_mesa)/1000;

if (peso_de_ambos>10){
	printf("El peso total del envio es de: %.2f kg.\n", peso_de_ambos);
	printf("Uted paso el limite de peso establecido.\n Se le cobrara un 10 porcineto de envio por pasar la cantidad minima de peso.\n");
	
int peso_de_envio = peso_de_ambos - 10;
int costo_de_envio = 2000;
float precio_del_envio = costo_de_envio + (costo_de_envio*peso_de_envio*0.1);
printf("Costo total por el envio: $%.2f\n", precio_del_envio);

}

else {
	printf("El peso total de envio fue de: %.2f Kg.\n", peso_de_ambos);
}
}

	

