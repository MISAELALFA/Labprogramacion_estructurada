#include <stdio.h>
#include <stdlib.h>
int maximo, numero, divisor, residuo, indice, numeros[100];
float divisible;
int main(){
	printf("Ingresa el numero maximo menor a 100:  ");
	scanf("%d", &maximo);
	printf("\nAYUDA VISUAL: 0= 'FALSO' y 1= 'VERDADERO'");
	
	for(indice=1; indice<maximo; indice++) //se inicio el indice en 1
	{
		numero=indice+1;    
		residuo=1;
		divisible=residuo==0;
		divisor=2;
		while(divisor < numero && divisible == false)  // evaluamos primero si divisible es igual a falso luego el otro lado el valor del numero 1 es falso F y V= FALSO
		{
			residuo= numero%divisor; 
			divisible= residuo==0;
			divisor++;
		}
	numeros[indice]=!divisible; // aqui el valor de 1 es primo por eso empezamos de 1 porque 1 no es primo
	}
	printf("\n  Resultado: \n");
	for(indice=0; indice<maximo; indice++)
	{
		numero=indice+1;
		printf("numero: %d es primo: %d \n", numero, numeros[indice]);
	}
return 0;
}
