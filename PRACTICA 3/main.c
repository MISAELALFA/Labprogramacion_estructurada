#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf("caracter que ingreso: ");
	c = getchar();
	int a = (int) c;
	if(48 <= a && a <= 57){
	 printf("numero que ingreso: ");
	}else{
		if( 65 <= a && a <= 90){
		 printf("alfabetico superior que ingreso: ");
		}else{
			if(97 <= a && a <= 122){
			 printf("alfabetico inferior que ingreso: ");
			}else{
			 printf(" simbolo que ingreso: ");
			}
		}
	}
	putchar(c);
	printf("\n");
	return 0;
}
