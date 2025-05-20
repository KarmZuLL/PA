#include <stdio.h>
main()
{
	float num, s, a;
	printf ("Digite um valor: ");
	scanf ("%f", &num);
	a = num - 1;
	s = num + 1;
	printf (" O Valor digitado foi: %.1f, seu antecessor e: %.1f, e seu sucessor e: %.1f", num, a, s);
}
