#include <stdio.h>
main ()
{
	int a,b,c,r,s,d;
	printf("Digite o valor de A: ");
	scanf ("%i", &a);
	printf("Digite o valor de B: ");
	scanf ("%i", &b);
	printf("Digite o valor de C: ");
	scanf ("%i", &c);
	r = (a + b)/c;
	s = (b+c)/a;
	d = (r+s)/2;
	printf("O Calculo de R: %i, O Calculo de S: %i, O Caculo de D: %i", r,s,d);
}
