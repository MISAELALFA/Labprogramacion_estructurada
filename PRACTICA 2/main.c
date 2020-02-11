#include <stdio.h>
#include <stdlib.h>
int a=3, b=4;
int c=3+4;
int d=3*4;
int e=4%3;
int f=4<3;
int g=4>3;
int IGUAL=(3==4);
int h=4&&3;
int i=3||4;
int j=(!4);



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("%d + %d = %d\n", a, b ,c);
	printf("%d x %d = %d\n", a, b, d);
	printf("%d mod %d = %d\n", b, a, e);
	printf("4 manor que 3= %d\n", f);
	printf("4 mayor que 3= %d\n", g);
	printf("%d igual que %d= %d\n", a, b, IGUAL);
	printf("%d && %d= %d\n",b,a,h);
	printf("%d || %d= %d\n", a, b, i);
	printf("! %d= %d\n", b, j);
	
	return 0;
}
