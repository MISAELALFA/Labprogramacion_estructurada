#include<stdio.h>
#include<stdlib.h>

/* Practica 4 Calculadora lunes 24 de febrero de 2020*/
float  num1, num2, Resultado;

int main() 
{
char op;
printf("Calculadora simple\n");
printf("Escribe el primer numero: \n");
scanf("%f", &num1);
printf("Escribe la operacion a realizar: \n"); fflush(stdin);
scanf("%c", &op); 
printf("Escribe el segundo numero: \n");
scanf("%f", &num2);
switch(op)
{
	case '+':
		Resultado=num1+num2;
	break;
	case '-':
		Resultado=num1-num2;
	break;
	case '*':
		Resultado=num1*num2;
	break;
	case '/':
		Resultado= num1/num2;
	default:
		printf: ("operador invalido \n");
}
printf(" %.2f %c %.2f = %.2f ", num1, op, num2, Resultado);

return 0;
}
