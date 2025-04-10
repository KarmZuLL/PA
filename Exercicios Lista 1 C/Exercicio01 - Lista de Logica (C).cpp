#include <stdio.h>
main()
{
	float num, dobro, metade;
	printf ("Digite um valor: ");
	scanf ("%f", &num);
	dobro = num * 2;
	metade = num/2;
	printf (" O Valor digitado foi: %.1f, seu dobro e: %.1f, e sua metade e: %.1f", num, dobro, metade);
}
