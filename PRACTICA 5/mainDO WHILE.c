#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int N=0, sumpos=0, n=0;
float prompos=0;

int main(int argc, char *argv[]) {
	printf("Programa para promedio de numeros positivos.\n");
	printf("Ingrese el primer numero: ");
	scanf("%d", &N);
 	int i = 1;
 	do{
 		printf("Ingrese el numero %d: \t", i+1);
		sumpos=sumpos+N;
		scanf("%d", &N);
 		i++;
	
	}
	while(N>0);
	n=i-1;
	printf("FIN\n");
	prompos=sumpos/n;
	printf("El promedio de numeros positivos es: %f", prompos);
	return 0;
	}
